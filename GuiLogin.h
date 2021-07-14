#ifndef GUILOGIN_H
#define GUILOGIN_H
#include "wxfb_project.h"

enum returnValues{Empty = 0, Bad = 1 , Successful = 2};

class GuiLogin : public MenuLogin {
	
private:
	
protected:
	void OnTextLoginUserEnter( wxCommandEvent& event )  override;
	void OnTextLoginPassEnter( wxCommandEvent& event )  override;
	void OnClickAdminUsers( wxCommandEvent& event )  override;
	void OnClickAdminExit( wxCommandEvent& event )  override;
	void OnTextLoginUserMax( wxCommandEvent& event )  override;
	void OnTextLoginPassMax( wxCommandEvent& event )  override;
	void OnClickInq( wxCommandEvent& event )  override;
	void OnClickInm( wxCommandEvent& event )  override;
	void OnClickProp( wxCommandEvent& event )  override;
	void OnClickMenuAdmin( wxCommandEvent& event )  override;
	void OnClickMenuLogout( wxCommandEvent& event )  override;
	void OnClickLoginLogin( wxCommandEvent& event )  override;
	void OnClickLoginExit( wxCommandEvent& event )  override;
	
public:
	GuiLogin(wxWindow *parent=NULL);
	~GuiLogin();
};

#endif

