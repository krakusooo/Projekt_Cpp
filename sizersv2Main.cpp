/***************************************************************
 * Name:      sizersv2Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    cezary_kretkowski ()
 * Created:   2020-12-18
 * Copyright: cezary_kretkowski ()
 * License:
 **************************************************************/

#include "sizersv2Main.h"
#include "add_relentdialog.h"
#include "Delete_Relent.h"
#include <wx/msgdlg.h>
#include "KlientDatabeseEdit.h"
#include "Change_return_time.h"
#include "AsortymentDatabeseEdit.h"
//(*InternalHeaders(sizersv2Frame)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}


////(*IdInit(sizersv2Frame)
  const long sizersv2Frame::ID_BUTTON1 = wxNewId();
  const long sizersv2Frame::ID_BUTTON2 = wxNewId();
  const long sizersv2Frame::ID_BUTTON6 = wxNewId();
  const long sizersv2Frame::ID_LISTCTRL1 = wxNewId();
  const long sizersv2Frame::ID_BUTTON4 = wxNewId();
  const long sizersv2Frame::ID_BUTTON5 = wxNewId();
  const long sizersv2Frame::ID_STATICTEXT1 = wxNewId();
  const long sizersv2Frame::ID_TEXTCTRL1 = wxNewId();
  const long sizersv2Frame::ID_BUTTON3 = wxNewId();
  const long sizersv2Frame::ID_LISTCTRL2 = wxNewId();
  const long sizersv2Frame::idMenuQuit = wxNewId();
  const long sizersv2Frame::idMenuAbout = wxNewId();
  //*)

BEGIN_EVENT_TABLE(sizersv2Frame,wxFrame)
    //(*EventTable(sizersv2Frame)
    //*)
END_EVENT_TABLE()

sizersv2Frame::sizersv2Frame(wxWindow* parent,wxWindowID id)
{




   // //(*Initialize(sizersv2Frame)
      wxBoxSizer* BoxSizer1;
      wxBoxSizer* BoxSizer2;
      wxBoxSizer* BoxSizer3;
      wxBoxSizer* BoxSizer4;
      wxBoxSizer* BoxSizer5;
      wxBoxSizer* BoxSizer6;
      wxBoxSizer* BoxSizer7;
      wxBoxSizer* BoxSizer8;
      wxMenu* Menu1;
      wxMenu* Menu2;
      wxMenuBar* MenuBar1;
      wxMenuItem* MenuItem1;
      wxMenuItem* MenuItem2;

      Create(parent, id, _("Admin "), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
      SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));
      {
      	wxIcon FrameIcon;
      	FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("ikona.png"))));
      	SetIcon(FrameIcon);
      }
      BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
      BoxSizer2 = new wxBoxSizer(wxVERTICAL);
      BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
      Button1 = new wxButton(this, ID_BUTTON1, _("ADD_Relent"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
      BoxSizer4->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
      Button2 = new wxButton(this, ID_BUTTON2, _("Delete_Relent"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
      BoxSizer4->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
      Button6 = new wxButton(this, ID_BUTTON6, _("Change return time"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
      BoxSizer4->Add(Button6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
      BoxSizer2->Add(BoxSizer4, 1, wxALL|wxALIGN_LEFT, 5);
      ListCtrl1 = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxSize(378,582), wxLC_REPORT, wxDefaultValidator, _T("ID_LISTCTRL1"));
      BoxSizer2->Add(ListCtrl1, 10, wxALL|wxEXPAND, 5);
      BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
      BoxSizer3 = new wxBoxSizer(wxVERTICAL);
      BoxSizer5 = new wxBoxSizer(wxVERTICAL);
      Button4 = new wxButton(this, ID_BUTTON4, _("Edit Assortment Database"), wxDefaultPosition, wxSize(365,44), 0, wxDefaultValidator, _T("ID_BUTTON4"));
      BoxSizer5->Add(Button4, 1, wxALL|wxALIGN_RIGHT, 5);
      Button5 = new wxButton(this, ID_BUTTON5, _("Edit Klient Database"), wxDefaultPosition, wxSize(365,44), 0, wxDefaultValidator, _T("ID_BUTTON5"));
      BoxSizer5->Add(Button5, 1, wxALL|wxALIGN_RIGHT, 5);
      BoxSizer3->Add(BoxSizer5, 1, wxALL|wxEXPAND, 5);
      BoxSizer6 = new wxBoxSizer(wxVERTICAL);
      BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
      StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Sherch by E-mail"), wxDefaultPosition, wxSize(248,34), 0, _T("ID_STATICTEXT1"));
      wxFont StaticText1Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
      StaticText1->SetFont(StaticText1Font);
      BoxSizer7->Add(StaticText1, 1, wxALL|wxEXPAND, 5);
      BoxSizer6->Add(BoxSizer7, 1, wxALL|wxALIGN_LEFT, 5);
      BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
      TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxSize(174,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
      BoxSizer8->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
      Button3 = new wxButton(this, ID_BUTTON3, _("find"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
      BoxSizer8->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
      BoxSizer6->Add(BoxSizer8, 1, wxALL|wxALIGN_LEFT, 5);
      BoxSizer3->Add(BoxSizer6, 1, wxALL|wxEXPAND, 5);
      ListCtrl2 = new wxListCtrl(this, ID_LISTCTRL2, wxDefaultPosition, wxSize(378,427), wxLC_REPORT, wxDefaultValidator, _T("ID_LISTCTRL2"));
      BoxSizer3->Add(ListCtrl2, 4, wxALL|wxEXPAND, 5);
      BoxSizer1->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
      SetSizer(BoxSizer1);
      MenuBar1 = new wxMenuBar();
      Menu1 = new wxMenu();
      MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
      Menu1->Append(MenuItem1);
      MenuBar1->Append(Menu1, _("&File"));
      Menu2 = new wxMenu();
      MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
      Menu2->Append(MenuItem2);
      MenuBar1->Append(Menu2, _("Help"));
      SetMenuBar(MenuBar1);
      BoxSizer1->Fit(this);
      BoxSizer1->SetSizeHints(this);

      Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&sizersv2Frame::OnButton1Click);
      Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&sizersv2Frame::OnButton2Click);
      Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&sizersv2Frame::OnButton6Click);
      Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_ITEM_SELECTED,(wxObjectEventFunction)&sizersv2Frame::OnListCtrl1BeginDrag);
      Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&sizersv2Frame::OnButton4Click);
      Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&sizersv2Frame::OnButton5Click);
      Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&sizersv2Frame::OnButton3Click);
      Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&sizersv2Frame::OnQuit);
      Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&sizersv2Frame::OnAbout);

      //*)
