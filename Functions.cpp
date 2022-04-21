#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>

using namespace System;
using namespace System::Runtime::InteropServices;

#define FILENAME "users.dat"

namespace FileFunctions {
    struct User
    {
        char id[4];
        char name[150];
        char birthdate[11];
        char state[30];
        char country[30];
        char username[16];
        char password[30];
        char mail[50];
        char credits[5];
    };

    void MakeFile()
    {
        FILE* f;

        f = fopen(FILENAME, "wb");
        fclose(f);
    }

    int GetLastID()
    {
        FILE* f;
        User value;

        int c = 1;
        if ((f = fopen(FILENAME, "rb")) == NULL)
        {
            MakeFile();
        }
        else
        {
            while (fread(&value, sizeof(value), 1, f))
            {
                c++;
            }
            fclose(f);
        }

        return c;
    }

    int GetTotalOfUsers()
    {
        return GetLastID() - 1;
    }

    void ReadFile()
    {
        FILE* f;
        User valor;

        if ((f = fopen(FILENAME, "rb")) == NULL)
        {
            MakeFile();
        }
        else
        {
            fclose(f);
        }
    }

    void AddUser(char* name, char* birthdate, char* state, 
        char* country, char* username, char* password, char* mail, char* credits)
    {
        FILE* f;
        int lastId = GetLastID();
        User newContact;

        if (lastId <= 999)
        {
            itoa(lastId, newContact.id, 10);
            strcpy(newContact.name, name);
            strcpy(newContact.birthdate, birthdate);
            strcpy(newContact.state, state);
            strcpy(newContact.country, country);
            strcpy(newContact.username, username);
            strcpy(newContact.password, password);
            strcpy(newContact.mail, mail);
            strcpy(newContact.credits, credits);

            f = fopen(FILENAME, "ab");
            fwrite(&newContact, sizeof(newContact), 1, f);
            fclose(f);
        }
    }

    void AddUser(String^ name, String^ birthdate, String^ state,
        String^ country, String^ username, String^ password,
        String^ mail, String^ credits)
    {
        char* nameC = (char*)Marshal::StringToHGlobalAnsi(name).ToPointer();
        char* birthdateC = (char*)Marshal::StringToHGlobalAnsi(birthdate).ToPointer();
        char* stateC = (char*)Marshal::StringToHGlobalAnsi(state).ToPointer();
        char* countryC = (char*)Marshal::StringToHGlobalAnsi(country).ToPointer();
        char* usernameC = (char*)Marshal::StringToHGlobalAnsi(username).ToPointer();
        char* passwordC = (char*)Marshal::StringToHGlobalAnsi(password).ToPointer();
        char* mailC = (char*)Marshal::StringToHGlobalAnsi(mail).ToPointer();
        char* creditsC = (char*)Marshal::StringToHGlobalAnsi(credits).ToPointer();
        
        AddUser(nameC, birthdateC, stateC, countryC, usernameC, passwordC,
            mailC, creditsC);

        Marshal::FreeHGlobal((IntPtr)nameC);
        Marshal::FreeHGlobal((IntPtr)birthdateC);
        Marshal::FreeHGlobal((IntPtr)stateC);
        Marshal::FreeHGlobal((IntPtr)countryC);
        Marshal::FreeHGlobal((IntPtr)usernameC);
        Marshal::FreeHGlobal((IntPtr)passwordC);
        Marshal::FreeHGlobal((IntPtr)mailC);
        Marshal::FreeHGlobal((IntPtr)creditsC);
    }

    void RemoveUser(int id)
    {
        FILE* f, * tmp;
        User valor, lista[999];
        int c = 0;
        char idChar[5];

        itoa(id, idChar, 10);

        if ((f = fopen(FILENAME, "rb")) == NULL)
        {
            MakeFile();
        }
        else if (GetLastID() - 1 > 0)
        {
            while (fread(&valor, sizeof(valor), 1, f))
            {
                if (strcmp(idChar, valor.id) != 0)
                {
                    lista[c] = valor;
                    c++;
                }
            }
            fclose(f);

            remove(FILENAME);

            f = fopen(FILENAME, "wb");
            for (int i = 0; i <= c - 1; i++)
            {
                itoa(i + 1, lista[i].id, 10);
                fwrite(&lista[i], sizeof(lista[i]), 1, f);
            }
            fclose(f);
        }
        else
        {
            fclose(f);
        }
    }

