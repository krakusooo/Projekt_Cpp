
#include "Delete_klient.h"
#include "CreateAcount.h"
#include <wx/msgdlg.h>
#include "edit_klient1.h"
//(*InternalHeaders(KlientDatabeseEdit)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(KlientDatabeseEdit)
const long KlientDatabeseEdit::ID_BUTTON2 = wxNewId();
const long KlientDatabeseEdit::ID_BUTTON3 = wxNewId();
const long KlientDatabeseEdit::ID_BUTTON7 = wxNewId();
const long KlientDatabeseEdit::ID_LISTCTRL1 = wxNewId();
const long KlientDatabeseEdit::ID_BUTTON4 = wxNewId();
const long KlientDatabeseEdit::ID_BUTTON5 = wxNewId();
const long KlientDatabeseEdit::ID_STATICTEXT1 = wxNewId();
const long KlientDatabeseEdit::ID_BUTTON6 = wxNewId();
const long KlientDatabeseEdit::ID_TEXTCTRL1 = wxNewId();
const long KlientDatabeseEdit::ID_BUTTON1 = wxNewId();
const long KlientDatabeseEdit::ID_LISTCTRL2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(KlientDatabeseEdit,wxFrame)
	//(*EventTable(KlientDatabeseEdit)
	//*)
END_EVENT_TABLE()

