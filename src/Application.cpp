#include <wx/image.h>
#include "../include/Application.h"
#include "../include/GuiLogin.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	GuiLogin *win = new GuiLogin(NULL);
	win->Show();
	return true;
}