    /*void ModifyUser()
    {
        FILE* f, * tmp;
        User valor, lista[100];
        char id[10];
        int c = 0;

        printf("\n- MODIFICAR CONTACTO -\n");

        printf("Id del contacto a modificar: ");
        fgets(id, sizeof(id), stdin);
        id[strlen(id) - 1] = '\0';

        if ((f = fopen(FILENAME, "rb")) == NULL)
        {
            MakeFile();
        }
        else if (GetLastID() - 1 > 0)
        {
            bool match = false;
            while (fread(&valor, sizeof(valor), 1, f))
            {
                if (strcmp(id, valor.id) == 0)
                {
                    match = true;

                    printf("Introduzca un nombre: ");
                    fgets(valor.nombre, sizeof(valor.nombre), stdin);
                    valor.nombre[strlen(valor.nombre) - 1] = '\0';

                    printf("Introduzca el primer apellido: ");
                    fgets(valor.apellido1, sizeof(valor.apellido1), stdin);
                    valor.apellido1[strlen(valor.apellido1) - 1] = '\0';

                    printf("Introduzca el segundo apellido: ");
                    fgets(valor.apellido2, sizeof(valor.apellido2), stdin);
                    valor.apellido2[strlen(valor.apellido2) - 1] = '\0';

                    printf("Introduzca la fecha de nacimiento: ");
                    fgets(valor.fechaDeNacimiento, sizeof(valor.fechaDeNacimiento), stdin);
                    valor.fechaDeNacimiento[strlen(valor.fechaDeNacimiento) - 1] = '\0';

                    printf("Introduzca la direccion de correo electronico: ");
                    fgets(valor.email, sizeof(valor.email), stdin);
                    valor.email[strlen(valor.email) - 1] = '\0';

                    printf("Introduzca el numero de telefono: ");
                    fgets(valor.telefono, sizeof(valor.telefono), stdin);
                    valor.telefono[strlen(valor.telefono) - 1] = '\0';

                    lista[c] = valor;
                    c++;
                }
                else
                {
                    lista[c] = valor;
                    c++;
                }
            }
            fclose(f);

            if (match)
            {
                remove(FILENAME);

                f = fopen(FILENAME, "wb");
                for (int i = 0; i <= c - 1; i++)
                {
                    itoa(i + 1, lista[i].id, 10);
                    fwrite(&lista[i], sizeof(lista[i]), 1, f);
                }
                fclose(f);
            }
            else
            {
                printf("No se ha encontrado ningun contacto con el ID %s.\n", id);
            }
        }
        else
        {
            printf("No se ha encontrado ningun contacto.\n");
            fclose(f);
        }
    }*/

    array <array <String^>^>^ GetUsers()
    {
        FILE* f;
        User value;
        array <array <String^>^>^ userList;

        if ((f = fopen(FILENAME, "rb")) == NULL)
        {
            MakeFile();
        }
        else if (GetTotalOfUsers() > 0)
        {
            int numberOfUsers = GetTotalOfUsers();
            int positionOffset = numberOfUsers;

            userList = gcnew array<array<String^>^>(numberOfUsers);

            String^ name;
            String^ birthdate;
            String^ state;
            String^ country;
            String^ username;
            String^ mail;
            String^ credits;

            while (fread(&value, sizeof(value), 1, f))
            {
                name = gcnew String(value.name);
                birthdate = gcnew String(value.birthdate);
                state = gcnew String(value.state);
                country = gcnew String(value.country);
                username = gcnew String(value.username);
                mail = gcnew String(value.mail);
                credits = gcnew String(value.credits);

                userList[numberOfUsers - positionOffset] = gcnew array<String^>{name, birthdate, state, country, username, mail, credits};
                positionOffset--;
            }

            fclose(f);
        }

        return userList;
    }
}
