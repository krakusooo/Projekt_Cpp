#include "UserFrame.h"
#include "edit_klient1.h"
#include "ShearchEngin.h"
//(*InternalHeaders(UserFrame)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(UserFrame)
const long UserFrame::ID_STATICTEXT1 = wxNewId();
const long UserFrame::ID_STATICTEXT2 = wxNewId();
const long UserFrame::ID_BUTTON2 = wxNewId();
const long UserFrame::ID_BUTTON1 = wxNewId();
const long UserFrame::ID_CALENDARCTRL1 = wxNewId();
const long UserFrame::ID_BUTTON3 = wxNewId();
const long UserFrame::ID_STATICTEXT3 = wxNewId();
const long UserFrame::ID_LISTCTRL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(UserFrame,wxFrame)
	//(*EventTable(UserFrame)
	//*)
END_EVENT_TABLE()

UserFrame::UserFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(UserFrame)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
	{
		wxIcon FrameIcon;
		FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("ikona.png"))));
		SetIcon(FrameIcon);
	}
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer5 = new wxBoxSizer(wxVERTICAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("User :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer5->Add(StaticText1, 1, wxALL|wxALIGN_LEFT, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("E-mail :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	BoxSizer5->Add(StaticText2, 1, wxALL|wxALIGN_LEFT, 5);
	BoxSizer3->Add(BoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(132,10,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("Setings"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("Logout"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer3->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer6 = new wxBoxSizer(wxVERTICAL);
	CalendarCtrl1 = new wxCalendarCtrl(this, ID_CALENDARCTRL1, wxDefaultDateTime, wxDefaultPosition, wxSize(283,177), 0, _T("ID_CALENDARCTRL1"));
	CalendarCtrl1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
	BoxSizer6->Add(CalendarCtrl1, 7, wxALL|wxEXPAND, 5);
	Button3 = new wxButton(this, ID_BUTTON3, _("Search engine"), wxDefaultPosition, wxSize(234,23), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	BoxSizer6->Add(Button3, 1, wxALL|wxEXPAND, 5);
	BoxSizer4->Add(BoxSizer6, 1, wxALL|wxEXPAND, 5);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Your current rentals :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	BoxSizer2->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ListCtrl1 = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxSize(273,172), wxLC_REPORT, wxDefaultValidator, _T("ID_LISTCTRL1"));
	BoxSizer2->Add(ListCtrl1, 7, wxALL|wxEXPAND, 5);
	BoxSizer4->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer4, 3, wxALL|wxEXPAND, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UserFrame::OnButton2Click);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UserFrame::OnButton1Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UserFrame::OnButton3Click);
	//*)
ListCtrl1->InsertColumn(0,"Id_Zamowienia");
ListCtrl1->InsertColumn(1,"Id_Klienta");
ListCtrl1->InsertColumn(2,"Tytul");
ListCtrl1->InsertColumn(3,"Data_wypoz");
ListCtrl1->InsertColumn(4,"Data_wzrotu");
}
void UserFrame::onUpdata()
{     int x,y;
  parent_frame->GetPosition(&x,&y);
  Move(x,y);


    int id_k=Klient->node->get_id();
    std::string name=Klient->node->get_name();
    std::string surname=Klient->node->get_surname();
    std::string Login=Klient->node->get_login();
    StaticText1->SetLabel("User : "+name+" "+surname);
    StaticText2->SetLabel("E-mail : "+Login);
    Relent->find_id_klienta(id_k);
       int i=1;
  while(i<=Relent->last_id){
   if(Relent->find_id_zamowienia(i)!=false){
  if(id_k==Relent->node->get_id_klienta()){
        Videos->findId(Relent->node->get_id_filmu());
std::string id_zamowienia=std::to_string(Relent->node->get_id_zamowienia());
std::string id_klienta=std::to_string(Relent->node->get_id_klienta());
std::string id_film=Videos->node->getFilmTitle();
std::string Data_wypoz=Relent->node->get_data_wypoz();
std::string Data_zwroru=Relent->node->get_data_zwrotu();
long itemIndex=ListCtrl1->InsertItem(i,"1");
ListCtrl1->SetItem(itemIndex,0,id_zamowienia);
ListCtrl1->SetItem(itemIndex,1,id_klienta);
ListCtrl1->SetItem(itemIndex,2,id_film);
ListCtrl1->SetItem(itemIndex,3,Data_wypoz);
ListCtrl1->SetItem(itemIndex,4,Data_zwroru);
  }}
i++;
}
}
UserFrame::~UserFrame()
{      parent_frame->Show();
	//(*Destroy(UserFrame)
	//*)
}


void UserFrame::OnButton1Click(wxCommandEvent& event)
{
    Close();
}

void UserFrame::OnButton2Click(wxCommandEvent& event)
{
    edit_klient1*new_dialog=new edit_klient1(0);
    new_dialog->Klient=Klient;
    new_dialog->onUpdata();
    new_dialog->ShowModal();
    delete new_dialog;
}

void UserFrame::OnButton3Click(wxCommandEvent& event)
{
     ShearchEngin*newDailog=new ShearchEngin(0);
     newDailog->Videos=Videos;
     newDailog->OnUpdata();
     newDailog->ShowModal();
     delete newDailog;
}
