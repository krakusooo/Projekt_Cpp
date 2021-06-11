#include "AsortymentDatabeseEdit.h"
#include "delleteVideo.h"
#include "ADD_Video.h"
#include "Czhange_price.h"
#include <string>
#include <wx/msgdlg.h>
//(*InternalHeaders(AsortymentDatabeseEdit)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(AsortymentDatabeseEdit)
const long AsortymentDatabeseEdit::ID_BUTTON1 = wxNewId();
const long AsortymentDatabeseEdit::ID_BUTTON2 = wxNewId();
const long AsortymentDatabeseEdit::ID_LISTCTRL1 = wxNewId();
const long AsortymentDatabeseEdit::ID_BUTTON3 = wxNewId();
const long AsortymentDatabeseEdit::ID_BUTTON4 = wxNewId();
const long AsortymentDatabeseEdit::ID_STATICTEXT1 = wxNewId();
const long AsortymentDatabeseEdit::ID_TEXTCTRL1 = wxNewId();
const long AsortymentDatabeseEdit::ID_BUTTON5 = wxNewId();
const long AsortymentDatabeseEdit::ID_LISTCTRL2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(AsortymentDatabeseEdit,wxFrame)
	//(*EventTable(AsortymentDatabeseEdit)
	//*)
END_EVENT_TABLE()

AsortymentDatabeseEdit::AsortymentDatabeseEdit(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(AsortymentDatabeseEdit)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;

	Create(parent, id, _("Admin"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUBAR));
	{
		wxIcon FrameIcon;
		FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("ikona.png"))));
		SetIcon(FrameIcon);
	}
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("ADD Movie"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer4->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("DELETE Movie"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer4->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer4, 1, wxALL|wxALIGN_LEFT, 5);
	ListCtrl1 = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxSize(378,582), wxLC_REPORT, wxDefaultValidator, _T("ID_LISTCTRL1"));
	BoxSizer2->Add(ListCtrl1, 10, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	BoxSizer5 = new wxBoxSizer(wxVERTICAL);
	Button3 = new wxButton(this, ID_BUTTON3, _("Edit prices"), wxDefaultPosition, wxSize(235,33), 0, wxDefaultValidator, _T("ID_BUTTON3"));
	BoxSizer5->Add(Button3, 1, wxALL|wxEXPAND, 5);
	Button4 = new wxButton(this, ID_BUTTON4, _("Back"), wxDefaultPosition, wxSize(370,50), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	BoxSizer5->Add(Button4, 1, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(BoxSizer5, 1, wxALL|wxALIGN_RIGHT, 5);
	BoxSizer6 = new wxBoxSizer(wxVERTICAL);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Shearch by Tital :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer7->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6->Add(BoxSizer7, 1, wxALL|wxALIGN_LEFT, 5);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer8->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5);
	Button5 = new wxButton(this, ID_BUTTON5, _("Find"), wxDefaultPosition, wxSize(180,23), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	BoxSizer8->Add(Button5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6->Add(BoxSizer8, 1, wxALL, 5);
	BoxSizer3->Add(BoxSizer6, 1, wxALL|wxEXPAND, 5);
	ListCtrl2 = new wxListCtrl(this, ID_LISTCTRL2, wxDefaultPosition, wxDefaultSize, wxLC_REPORT, wxDefaultValidator, _T("ID_LISTCTRL2"));
	BoxSizer3->Add(ListCtrl2, 3, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AsortymentDatabeseEdit::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AsortymentDatabeseEdit::OnButton2Click);
	Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_ITEM_SELECTED,(wxObjectEventFunction)&AsortymentDatabeseEdit::OnListCtrl1BeginDrag);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AsortymentDatabeseEdit::OnButton3Click);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AsortymentDatabeseEdit::OnButton4Click);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AsortymentDatabeseEdit::OnButton5Click);
	Connect(ID_LISTCTRL2,wxEVT_COMMAND_LIST_ITEM_SELECTED,(wxObjectEventFunction)&AsortymentDatabeseEdit::OnListCtrl2BeginDrag);
	//*)
		ListCtrl1->InsertColumn(0,"ID");
    ListCtrl1->InsertColumn(1,"Move Title");
    ListCtrl1->InsertColumn(2,"Movy type");
    ListCtrl1->InsertColumn(3,"Production Year:");
    ListCtrl1->InsertColumn(4,"Price per day:");
    ListCtrl1->InsertColumn(5,"Price per week:");
    ListCtrl1->InsertColumn(6,"Director");
    ListCtrl1->InsertColumn(7,"Status");

	ListCtrl2->InsertColumn(0,"ID");
    ListCtrl2->InsertColumn(1,"Move Title");
    ListCtrl2->InsertColumn(2,"Movy type");
    ListCtrl2->InsertColumn(3,"Production Year:");
    ListCtrl2->InsertColumn(4,"Price per day:");
    ListCtrl2->InsertColumn(5,"Price per week:");
    ListCtrl2->InsertColumn(6,"Director");
    ListCtrl2->InsertColumn(7,"Status");
}