ListCtrl1->InsertColumn(0,"Id_Zamowienia");
ListCtrl1->InsertColumn(1,"Id_Klienta");
ListCtrl1->InsertColumn(2,"Name");
ListCtrl1->InsertColumn(3,"Surname");
ListCtrl1->InsertColumn(4,"Id_Filmu");
ListCtrl1->InsertColumn(5,"Tital");
ListCtrl1->InsertColumn(6,"Data_wypoz");
ListCtrl1->InsertColumn(7,"Data_wzrotu");


ListCtrl2->InsertColumn(0,"Id_Zamowienia");
ListCtrl2->InsertColumn(1,"Id_Klienta");
ListCtrl2->InsertColumn(2,"Name");
ListCtrl2->InsertColumn(3,"Surname");
ListCtrl2->InsertColumn(4,"Id_Filmu");
ListCtrl2->InsertColumn(5,"Tital");
ListCtrl2->InsertColumn(6,"Data_wypoz");
ListCtrl2->InsertColumn(7,"Data_wzrotu");



}

sizersv2Frame::~sizersv2Frame()
{   Relent->seve_to_file();
    Klient->save_in_file();
    Videos->saveInFile();
    parent_frame->Show();
    //(*Destroy(sizersv2Frame)
    //*)
}

void sizersv2Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void sizersv2Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}





