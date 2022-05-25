#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
        char password[50];
        char mail[50];
        char credits[5];
        char score[5];
    };

    void MakeFile()
    {
        FILE* f;

        f = fopen(FILENAME, "wb");
        fclose(f);
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

    int GetLastID()
    {
        FILE* f;
        User value;

        ReadFile();

        int c = 1;
        if ((f = fopen(FILENAME, "rb")) != NULL)
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

    bool UsernameExists(char* username)
    {
        FILE* f, * tmp;
        User valor, lista[999];
        char idChar[5];
        int c = 0;
        bool match = false;

        ReadFile();

        if ((f = fopen(FILENAME, "rb")) != NULL && GetTotalOfUsers() > 0)
        {
            while (fread(&valor, sizeof(valor), 1, f) && !match)
            {
                if (strcmp(valor.username, username) == 0)
                {
                    match = true;

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
        }
        
        return match;
    }

    int AddUser(char* name, char* birthdate, char* state, 
        char* country, char* username, char* password, char* mail, char* credits)
    {
        FILE* f;
        int lastId = GetLastID();
        User newContact;
        unsigned char* md5;

        ReadFile();

        if (UsernameExists(username))
        {
            return 2;
        }
        else if (lastId <= 999)
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
            strcpy(newContact.score, "0");

            f = fopen(FILENAME, "ab");
            fwrite(&newContact, sizeof(newContact), 1, f);
            fclose(f);

            return 0;
        }
        else
        {
            return 1;
        }
    }

    int AddUser(String^ name, String^ birthdate, String^ state,
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
        
        int error = AddUser(nameC, birthdateC, stateC, countryC, usernameC, passwordC,
            mailC, creditsC);

        Marshal::FreeHGlobal((IntPtr)nameC);
        Marshal::FreeHGlobal((IntPtr)birthdateC);
        Marshal::FreeHGlobal((IntPtr)stateC);
        Marshal::FreeHGlobal((IntPtr)countryC);
        Marshal::FreeHGlobal((IntPtr)usernameC);
        Marshal::FreeHGlobal((IntPtr)passwordC);
        Marshal::FreeHGlobal((IntPtr)mailC);
        Marshal::FreeHGlobal((IntPtr)creditsC);

        return error;
    }

    void RemoveUser(int id)
    {
        FILE* f, * tmp;
        User valor, lista[999];
        int c = 0;
        char idChar[5];

        itoa(id, idChar, 10);

        ReadFile();

        if ((f = fopen(FILENAME, "rb")) != NULL && GetLastID() - 1 > 0)
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
    }

    void ModifyUser(int id, char* name, char* birthdate, char* state,
        char* country, char* username, char* password, char* mail, char* score)
    {
        FILE* f, * tmp;
        User valor, lista[999];
        char idChar[5];
        int c = 0;

        itoa(id, idChar, 10);

        ReadFile();
        
        if ((f = fopen(FILENAME, "rb")) != NULL && GetTotalOfUsers() > 0)
        {
            bool match = false;
            while (fread(&valor, sizeof(valor), 1, f))
            {
                if (strcmp(idChar, valor.id) == 0)
                {
                    match = true;

                    strcpy(valor.name, name);
                    strcpy(valor.birthdate, birthdate);
                    strcpy(valor.state, state);
                    strcpy(valor.country, country);
                    strcpy(valor.username, username);
                    strcpy(valor.password, password);
                    strcpy(valor.mail, mail);
                    strcpy(valor.score, score);

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
        }
    }

    void ModifyUser(int id, String^ name, String^ birthdate, String^ state,
        String^ country, String^ username, String^ password, String^ mail, String^ score)
    {
        char* nameC = (char*)Marshal::StringToHGlobalAnsi(name).ToPointer();
        char* birthdateC = (char*)Marshal::StringToHGlobalAnsi(birthdate).ToPointer();
        char* stateC = (char*)Marshal::StringToHGlobalAnsi(state).ToPointer();
        char* countryC = (char*)Marshal::StringToHGlobalAnsi(country).ToPointer();
        char* usernameC = (char*)Marshal::StringToHGlobalAnsi(username).ToPointer();
        char* passwordC = (char*)Marshal::StringToHGlobalAnsi(password).ToPointer();
        char* mailC = (char*)Marshal::StringToHGlobalAnsi(mail).ToPointer();
        char* scoreC = (char*)Marshal::StringToHGlobalAnsi(score).ToPointer();

        ModifyUser(id, nameC, birthdateC, stateC, countryC, usernameC, passwordC, mailC, scoreC);

        Marshal::FreeHGlobal((IntPtr)nameC);
        Marshal::FreeHGlobal((IntPtr)birthdateC);
        Marshal::FreeHGlobal((IntPtr)stateC);
        Marshal::FreeHGlobal((IntPtr)countryC);
        Marshal::FreeHGlobal((IntPtr)usernameC);
        Marshal::FreeHGlobal((IntPtr)passwordC);
        Marshal::FreeHGlobal((IntPtr)mailC);
        Marshal::FreeHGlobal((IntPtr)scoreC);
    }

    void ModifyCredits(int id, char* credits)
    {
        FILE* f, * tmp;
        User valor, lista[999];
        char idChar[5];
        int c = 0;

        itoa(id, idChar, 10);

        ReadFile();

        if ((f = fopen(FILENAME, "rb")) != NULL && GetTotalOfUsers() > 0)
        {
            bool match = false;
            while (fread(&valor, sizeof(valor), 1, f))
            {
                if (strcmp(idChar, valor.id) == 0)
                {
                    match = true;

                    strcpy(valor.credits, credits);

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
        }
    }

    void ModifyCredits(int id, String^ credits)
    {
        char* creditsC = (char*)Marshal::StringToHGlobalAnsi(credits).ToPointer();

        ModifyCredits(id, creditsC);

        Marshal::FreeHGlobal((IntPtr)creditsC);
    }

    array <String^>^ GetUser(int id)
    {
        FILE* f;
        User value;
        array<String^>^ user;
        int c = 1;

        ReadFile();

        if ((f = fopen(FILENAME, "rb")) != NULL && GetTotalOfUsers() > 0)
        {
            String^ name;
            String^ birthdate;
            String^ state;
            String^ country;
            String^ username;
            String^ password;
            String^ mail;
            String^ credits;
            String^ score;

            while (fread(&value, sizeof(value), 1, f) && c <= id)
            {
                if (c == id)
                {
                    name = gcnew String(value.name);
                    birthdate = gcnew String(value.birthdate);
                    state = gcnew String(value.state);
                    country = gcnew String(value.country);
                    username = gcnew String(value.username);
                    password = gcnew String(value.password);
                    mail = gcnew String(value.mail);
                    credits = gcnew String(value.credits);
                    score = gcnew String(value.score);

                    user = gcnew array<String^>{name, birthdate, state,
                        country, username, password, mail, credits, score};
                }

                c++;
            }

            fclose(f);
        }

        return user;
    }

    array <array <String^>^>^ GetUsers()
    {
        FILE* f;
        User value;
        array <array <String^>^>^ userList;

        ReadFile();

        if ((f = fopen(FILENAME, "rb")) != NULL && GetTotalOfUsers() > 0)
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
            String^ score;

            while (fread(&value, sizeof(value), 1, f))
            {
                name = gcnew String(value.name);
                birthdate = gcnew String(value.birthdate);
                state = gcnew String(value.state);
                country = gcnew String(value.country);
                username = gcnew String(value.username);
                mail = gcnew String(value.mail);
                credits = gcnew String(value.credits);
                score = gcnew String(value.score);

                userList[numberOfUsers - positionOffset] = 
                    gcnew array<String^>{name, birthdate, state, 
                    country, username, mail, credits, score};
                positionOffset--;
            }

            fclose(f);
        }

        return userList;
    }
}
