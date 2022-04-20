#include "pch.h"

using namespace System;

#include "Functions.cpp"
#include "AddUserWindow.h"
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