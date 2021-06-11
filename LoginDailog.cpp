#include "LoginDailog.h"
#include "CreateAcount.h"
#include "sizersv2Main.h"
#include <wx/msgdlg.h>
#include "UserFrame.h"
//(*InternalHeaders(LoginDailog)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)
//helper functions

//(*IdInit(LoginDailog)
const long LoginDailog::ID_STATICTEXT1 = wxNewId();
const long LoginDailog::ID_TEXTCTRL1 = wxNewId();
const long LoginDailog::ID_STATICTEXT2 = wxNewId();
const long LoginDailog::ID_TEXTCTRL2 = wxNewId();
const long LoginDailog::ID_BUTTON1 = wxNewId();
const long LoginDailog::ID_BUTTON2 = wxNewId();
const long LoginDailog::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(LoginDailog,wxFrame)
	//(*EventTable(LoginDailog)
	//*)
END_EVENT_TABLE()

LoginDailog::LoginDailog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
     Relent= new Database_relent();
     Klient=new Database_Klient();
     Videos=new DatabaseAssortment();

	//(*Initialize(LoginDailog)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;

	Create(parent, id, _("DataBase klient"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
	{
		wxIcon FrameIcon;
		FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("ikona.png"))));
		SetIcon(FrameIcon);
	}
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("E-mail"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer2->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(170,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer2->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Password"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	BoxSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(170,23), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer3->Add(TextCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Login"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer4->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("Create Account"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer4->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
	int __wxStatusBarWidths_1[1] = { -10 };
	int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
	StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
	StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
	SetStatusBar(StatusBar1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LoginDailog::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LoginDailog::OnButton2Click);
	//*)

}

LoginDailog::~LoginDailog()
{
	//(*Destroy(LoginDailog)
	//*)
}
void LoginDailog::load_from_fill()
{
    if(Relent->load_from_file()==false){
     wxMessageBox("I can open file",_("Fill error"));
     Close();}

     if(Klient->load_from_file()==false){
        wxMessageBox("I can open file",_("Fill error"));
        Close();}
     if(Videos->loadFromFile()==false){
       wxMessageBox("I can open file",_("Fill error"));
      Close();}
}
void LoginDailog::save_to_fill()
{
      Relent->seve_to_file();
    Klient->save_in_file();
    Videos->saveInFile();
}
void LoginDailog::OnButton2Click(wxCommandEvent& event)
{   load_from_fill();
    CreateAcount *new_dialog=new CreateAcount(0);
    new_dialog->Parent_frame2=this;
    new_dialog->Klient=Klient;
    new_dialog->ShowModal();
    delete new_dialog;

}

void LoginDailog::OnButton1Click(wxCommandEvent& event)
{
   load_from_fill();
    std::string login=TextCtrl1->GetValue().ToStdString();
    std::string password=TextCtrl2->GetValue().ToStdString();
    std::string spr2;
    bool spr1=Klient->find_login(login);
    if(spr1==true)
         spr2=Klient->node->get_password();
    if(login==password&&login=="admin")
    {
        sizersv2Frame*admin_frame=new sizersv2Frame(0);
        admin_frame->parent_frame=this;
        admin_frame->Klient=Klient;
        admin_frame->Videos=Videos;
        admin_frame->Relent=Relent;
        admin_frame->Onupdata();
        this->Hide();
        admin_frame->Show();
    }
    else
    {
        if(spr1==true&&password==spr2)
        {
          UserFrame*ue_frame=new UserFrame(0);
          ue_frame->parent_frame=this;
          ue_frame->Klient=Klient;
          ue_frame->Videos=Videos;
          ue_frame->Relent=Relent;
          ue_frame->onUpdata();
          this->Hide();
          ue_frame->Show();
        }
        else

        wxMessageBox("E-mail or password are not correct", _("login"));
    }
    TextCtrl1->Clear();
    TextCtrl2->Clear();
}
