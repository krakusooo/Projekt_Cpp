#include "edit_klient1.h"
#include "password_change.h"
#include <wx/msgdlg.h>
//(*InternalHeaders(edit_klient1)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(edit_klient1)
const long edit_klient1::ID_STATICTEXT1 = wxNewId();
const long edit_klient1::ID_TEXTCTRL1 = wxNewId();
const long edit_klient1::ID_BUTTON1 = wxNewId();
const long edit_klient1::ID_STATICTEXT2 = wxNewId();
const long edit_klient1::ID_TEXTCTRL2 = wxNewId();
const long edit_klient1::ID_BUTTON2 = wxNewId();
const long edit_klient1::ID_STATICTEXT3 = wxNewId();
const long edit_klient1::ID_TEXTCTRL3 = wxNewId();
const long edit_klient1::ID_BUTTON3 = wxNewId();
const long edit_klient1::ID_STATICTEXT4 = wxNewId();
const long edit_klient1::ID_TEXTCTRL4 = wxNewId();
const long edit_klient1::ID_BUTTON4 = wxNewId();
const long edit_klient1::ID_STATICTEXT5 = wxNewId();
const long edit_klient1::ID_TEXTCTRL5 = wxNewId();
const long edit_klient1::ID_BUTTON5 = wxNewId();
const long edit_klient1::ID_STATICTEXT9 = wxNewId();
const long edit_klient1::ID_TEXTCTRL7 = wxNewId();
const long edit_klient1::ID_BUTTON11 = wxNewId();
const long edit_klient1::ID_STATICTEXT7 = wxNewId();
const long edit_klient1::ID_SPINCTRL1 = wxNewId();
const long edit_klient1::ID_BUTTON8 = wxNewId();
const long edit_klient1::ID_STATICTEXT8 = wxNewId();
const long edit_klient1::ID_SPINCTRL2 = wxNewId();
const long edit_klient1::ID_BUTTON7 = wxNewId();
const long edit_klient1::ID_STATICTEXT6 = wxNewId();
const long edit_klient1::ID_TEXTCTRL6 = wxNewId();
const long edit_klient1::ID_BUTTON6 = wxNewId();
const long edit_klient1::ID_BUTTON9 = wxNewId();
const long edit_klient1::ID_BUTTON10 = wxNewId();
//*)

BEGIN_EVENT_TABLE(edit_klient1,wxDialog)
	//(*EventTable(edit_klient1)
	//*)
END_EVENT_TABLE()

