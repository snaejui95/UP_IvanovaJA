#include "MyForm11.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Mainn(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Practic::MyForm1 form;
	Application::Run(% form);
}