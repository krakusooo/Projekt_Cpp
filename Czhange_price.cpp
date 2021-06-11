#include "Czhange_price.h"

//(*InternalHeaders(Czhange_price)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Czhange_price)
const long Czhange_price::ID_STATICTEXT4 = wxNewId();
const long Czhange_price::ID_STATICTEXT5 = wxNewId();
const long Czhange_price::ID_STATICTEXT3 = wxNewId();
const long Czhange_price::ID_STATICTEXT1 = wxNewId();
const long Czhange_price::ID_SPINCTRLDOUBLE1 = wxNewId();
const long Czhange_price::ID_STATICTEXT2 = wxNewId();
const long Czhange_price::ID_SPINCTRLDOUBLE2 = wxNewId();
const long Czhange_price::ID_BUTTON1 = wxNewId();
const long Czhange_price::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Czhange_price,wxDialog)
	//(*EventTable(Czhange_price)
	//*)
END_EVENT_TABLE()

Czhange_price::Czhange_price(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Czhange_price)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;

	Create(parent, id, _("Change prices"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Movie Tital :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	BoxSizer1->Add(StaticText4, 1, wxALL|wxALIGN_LEFT, 5);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Prace per day :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	BoxSizer1->Add(StaticText5, 1, wxALL|wxALIGN_LEFT, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Prace per week:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	BoxSizer1->Add(StaticText3, 1, wxALL|wxALIGN_LEFT, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Set new price per day    "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer4->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrlDouble1 = new wxSpinCtrlDouble(this, ID_SPINCTRLDOUBLE1, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 0, 0.01, _T("ID_SPINCTRLDOUBLE1"));
	SpinCtrlDouble1->SetValue(_T("0"));
	BoxSizer4->Add(SpinCtrlDouble1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Set new price per week"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	BoxSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrlDouble2 = new wxSpinCtrlDouble(this, ID_SPINCTRLDOUBLE2, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 0, 0.01, _T("ID_SPINCTRLDOUBLE2"));
	SpinCtrlDouble2->SetValue(_T("0"));
	BoxSizer3->Add(SpinCtrlDouble2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Save"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer2->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer2->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Czhange_price::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Czhange_price::OnButton2Click);
	//*)
}

Czhange_price::~Czhange_price()
{
	//(*Destroy(Czhange_price)
	//*)
}


void Czhange_price::OnButton2Click(wxCommandEvent& event)
{
    Close();
}

void Czhange_price::OnButton1Click(wxCommandEvent& event)
{
   float price1=SpinCtrlDouble1->GetValue();
   float price2=SpinCtrlDouble2->GetValue();
   parent_frame->Videos->setPricePerDay(price1);
   parent_frame->Videos->setPricePerWeek(price2);
   parent_frame->onUpdata();
   parent_frame->Videos->saveInFile();
   Close();

}
void Czhange_price::onUpdata()
{
    std::string tytul =parent_frame->Videos->node->getFilmTitle();
    float pricePerDay=parent_frame->Videos->node->getPricePerDay();
    float pricePerWeek=parent_frame->Videos->node->getPricePerWeek();
    std::string price1=std::to_string(pricePerDay);
    std::string price2=std::to_string(pricePerWeek);
   StaticText4->SetLabel("Movie Tital : "+tytul);
   StaticText5->SetLabel("Price per day : "+price1);
     StaticText3->SetLabel("Price per week : "+price2);

}
