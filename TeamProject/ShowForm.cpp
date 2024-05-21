#include "ShowForm.h"

using namespace TeamProject;

[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew ShowForm());
	return 0;
}