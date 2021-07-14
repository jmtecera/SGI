#include <wx/image.h>
#include "Application.h"
#include "GuiLogin.h"
#include "wxfb_project.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	GuiLogin *win = new GuiLogin(NULL);
	win->Show();
	return true;
}

