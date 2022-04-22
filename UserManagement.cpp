#include "pch.h"

using namespace System;

#include "FileFunctions.cpp"
#include "AddUserWindow.h"
#include "ModifyUserWindow.h"
#include "ModifyCreditsWindow.h"
#include "MainWindow.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew UserManagement::MainWindow());
  return 0;
}