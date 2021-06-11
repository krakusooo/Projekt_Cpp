#include "Change_return_time.h"
#include <wx/msgdlg.h>
//(*InternalHeaders(Change_return_time)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Change_return_time)
const long Change_return_time::ID_STATICTEXT1 = wxNewId();
const long Change_return_time::ID_STATICTEXT2 = wxNewId();
const long Change_return_time::ID_STATICTEXT6 = wxNewId();
const long Change_return_time::ID_STATICTEXT3 = wxNewId();
const long Change_return_time::ID_STATICTEXT4 = wxNewId();
const long Change_return_time::ID_STATICTEXT5 = wxNewId();
const long Change_return_time::ID_SPINCTRL1 = wxNewId();
const long Change_return_time::ID_BUTTON1 = wxNewId();
const long Change_return_time::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Change_return_time,wxDialog)
	//(*EventTable(Change_return_time)
	//*)
END_EVENT_TABLE()

Change_return_time::Change_return_time(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    use_time=wxDateTime::Now();
	//(*Initialize(Change_return_time)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;

	Create(parent, id, _("Change return time"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("User :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_LEFT, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("E-mial :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	BoxSizer1->Add(StaticText2, 1, wxALL|wxALIGN_LEFT, 5);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("MovieTital"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	BoxSizer1->Add(StaticText6, 1, wxALL|wxALIGN_LEFT, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Relent Date :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	BoxSizer1->Add(StaticText3, 1, wxALL|wxALIGN_LEFT, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("New Time :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	BoxSizer1->Add(StaticText4, 1, wxALL|wxALIGN_LEFT, 5);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Number of new day"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	BoxSizer2->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl1 = new wxSpinCtrl(this, ID_SPINCTRL1, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL1"));
	SpinCtrl1->SetValue(_T("0"));
	BoxSizer2->Add(SpinCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Save"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer3->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_SPINCTRL1,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&Change_return_time::OnSpinCtrl1Change);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Change_return_time::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Change_return_time::OnButton2Click);
	//*)

}

Change_return_time::~Change_return_time()
{
	//(*Destroy(Change_return_time)
	//*)
}


void Change_return_time::OnSpinCtrl1Change(wxSpinEvent& event)
{   wxDateTime new_data=use_time.GetLastMonthDay();
    int day= SpinCtrl1->GetValue();
     day_relent=use_time.GetDay()+day;
    month_relent=use_time.GetMonth()+1;
    year_relent=use_time.GetYear();

           if(day_relent<=new_data.GetDay()){
            ofset=day;
        std::string data_day=std::to_string(day_relent);
        std::string data_month=std::to_string(month_relent);
        std::string data_Year=std::to_string(year_relent);
        data=data_Year+"-"+data_month+"-"+data_day;
        }
      else
      {
       day_relent=0;

       day_relent=day_relent+(day-ofset);
       month_relent=month_relent+1;
       if(month_relent>12)
       {
           month_relent=1;
           year_relent+=1;
       }

         std::string data_day=std::to_string(day_relent);
         if(day_relent<10)
            data_day="0"+data_day;
        std::string data_month=std::to_string(month_relent);
         if(month_relent<10)
            data_month="0"+data_month;
        std::string data_Year=std::to_string(year_relent);
        data=data_Year+"-"+data_month+"-"+data_day;
      }
      StaticText4->SetLabel("New Time : "+data);
}
void Change_return_time::onUpdata(){
 int id=parent_frame->Relent->node->get_id_klienta();
  parent_frame->Videos->findId(parent_frame->Relent->node->get_id_filmu());
 parent_frame->Klient->find_id(id);
 std::string name=parent_frame->Klient->node->get_name();
 std::string surname=parent_frame->Klient->node->get_surname();
 std::string tital=parent_frame->Videos->node->getFilmTitle();
 std::string login=parent_frame->Klient->node->get_login();
 std::string data=parent_frame->Relent->node->get_data_wypoz();
  StaticText1->SetLabel("User : "+name+" "+surname);
  StaticText2->SetLabel("E-mial : "+login);
  StaticText3->SetLabel("Relent Date : "+data);
  StaticText6->SetLabel("Movie tital : "+tital);

}

void Change_return_time::OnButton1Click(wxCommandEvent& event)
{

    parent_frame->Relent->set_data_zwrotu(data);

    parent_frame->Onupdata();
    Close();
}

void Change_return_time::OnButton2Click(wxCommandEvent& event)
{
    Close();
}
