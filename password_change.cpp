#include "password_change.h"
#include <wx/msgdlg.h>
//(*InternalHeaders(password_change)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(password_change)
const long password_change::ID_TEXTCTRL1 = wxNewId();
const long password_change::ID_TEXTCTRL2 = wxNewId();
const long password_change::ID_STATICTEXT1 = wxNewId();
const long password_change::ID_STATICTEXT2 = wxNewId();
const long password_change::ID_BUTTON1 = wxNewId();
const long password_change::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(password_change,wxDialog)
	//(*EventTable(password_change)
	//*)
END_EVENT_TABLE()

password_change::password_change(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{

    returnvalue=false;
	//(*Initialize(password_change)
	Create(parent, id,_("Enter New Password"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(300,200));
	Move(wxDefaultPosition);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(50,40), wxSize(200,24), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxPoint(50,100), wxSize(200,24), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Set new password"), wxPoint(56,16), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Confirm pasword"), wxPoint(56,76), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	Button1 = new wxButton(this, ID_BUTTON1, _("Ok"), wxPoint(50,150), wxSize(90,24), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button2 = new wxButton(this, ID_BUTTON2, _("Cancel"), wxPoint(160,150), wxSize(90,24), 0, wxDefaultValidator, _T("ID_BUTTON2"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&password_change::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&password_change::OnButton2Click);
	//*)
}

password_change::~password_change()
{
	//(*Destroy(password_change)

	//*)
}


void password_change::OnButton1Click(wxCommandEvent& event)
{   std::string password=TextCtrl1->GetValue().ToStdString();
    std::string password1=TextCtrl2->GetValue().ToStdString();

    if(password==password1){


    Close();
    returnvalue=true;}
    else
        wxMessageBox("Passwords are not correct!",_("Password error"));
}

void password_change::OnButton2Click(wxCommandEvent& event)
{
   Close();
    returnvalue= false;

}


