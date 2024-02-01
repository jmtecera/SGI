#ifndef GUIAGREGARUSERS_H
#define GUIAGREGARUSERS_H
#include "wxfb_project.h"

class GuiAgregarUsers : public AgregarUsers {
	
private:
	
protected:
	void OnClickUserNuevoSave( wxCommandEvent& event )  override;
	void OnClickUserNuevoCancel( wxCommandEvent& event )  override;
	
public:
	GuiAgregarUsers(wxWindow *parent=NULL);
	~GuiAgregarUsers();
};

#endif

