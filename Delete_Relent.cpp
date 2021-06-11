#include "Delete_Relent.h"

//(*InternalHeaders(Delete_Relent)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Delete_Relent)
const long Delete_Relent::ID_STATICTEXT1 = wxNewId();
const long Delete_Relent::ID_STATICTEXT2 = wxNewId();
const long Delete_Relent::ID_STATICTEXT3 = wxNewId();
const long Delete_Relent::ID_STATICTEXT4 = wxNewId();
const long Delete_Relent::ID_SPINCTRL1 = wxNewId();
const long Delete_Relent::ID_STATICTEXT5 = wxNewId();
const long Delete_Relent::ID_CONTEXTHELPBUTTON1 = wxNewId();
const long Delete_Relent::ID_BUTTON1 = wxNewId();
const long Delete_Relent::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Delete_Relent,wxDialog)
	//(*EventTable(Delete_Relent)
	//*)
END_EVENT_TABLE()

Delete_Relent::Delete_Relent(int lastID,wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{


	//(*Initialize(Delete_Relent)
	Create(parent, id,_("Delete rental"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(320,273));
	Move(wxDefaultPosition);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Film Titale :"), wxPoint(30,60), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("User E-mail"), wxPoint(30,90), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Relent Data :"), wxPoint(30,120), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Date of return:"), wxPoint(30,150), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);

	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Delete Rental"), wxPoint(100,15), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);

	Button1 = new wxButton(this, ID_BUTTON1, _("Delete Relent"), wxPoint(10,200), wxSize(140,24), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button2 = new wxButton(this, ID_BUTTON2, _("Cancel"), wxPoint(170,200), wxSize(140,24), 0, wxDefaultValidator, _T("ID_BUTTON2"));


	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Delete_Relent::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Delete_Relent::OnButton2Click);
	//*)
}

Delete_Relent::~Delete_Relent()
{
	//(*Destroy(Delete_Relent)
	//*)
}


void Delete_Relent::OnUpdata()
{

        Parent_frame->Videos->findId(Parent_frame->Relent->node->get_id_filmu());
        Parent_frame->Klient->find_id(Parent_frame->Relent->node->get_id_klienta());

        StaticText1->SetLabel("Film Titale : "+Parent_frame->Videos->node->getFilmTitle());
        StaticText2->SetLabel("User E-mail : "+Parent_frame->Klient->node->get_login());
        StaticText3->SetLabel("Relent Data : "+Parent_frame->Relent->node->get_data_wypoz());
        StaticText4->SetLabel("Date of return : "+Parent_frame->Relent->node->get_data_zwrotu());



}

void Delete_Relent::OnButton1Click(wxCommandEvent& event)
{



        Parent_frame->Relent->erse_node();

    Close();
}

void Delete_Relent::OnButton2Click(wxCommandEvent& event)
{
    Close();
}
