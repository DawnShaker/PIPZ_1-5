#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace LAB3;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Application::Run(gcnew MyForm());

    return 0;
}