edit_klient1::edit_klient1(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{

	//(*Initialize(edit_klient1)
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer11;
	wxBoxSizer* BoxSizer12;
	wxBoxSizer* BoxSizer13;
	wxBoxSizer* BoxSizer14;
	wxBoxSizer* BoxSizer15;
	wxBoxSizer* BoxSizer16;
	wxBoxSizer* BoxSizer17;
	wxBoxSizer* BoxSizer18;
	wxBoxSizer* BoxSizer19;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer20;
	wxBoxSizer* BoxSizer21;
	wxBoxSizer* BoxSizer22;
	wxBoxSizer* BoxSizer23;
	wxBoxSizer* BoxSizer24;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer9;

	Create(parent, id, _("Edit"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Name : "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer3->Add(StaticText1, 1, wxALL|wxALIGN_LEFT, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer5->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("Edit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer5->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4 = new wxBoxSizer(wxVERTICAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Surname :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	BoxSizer4->Add(StaticText2, 1, wxALL|wxALIGN_LEFT, 5);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer6->Add(TextCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("Edit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer6->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer9 = new wxBoxSizer(wxVERTICAL);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("E-mail :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	BoxSizer9->Add(StaticText3, 1, wxALL|wxALIGN_LEFT, 5);
	BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	BoxSizer11->Add(TextCtrl3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(this, ID_BUTTON3, _("Edit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	BoxSizer11->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer9->Add(BoxSizer11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7->Add(BoxSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer10 = new wxBoxSizer(wxVERTICAL);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Enter Current password :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	BoxSizer10->Add(StaticText4, 1, wxALL|wxALIGN_LEFT, 5);
	BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl4 = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	BoxSizer12->Add(TextCtrl4, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5);
	Button4 = new wxButton(this, ID_BUTTON4, _("Edit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	BoxSizer12->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer10->Add(BoxSizer12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7->Add(BoxSizer10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer13 = new wxBoxSizer(wxVERTICAL);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Telefon Number :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	BoxSizer13->Add(StaticText5, 1, wxALL|wxALIGN_LEFT, 5);
	BoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl5 = new wxTextCtrl(this, ID_TEXTCTRL5, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	BoxSizer15->Add(TextCtrl5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button5 = new wxButton(this, ID_BUTTON5, _("Edit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	BoxSizer15->Add(Button5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer13->Add(BoxSizer15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer8->Add(BoxSizer13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer23 = new wxBoxSizer(wxVERTICAL);
	StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("City :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	wxFont StaticText9Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText9->SetFont(StaticText9Font);
	BoxSizer23->Add(StaticText9, 1, wxALL|wxALIGN_LEFT, 5);
	BoxSizer24 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl7 = new wxTextCtrl(this, ID_TEXTCTRL7, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	BoxSizer24->Add(TextCtrl7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button11 = new wxButton(this, ID_BUTTON11, _("Edit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
	BoxSizer24->Add(Button11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer23->Add(BoxSizer24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer8->Add(BoxSizer23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer19 = new wxBoxSizer(wxVERTICAL);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Nr. House :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	wxFont StaticText7Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	BoxSizer19->Add(StaticText7, 1, wxALL|wxALIGN_LEFT, 5);
	BoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
	SpinCtrl1 = new wxSpinCtrl(this, ID_SPINCTRL1, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL1"));
	SpinCtrl1->SetValue(_T("0"));
	BoxSizer21->Add(SpinCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button8 = new wxButton(this, ID_BUTTON8, _("Edit"), wxDefaultPosition, wxSize(100,23), 0, wxDefaultValidator, _T("ID_BUTTON8"));
	BoxSizer21->Add(Button8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer19->Add(BoxSizer21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer17->Add(BoxSizer19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer20 = new wxBoxSizer(wxVERTICAL);
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Nr. Apartament :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	wxFont StaticText8Font(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText8->SetFont(StaticText8Font);
	BoxSizer20->Add(StaticText8, 1, wxALL|wxALIGN_LEFT, 5);
	BoxSizer22 = new wxBoxSizer(wxHORIZONTAL);
	SpinCtrl2 = new wxSpinCtrl(this, ID_SPINCTRL2, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL2"));
	SpinCtrl2->SetValue(_T("0"));
	BoxSizer22->Add(SpinCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button7 = new wxButton(this, ID_BUTTON7, _("Edit"), wxDefaultPosition, wxSize(100,23), 0, wxDefaultValidator, _T("ID_BUTTON7"));
	BoxSizer22->Add(Button7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer20->Add(BoxSizer22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer17->Add(BoxSizer20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer14 = new wxBoxSizer(wxVERTICAL);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Street :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	BoxSizer14->Add(StaticText6, 1, wxALL|wxALIGN_LEFT, 5);
	BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl6 = new wxTextCtrl(this, ID_TEXTCTRL6, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	BoxSizer16->Add(TextCtrl6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button6 = new wxButton(this, ID_BUTTON6, _("Edit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	BoxSizer16->Add(Button6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer14->Add(BoxSizer16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer17->Add(BoxSizer14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	Button9 = new wxButton(this, ID_BUTTON9, _("Save"), wxDefaultPosition, wxSize(176,23), 0, wxDefaultValidator, _T("ID_BUTTON9"));
	BoxSizer18->Add(Button9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button10 = new wxButton(this, ID_BUTTON10, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
	BoxSizer18->Add(Button10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&edit_klient1::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&edit_klient1::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&edit_klient1::OnButton3Click);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&edit_klient1::OnButton4Click);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&edit_klient1::OnButton5Click);
	Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&edit_klient1::OnButton11Click);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&edit_klient1::OnButton8Click);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&edit_klient1::OnButton7Click);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&edit_klient1::OnButton6Click);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&edit_klient1::OnButton9Click);
	Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&edit_klient1::OnButton10Click);
	//*)
}

edit_klient1::~edit_klient1()
{       Klient->save_in_file();
	//(*Destroy(edit_klient1)
	//*)
}

void edit_klient1::onUpdata(){

    id=Klient->node->get_id();
    name=Klient->node->get_name();
	surname=Klient->node->get_surname();
	password=Klient->node->get_password();
	emil=Klient->node->get_login();
	telefon_nr=Klient->node->get_tel_number();
	city=Klient->node->get_Adress_Ul();
	nr_house=Klient->node->get_Adress_Hous_N();
	local_nr=Klient->node->get_Adress_local_N();
    Miasto=Klient->node->get_City();

    StaticText1->SetLabel("Name : "+name );
    StaticText2->SetLabel("Surname : "+surname);
    StaticText3->SetLabel("E-mail : "+emil);
    StaticText5->SetLabel("Telefon Number : "+telefon_nr );
    StaticText6->SetLabel("Street : "+city );
    StaticText7->SetLabel("Nr. House : "+nr_house );
    StaticText8->SetLabel("Nr. Apartament : "+local_nr );
    StaticText9->SetLabel("City : "+Miasto );

}
void edit_klient1::OnButton1Click(wxCommandEvent& event)
{
    name=TextCtrl1->GetValue().ToStdString();
    StaticText1->SetLabel("Name : "+name );
}

void edit_klient1::OnButton2Click(wxCommandEvent& event)
{
    surname=TextCtrl2->GetValue().ToStdString();
    StaticText2->SetLabel("Surname : "+surname);
}

void edit_klient1::OnButton3Click(wxCommandEvent& event)
{
    emil=TextCtrl3->GetValue().ToStdString();
    StaticText3->SetLabel("E-mail : "+emil);
}

void edit_klient1::OnButton5Click(wxCommandEvent& event)
{
    telefon_nr=TextCtrl5->GetValue().ToStdString();
    StaticText5->SetLabel("Telefon Number : "+telefon_nr );
}

void edit_klient1::OnButton6Click(wxCommandEvent& event)
{
    city=TextCtrl6->GetValue().ToStdString();
    StaticText6->SetLabel("Street : "+city );
}

void edit_klient1::OnButton4Click(wxCommandEvent& event)
{

    std::string curentPassword=TextCtrl4->GetValue().ToStdString();

    if(password==curentPassword)
    {
    password_change *new_pass=new password_change(0);
    new_pass->ShowModal();
    if(new_pass->returnvalue==true)
    {
        password=new_pass->TextCtrl1->GetValue();
        TextCtrl4->SetValue("");
        delete new_pass;
    }else delete new_pass;

    }
    else{

        wxMessageBox("Current password is wrong!! ",_("Error"));
    }

}

void edit_klient1::OnButton10Click(wxCommandEvent& event)
{
    Close();
}

void edit_klient1::OnButton8Click(wxCommandEvent& event)
{
   int nr=SpinCtrl1->GetValue();
   nr_house=std::to_string(nr);
   StaticText7->SetLabel("Nr. House : "+nr_house);
}

void edit_klient1::OnButton7Click(wxCommandEvent& event)
{
    int nr=SpinCtrl2->GetValue();
    local_nr=std::to_string(nr);
    StaticText8->SetLabel("Nr. Apartament : "+local_nr );
}

void edit_klient1::OnButton9Click(wxCommandEvent& event)
{   id=Klient->node->get_id();
    int last=Klient->last_id;

    Klient->erese_node();
    Klient->insert_node(id,name,surname,password,telefon_nr,emil,city,nr_house,local_nr,Miasto);
    Klient->last_id=last;
    Klient->save_in_file();
    Klient->find_id(id);
    wxMessageBox("Edit suckessfull",_("Edit"));
    Close();

}

void edit_klient1::OnButton11Click(wxCommandEvent& event)
{
    Miasto=TextCtrl7->GetValue().ToStdString();
    StaticText9->SetLabel("City : "+Miasto );

}