KlientDatabeseEdit::KlientDatabeseEdit(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	////(*Initialize(KlientDatabeseEdit)
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
	  SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
	  {
	  	wxIcon FrameIcon;
	  	FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("ikona.png"))));
	  	SetIcon(FrameIcon);
	  }
	  BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	  BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	  BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	  Button2 = new wxButton(this, ID_BUTTON2, _("ADD Klient"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	  BoxSizer4->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	  Button3 = new wxButton(this, ID_BUTTON3, _("DELETE Klient"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	  BoxSizer4->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	  Button7 = new wxButton(this, ID_BUTTON7, _("Reset password"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	  BoxSizer4->Add(Button7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	  BoxSizer2->Add(BoxSizer4, 1, wxALL|wxALIGN_LEFT, 5);
	  ListCtrl1 = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxSize(378,582), wxLC_REPORT, wxDefaultValidator, _T("ID_LISTCTRL1"));
	  BoxSizer2->Add(ListCtrl1, 10, wxALL|wxEXPAND, 5);
	  BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	  BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	  BoxSizer5 = new wxBoxSizer(wxVERTICAL);
	  Button4 = new wxButton(this, ID_BUTTON4, _("EDIT"), wxDefaultPosition, wxSize(170,39), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	  BoxSizer5->Add(Button4, 1, wxALL|wxEXPAND, 5);
	  Button5 = new wxButton(this, ID_BUTTON5, _("BACK"), wxDefaultPosition, wxSize(365,34), 0, wxDefaultValidator, _T("ID_BUTTON5"));
	  BoxSizer5->Add(Button5, 1, wxALL|wxEXPAND, 5);
	  BoxSizer3->Add(BoxSizer5, 1, wxALL|wxALIGN_RIGHT, 5);
	  BoxSizer6 = new wxBoxSizer(wxVERTICAL);
	  BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	  StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Sherch by E-mail"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	  wxFont StaticText1Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	  StaticText1->SetFont(StaticText1Font);
	  BoxSizer8->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	  Button6 = new wxButton(this, ID_BUTTON6, _("CLEAR"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	  BoxSizer8->Add(Button6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	  BoxSizer6->Add(BoxSizer8, 1, wxALL|wxALIGN_LEFT, 5);
	  BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	  TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxSize(174,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	  BoxSizer7->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	  Button1 = new wxButton(this, ID_BUTTON1, _("FIND"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	  BoxSizer7->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	  BoxSizer6->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	  BoxSizer3->Add(BoxSizer6, 1, wxALL|wxALIGN_LEFT, 5);
	  ListCtrl2 = new wxListCtrl(this, ID_LISTCTRL2, wxDefaultPosition, wxSize(257,367), wxLC_REPORT, wxDefaultValidator, _T("ID_LISTCTRL2"));
	  BoxSizer3->Add(ListCtrl2, 4, wxALL|wxEXPAND, 5);
	  BoxSizer1->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
	  SetSizer(BoxSizer1);
	  BoxSizer1->Fit(this);
	  BoxSizer1->SetSizeHints(this);

	  Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&KlientDatabeseEdit::OnButton2Click);
	  Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&KlientDatabeseEdit::OnButton3Click);
	  Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&KlientDatabeseEdit::OnButton7Click);
	  Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_ITEM_SELECTED,(wxObjectEventFunction)&KlientDatabeseEdit::OnListCtrl1BeginDrag);
	  Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&KlientDatabeseEdit::OnButton4Click);
	  Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&KlientDatabeseEdit::OnButton5Click);
	  Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&KlientDatabeseEdit::OnButton6Click);
	  Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&KlientDatabeseEdit::OnButton1Click);
	  Connect(ID_LISTCTRL2,wxEVT_COMMAND_LIST_ITEM_SELECTED,(wxObjectEventFunction)&KlientDatabeseEdit::OnListCtrl2BeginDrag);
	  //*)
   ListCtrl1->InsertColumn(0,"Id_Clienta");
   ListCtrl1->InsertColumn(1,"Name");
   ListCtrl1->InsertColumn(2,"Surname");
   ListCtrl1->InsertColumn(3,"E-Mail");
   ListCtrl1->InsertColumn(4,"Adress");
   ListCtrl1->InsertColumn(5,"Nr House");
   ListCtrl1->InsertColumn(6,"Nr Apartamet");
   ListCtrl1->InsertColumn(7,"Telefon Number");

   ListCtrl2->InsertColumn(0,"Id_Klienta");
   ListCtrl2->InsertColumn(1,"Name");
   ListCtrl2->InsertColumn(2,"Surname");
   ListCtrl2->InsertColumn(3,"E-Mail");
   ListCtrl2->InsertColumn(4,"Adress");
   ListCtrl2->InsertColumn(5,"Nr House");
   ListCtrl2->InsertColumn(6,"Nr Apartamet");
   ListCtrl2->InsertColumn(7,"Telefon Number");

}

KlientDatabeseEdit::~KlientDatabeseEdit()
{
      Parent_frame->Onupdata();
      Parent_frame->Show();
	//(*Destroy(KlientDatabeseEdit)
	//*)
}

void KlientDatabeseEdit::onUpdata(){
  int x,y;
  Parent_frame->GetPosition(&x,&y);
  Move(x,y);
   int i=1;
ListCtrl1->DeleteAllItems();
this->Refresh();
while(i<=Klient->last_id+1){
if(Klient->find_id(i)!=false){
int id_klienta=Klient->node->get_id();
std::string id_k=std::to_string(id_klienta);
std::string name=Klient->node->get_name();
std::string surname=Klient->node->get_surname();
std::string telefonnumber=Klient->node->get_tel_number();
std::string login=Klient->node->get_login();
std::string Adress=Klient->node->get_Adress_Ul();
std::string Adressnrh=Klient->node->get_Adress_Hous_N();
std::string Adressnrl=Klient->node->get_Adress_local_N();
long itemIndex=ListCtrl1->InsertItem(i,"1");
ListCtrl1->SetItem(itemIndex,0,id_k);
ListCtrl1->SetItem(itemIndex,1,name);
ListCtrl1->SetItem(itemIndex,2,surname);
ListCtrl1->SetItem(itemIndex,3,login);
ListCtrl1->SetItem(itemIndex,4,Adress);
ListCtrl1->SetItem(itemIndex,5,Adressnrh);
ListCtrl1->SetItem(itemIndex,6,Adressnrl);
ListCtrl1->SetItem(itemIndex,7,telefonnumber);
}i++;
}


}

void KlientDatabeseEdit::OnButton1Click(wxCommandEvent& event)
{
    std::string Email=TextCtrl1->GetValue().ToStdString();
       int i=1;wxMessageBox(std::to_string(Klient->last_id),_("Edit error"));
if(Klient->Is_empty()!=true)
while(i<=Klient->last_id+1){
if(Klient->find_id(i)!=false) {
if(Email==Klient->node->get_login())
{int id_klienta=Klient->node->get_id();
std::string id_k=std::to_string(id_klienta);
std::string name=Klient->node->get_name();
std::string surname=Klient->node->get_surname();
std::string telefonnumber=Klient->node->get_tel_number();
std::string login=Klient->node->get_login();
std::string Adress=Klient->node->get_Adress_Ul();
std::string Adressnrh=Klient->node->get_Adress_Hous_N();
std::string Adressnrl=Klient->node->get_Adress_local_N();
long itemIndex=ListCtrl2->InsertItem(i,"1");
ListCtrl2->SetItem(itemIndex,0,id_k);
ListCtrl2->SetItem(itemIndex,1,name);
ListCtrl2->SetItem(itemIndex,2,surname);
ListCtrl2->SetItem(itemIndex,3,login);
ListCtrl2->SetItem(itemIndex,4,Adress);
ListCtrl2->SetItem(itemIndex,5,Adressnrh);
ListCtrl2->SetItem(itemIndex,6,Adressnrl);
ListCtrl2->SetItem(itemIndex,7,telefonnumber);
}}
i++;
}
}

void KlientDatabeseEdit::OnButton6Click(wxCommandEvent& event)
{
    ListCtrl2->DeleteAllItems();
}

void KlientDatabeseEdit::OnButton3Click(wxCommandEvent& event)
{
    if(ListCtrl1->GetSelectedItemCount()!=0||ListCtrl2->GetSelectedItemCount()!=0){
    Delete_klient *new_dialog=new Delete_klient(0);
    new_dialog->Parent_frame=this;
    new_dialog->OnUpdata();
    new_dialog->ShowModal();
    delete new_dialog;
    onUpdata();
    }else wxMessageBox("Please select a client from one of the two lists",_("Edit error"));
}

void KlientDatabeseEdit::OnButton2Click(wxCommandEvent& event)
{
    CreateAcount *new_dialog=new CreateAcount(0);
    new_dialog->Parent_frame1=this;
    new_dialog->Klient=Klient;
    new_dialog->ShowModal();
    delete new_dialog;


}

void KlientDatabeseEdit::OnListCtrl1BeginDrag(wxListEvent& event)
{
  long number=ListCtrl1->GetNextItem(-1,wxLIST_NEXT_ALL,wxLIST_STATE_SELECTED);

  std::string Item=ListCtrl1->GetItemText(number,3).ToStdString();
  Klient->find_login(Item);

}

void KlientDatabeseEdit::OnButton4Click(wxCommandEvent& event)
{
    if(ListCtrl1->GetSelectedItemCount()!=0||ListCtrl2->GetSelectedItemCount()!=0){
    edit_klient1 *new_dialog=new edit_klient1(0);
    new_dialog->Klient=Klient;
    new_dialog->onUpdata();
    new_dialog->ShowModal();
    delete new_dialog;
    onUpdata();}
    else{wxMessageBox("Please select a client from one of the two lists",_("Edit error"));}

}

void KlientDatabeseEdit::OnListCtrl2BeginDrag(wxListEvent& event)
{
   long number=ListCtrl2->GetNextItem(-1,wxLIST_NEXT_ALL,wxLIST_STATE_SELECTED);

  std::string Item=ListCtrl2->GetItemText(number,3).ToStdString();
  Klient->find_login(Item);
}

void KlientDatabeseEdit::OnButton7Click(wxCommandEvent& event)
{
   std::string Item=Klient->node->get_login();
   if(ListCtrl1->GetSelectedItemCount()!=0||ListCtrl2->GetSelectedItemCount()!=0){
  std::string message="Do you want change password user with Email : "+Item;
    if(wxMessageBox(message,"Confirm",wxYES_NO|wxCANCEL)==wxYES&&(ListCtrl1->GetSelectedItemCount()!=0||ListCtrl2->GetSelectedItemCount()!=0))
    {
       Klient->set_password(Item);
       wxMessageBox("You reset password now user email is also password",_("Password are set"));
    }
   }else wxMessageBox("Please select a client from one of the two lists",_("Edit error"));

}

void KlientDatabeseEdit::OnButton5Click(wxCommandEvent& event)
{
    Close();
}