void sizersv2Frame::OnButton3Click(wxCommandEvent& event)
{
       std::string login=TextCtrl1->GetValue().ToStdString();
   Klient->find_login(login);
   int id_k=Klient->node->get_id();
   int i=1;
  while(i<=Relent->last_id){
if(Relent->find_id_zamowienia(i)!=false){
  if(id_k==Relent->node->get_id_klienta()){
        Klient->find_id(Relent->node->get_id_klienta());
        Videos->findId(Relent->node->get_id_filmu());
std::string id_zamowienia=std::to_string(Relent->node->get_id_zamowienia());
std::string id_klienta=std::to_string(Relent->node->get_id_klienta());
std::string id_film=std::to_string(Relent->node->get_id_filmu());
std::string Data_wypoz=Relent->node->get_data_wypoz();
std::string Data_zwroru=Relent->node->get_data_zwrotu();
std::string name=Klient->node->get_name();
std::string surname=Klient->node->get_surname();
std::string Tital=Videos->node->getFilmTitle();

long itemIndex=ListCtrl2->InsertItem(i,"1");
ListCtrl2->SetItem(itemIndex,0,id_zamowienia);
ListCtrl2->SetItem(itemIndex,1,id_klienta);
ListCtrl2->SetItem(itemIndex,2,name);
ListCtrl2->SetItem(itemIndex,3,surname);
ListCtrl2->SetItem(itemIndex,4,id_film);
ListCtrl2->SetItem(itemIndex,5,Tital);
ListCtrl2->SetItem(itemIndex,6,Data_wypoz);
ListCtrl2->SetItem(itemIndex,7,Data_zwroru);
  }}
i++;
}
}
void sizersv2Frame::Onupdata(){

int i=1;
ListCtrl1->DeleteAllItems();
ListCtrl2->DeleteAllItems();

while(i<=Relent->last_id){
if(Relent->find_id_zamowienia(i)!=false){
        Klient->find_id(Relent->node->get_id_klienta());
        Videos->findId(Relent->node->get_id_filmu());
std::string id_zamowienia=std::to_string(Relent->node->get_id_zamowienia());
std::string id_klienta=std::to_string(Relent->node->get_id_klienta());
std::string id_film=std::to_string(Relent->node->get_id_filmu());
std::string Data_wypoz=Relent->node->get_data_wypoz();
std::string Data_zwroru=Relent->node->get_data_zwrotu();
std::string name=Klient->node->get_name();
std::string surname=Klient->node->get_surname();
std::string Tital=Videos->node->getFilmTitle();
long itemIndex=ListCtrl1->InsertItem(i,"1");
ListCtrl1->SetItem(itemIndex,0,id_zamowienia);
ListCtrl1->SetItem(itemIndex,1,id_klienta);
ListCtrl1->SetItem(itemIndex,2,name);
ListCtrl1->SetItem(itemIndex,3,surname);
ListCtrl1->SetItem(itemIndex,4,id_film);
ListCtrl1->SetItem(itemIndex,5,Tital);
ListCtrl1->SetItem(itemIndex,6,Data_wypoz);
ListCtrl1->SetItem(itemIndex,7,Data_zwroru);
}
i++;
}


}

void sizersv2Frame::OnButton1Click(wxCommandEvent& event)
{
     add_relentdialog*new_dialog=new add_relentdialog(0);
    new_dialog->Parent_frame=this;
    new_dialog->ShowModal();
    delete new_dialog;
  Onupdata();
}

void sizersv2Frame::OnButton2Click(wxCommandEvent& event)
{   if(ListCtrl1->GetSelectedItemCount()!=0||ListCtrl2->GetSelectedItemCount()!=0){
        Delete_Relent * new_delet_dialog= new Delete_Relent(Relent->last_id,0);
    new_delet_dialog->Parent_frame=this;
    new_delet_dialog->OnUpdata();
    new_delet_dialog->ShowModal();
    delete new_delet_dialog;
    Onupdata();}else wxMessageBox("Please select a client from one of the two lists",_("Edit error"));
}

void sizersv2Frame::OnButton4Click(wxCommandEvent& event)
{
    AsortymentDatabeseEdit*new_frame=new AsortymentDatabeseEdit(0);
    new_frame->parent_frame=this;
    new_frame->Videos=Videos;
    new_frame->Relent=Relent;
    new_frame->onUpdata();
    Hide();
    new_frame->Show();
    Onupdata();

}
void sizersv2Frame::OnButton5Click(wxCommandEvent& event)
{
    KlientDatabeseEdit* new_frame=new KlientDatabeseEdit(0);
    new_frame->Parent_frame=this;
    new_frame->Klient=Klient;
    new_frame->Relent=Relent;
    new_frame->Videos=Videos;
    this->Hide();
    new_frame->onUpdata();
    new_frame->Show();


}

void sizersv2Frame::OnButton6Click(wxCommandEvent& event)
{
    if(ListCtrl1->GetSelectedItemCount()!=0){
    Change_return_time *new_dialog=new Change_return_time(0);
    new_dialog->parent_frame=this;
    new_dialog->onUpdata();
    new_dialog->ShowModal();
    delete new_dialog;
    Onupdata();}else wxMessageBox("Pleas select rental" ,_("Select member"));
}

void sizersv2Frame::OnListCtrl1BeginDrag(wxListEvent& event)
{
  long number=ListCtrl1->GetNextItem(-1,wxLIST_NEXT_ALL,wxLIST_STATE_SELECTED);
  //long first=ListCtrl1->GetTopItem();
  std::string Item=ListCtrl1->GetItemText(number,0).ToStdString();
  int id=atoi(Item.c_str());
  Relent->find_id_zamowienia(id);
}
