#ifndef GUIEDITUSERS_H
#define GUIEDITUSERS_H
#include "wxfb_project.h"
#include "Usuario.h"

class GuiEditUsers : public EditUsers {
	
private:
	Usuario *user;
	
protected:
	void OnClickUserEditSave( wxCommandEvent& event )  override;
	void OnClickUserEditCancel( wxCommandEvent& event )  override;
	
public:
	GuiEditUsers(wxWindow *parent=NULL);
	
	void Inicializar(Usuario *u);
	
	~GuiEditUsers();
};

#endif