AsortymentDatabeseEdit::~AsortymentDatabeseEdit()
{        parent_frame->Show();
	//(*Destroy(AsortymentDatabeseEdit)
	//*)
}


void AsortymentDatabeseEdit::OnButton5Click(wxCommandEvent& event)
{
    ListCtrl2->DeleteAllItems();
  std::string film_title = TextCtrl1->GetValue().ToStdString();
           int i=1;

while(i<=Videos->last_id){
if(Videos->findId(i)!=false){
        if(film_title==Videos->node->getFilmTitle()){
int id_filmu=Videos->node->getId();
std::string id_f=std::to_string(id_filmu);
std::string Move_Title=Videos->node->getFilmTitle();
std::string FilmType=Videos->node->getFilmType();
std::string ProductionYear=std::to_string(Videos->node->getProductionYear());
std::string Director=Videos->node->getDirector();
std::string PricePerday=std::to_string(Videos->node->getPricePerDay());
std::string PricePerWeek=std::to_string(Videos->node->getPricePerWeek());
bool wypozycstatus = Videos->node->get_availability();

long itemIndex=ListCtrl2->InsertItem(i,"1");
ListCtrl2->SetItem(itemIndex,0,id_f);
ListCtrl2->SetItem(itemIndex,1,Move_Title);
ListCtrl2->SetItem(itemIndex,2,FilmType);
ListCtrl2->SetItem(itemIndex,3,ProductionYear);
ListCtrl2->SetItem(itemIndex,6,Director);
ListCtrl2->SetItem(itemIndex,4,PricePerday);
ListCtrl2->SetItem(itemIndex,5,PricePerWeek);
if(wypozycstatus==true)
    ListCtrl1->SetItem(itemIndex,7,"available");
else
    ListCtrl1->SetItem(itemIndex,7,"inaccessible");
}}
i++;
}
}
void AsortymentDatabeseEdit::onUpdata()
{
      int x,y;
  parent_frame->GetPosition(&x,&y);
  Move(x,y);
           int i=1;
ListCtrl1->DeleteAllItems();
if(Videos->Is_empty()!=true)
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

void AsortymentDatabeseEdit::OnButton4Click(wxCommandEvent& event)
{
    Close();
}

void AsortymentDatabeseEdit::OnButton2Click(wxCommandEvent& event)
{
     if(ListCtrl1->GetSelectedItemCount()!=0||ListCtrl2->GetSelectedItemCount()!=0){
    delleteVideo *new_dialog =new delleteVideo(0);
   new_dialog->parent_frame=this;
   new_dialog->OnUpdata();
   new_dialog->ShowModal();
   delete new_dialog;
   onUpdata();}else wxMessageBox("Please select a client from one of the two lists",_("Edit error"));
}

void AsortymentDatabeseEdit::OnButton1Click(wxCommandEvent& event)
{
    ADD_Video *new_dialog=new ADD_Video(0);
      new_dialog->parent_frame=this;
   new_dialog->ShowModal();
   delete new_dialog;
}

void AsortymentDatabeseEdit::OnButton3Click(wxCommandEvent& event)
{
    if(ListCtrl1->GetSelectedItemCount()!=0||ListCtrl2->GetSelectedItemCount()!=0){
    Czhange_price*new_dialog=new Czhange_price(0);
       new_dialog->parent_frame=this;
       new_dialog->onUpdata();
   new_dialog->ShowModal();
   delete new_dialog;}else{wxMessageBox("Please select a client from one of the two lists",_("Edit error"));}
}

void AsortymentDatabeseEdit::OnListCtrl1BeginDrag(wxListEvent& event)
{
     long number=ListCtrl1->GetNextItem(-1,wxLIST_NEXT_ALL,wxLIST_STATE_SELECTED);

  std::string Item=ListCtrl1->GetItemText(number,0).ToStdString();
  int id=atoi(Item.c_str());
  Videos->findId(id);
}

void AsortymentDatabeseEdit::OnListCtrl2BeginDrag(wxListEvent& event)
{
        long number=ListCtrl2->GetNextItem(-1,wxLIST_NEXT_ALL,wxLIST_STATE_SELECTED);

  std::string Item=ListCtrl2->GetItemText(number,0).ToStdString();
  int id=atoi(Item.c_str());
  Videos->findId(id);
}


