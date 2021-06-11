#include "ShearchEngin.h"
#include <wx/msgdlg.h>
//(*InternalHeaders(ShearchEngin)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(ShearchEngin)
const long ShearchEngin::ID_STATICTEXT4 = wxNewId();
const long ShearchEngin::ID_STATICTEXT1 = wxNewId();
const long ShearchEngin::ID_TEXTCTRL1 = wxNewId();
const long ShearchEngin::ID_STATICTEXT2 = wxNewId();
const long ShearchEngin::ID_TEXTCTRL2 = wxNewId();
const long ShearchEngin::ID_STATICTEXT3 = wxNewId();
const long ShearchEngin::ID_SPINCTRL1 = wxNewId();
const long ShearchEngin::ID_LISTCTRL1 = wxNewId();
const long ShearchEngin::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ShearchEngin,wxDialog)
	//(*EventTable(ShearchEngin)
	//*)
END_EVENT_TABLE()

ShearchEngin::ShearchEngin(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(ShearchEngin)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;

	Create(parent, id, _("Shearch Engin"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Shearch Movie"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	BoxSizer1->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("By Title"), wxDefaultPosition, wxSize(76,22), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer2->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer2->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("By Director"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	BoxSizer2->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer2->Add(TextCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("By ID"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	BoxSizer2->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl1 = new wxSpinCtrl(this, ID_SPINCTRL1, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL1"));
	SpinCtrl1->SetValue(_T("0"));
	BoxSizer2->Add(SpinCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ListCtrl1 = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxSize(720,227), wxLC_REPORT, wxDefaultValidator, _T("ID_LISTCTRL1"));
	BoxSizer1->Add(ListCtrl1, 4, wxALL|wxEXPAND, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("Find"), wxDefaultPosition, wxSize(399,42), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ShearchEngin::OnButton1Click);
	//*)
    ListCtrl1->InsertColumn(0,"ID");
    ListCtrl1->InsertColumn(1,"Move Title");
    ListCtrl1->InsertColumn(2,"Movy type");
    ListCtrl1->InsertColumn(3,"Production Year:");
    ListCtrl1->InsertColumn(4,"Price per day:");
    ListCtrl1->InsertColumn(5,"Price per week:");
    ListCtrl1->InsertColumn(6,"Director");
    ListCtrl1->InsertColumn(7,"Status");
}

ShearchEngin::~ShearchEngin()
{
	//(*Destroy(ShearchEngin)
	//*)
}
void ShearchEngin::OnUpdata()
{
               int i=1;
ListCtrl1->DeleteAllItems();
while(i<=Videos->last_id){
if(Videos->findId(i)!=false){
int id_filmu=Videos->node->getId();
std::string id_f=std::to_string(id_filmu);
std::string Move_Title=Videos->node->getFilmTitle();
std::string FilmType=Videos->node->getFilmType();
std::string ProductionYear=std::to_string(Videos->node->getProductionYear());
std::string Director=Videos->node->getDirector();
std::string PricePerday=std::to_string(Videos->node->getPricePerDay());
std::string PricePerWeek=std::to_string(Videos->node->getPricePerWeek());
bool wypozycstatus = Videos->node->get_availability();

long itemIndex=ListCtrl1->InsertItem(i,"1");
ListCtrl1->SetItem(itemIndex,0,id_f);
ListCtrl1->SetItem(itemIndex,1,Move_Title);
ListCtrl1->SetItem(itemIndex,2,FilmType);
ListCtrl1->SetItem(itemIndex,3,ProductionYear);
ListCtrl1->SetItem(itemIndex,6,Director);
ListCtrl1->SetItem(itemIndex,4,PricePerday);
ListCtrl1->SetItem(itemIndex,5,PricePerWeek);
if(wypozycstatus==true)
    ListCtrl1->SetItem(itemIndex,7,"available");
else
    ListCtrl1->SetItem(itemIndex,7,"inaccessible");
}
i++;
}
}

void ShearchEngin::OnButton1Click(wxCommandEvent& event)
{
    std::string tital=TextCtrl1->GetValue().ToStdString();
    std::string director=TextCtrl2->GetValue().ToStdString();
    int id=SpinCtrl1->GetValue();
    bool check1,check2,check3;
    check1=Videos->findFilmTitle(tital);
    check2=Videos->findDirector(director);
    check3=Videos->findId(id);
    if(check1==false&&check2==false&&check3==false)
    {
        wxMessageBox("Video not found",_("Find error"));
        OnUpdata();
    }else
    {ListCtrl1->DeleteAllItems();
    int i=1;
while(i<=Videos->last_id){
if(Videos->findId(i)!=false){
 if(tital==Videos->node->getFilmTitle()||director==Videos->node->getDirector()||id==Videos->node->getId()){
int id_filmu=Videos->node->getId();
std::string id_f=std::to_string(id_filmu);
std::string Move_Title=Videos->node->getFilmTitle();
std::string FilmType=Videos->node->getFilmType();
std::string ProductionYear=std::to_string(Videos->node->getProductionYear());
std::string Director=Videos->node->getDirector();
std::string PricePerday=std::to_string(Videos->node->getPricePerDay());
std::string PricePerWeek=std::to_string(Videos->node->getPricePerWeek());
bool wypozycstatus = Videos->node->get_availability();

long itemIndex=ListCtrl1->InsertItem(i,"1");
ListCtrl1->SetItem(itemIndex,0,id_f);
ListCtrl1->SetItem(itemIndex,1,Move_Title);
ListCtrl1->SetItem(itemIndex,2,FilmType);
ListCtrl1->SetItem(itemIndex,3,ProductionYear);
ListCtrl1->SetItem(itemIndex,6,Director);
ListCtrl1->SetItem(itemIndex,4,PricePerday);
ListCtrl1->SetItem(itemIndex,5,PricePerWeek);
if(wypozycstatus==true)
    ListCtrl1->SetItem(itemIndex,7,"available");
else
    ListCtrl1->SetItem(itemIndex,7,"inaccessible");
}}
i++;
}
    }

}
