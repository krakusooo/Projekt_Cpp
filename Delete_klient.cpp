#include "Delete_klient.h"

//(*InternalHeaders(Delete_klient)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Delete_klient)
const long Delete_klient::ID_STATICTEXT1 = wxNewId();
const long Delete_klient::ID_SPINCTRL1 = wxNewId();
const long Delete_klient::ID_BUTTON1 = wxNewId();
const long Delete_klient::ID_BUTTON2 = wxNewId();
const long Delete_klient::ID_STATICTEXT2 = wxNewId();
const long Delete_klient::ID_STATICTEXT3 = wxNewId();
const long Delete_klient::ID_STATICTEXT4 = wxNewId();
const long Delete_klient::ID_STATICTEXT5 = wxNewId();
const long Delete_klient::ID_STATICTEXT6 = wxNewId();
const long Delete_klient::ID_STATICTEXT7 = wxNewId();
const long Delete_klient::ID_CONTEXTHELPBUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Delete_klient,wxDialog)
	//(*EventTable(Delete_klient)
	//*)
END_EVENT_TABLE()

Delete_klient::Delete_klient(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Delete_klient)
	Create(parent, id, _("Delete Client"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(270,400));
	Move(wxDefaultPosition);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Delet Rental"), wxPoint(40,20), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	Button1 = new wxButton(this, ID_BUTTON1, _("Delete"), wxPoint(10,304), wxSize(120,24), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button2 = new wxButton(this, ID_BUTTON2, _("Cancel"), wxPoint(140,304), wxSize(120,24), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Name:"), wxPoint(40,60), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Surname"), wxPoint(40,100), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("E-mail"), wxPoint(40,140), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Street"), wxPoint(40,180), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Nr of House "), wxPoint(40,220), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Nr of apartament"), wxPoint(40,260), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	wxFont StaticText7Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);


	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Delete_klient::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Delete_klient::OnButton2Click);
	//*)
}

Delete_klient::~Delete_klient()
{
	//(*Destroy(Delete_klient)
	//*)
}


void Delete_klient::OnButton2Click(wxCommandEvent& event)
{
    Close();
}

void Delete_klient::OnUpdata()
{

      StaticText2->SetLabel("Name : "+Parent_frame->Klient->node->get_name());
      StaticText3->SetLabel("Surname : "+Parent_frame->Klient->node->get_surname());
      StaticText4->SetLabel("E-mail : "+Parent_frame->Klient->node->get_login());
      StaticText5->SetLabel("Street : "+Parent_frame->Klient->node->get_Adress_Ul());
      StaticText6->SetLabel("Nr of House : "+Parent_frame->Klient->node->get_Adress_Hous_N());
      StaticText7->SetLabel("Nr of House : "+Parent_frame->Klient->node->get_Adress_local_N());

}

void Delete_klient::OnButton1Click(wxCommandEvent& event)
{
        int id_k=Parent_frame->Klient->node->get_id();
        if(Parent_frame->Relent->find_id_klienta(id_k)!=false){
            int id_f=Parent_frame->Relent->node->get_id_filmu();
            Parent_frame->Videos->findId(id_f);
            Parent_frame->Videos->set_availability(true);
        Parent_frame->Relent->erse_node(); }
        Parent_frame->Klient->erese_node();


    Close();
}
