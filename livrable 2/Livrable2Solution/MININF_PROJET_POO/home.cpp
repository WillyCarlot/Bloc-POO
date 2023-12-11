#include "home.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MININFPROJETPOO::home monFormulaire;
	Application::Run(% monFormulaire);
}