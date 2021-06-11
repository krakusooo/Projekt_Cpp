#include "add_relentdialog.h"
#include <string>
#include <wx/msgdlg.h>

//(*InternalHeaders(add_relentdialog)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(add_relentdialog)
const long add_relentdialog::ID_TEXTCTRL1 = wxNewId();
const long add_relentdialog::ID_TEXTCTRL2 = wxNewId();
const long add_relentdialog::ID_STATICTEXT1 = wxNewId();
const long add_relentdialog::ID_STATICTEXT2 = wxNewId();
const long add_relentdialog::ID_STATICTEXT3 = wxNewId();
const long add_relentdialog::ID_BUTTON1 = wxNewId();
const long add_relentdialog::ID_BUTTON2 = wxNewId();
const long add_relentdialog::ID_STATICTEXT4 = wxNewId();
const long add_relentdialog::ID_STATICTEXT5 = wxNewId();
const long add_relentdialog::ID_SPINCTRLDOUBLE1 = wxNewId();
const long add_relentdialog::ID_STATICTEXT6 = wxNewId();
//*)

BEGIN_EVENT_TABLE(add_relentdialog,wxDialog)
	//(*EventTable(add_relentdialog)
	//*)
END_EVENT_TABLE()

add_relentdialog::add_relentdialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{

   //wxDateTime use_time;
    use_time=wxDateTime::Now();

    wxString dat_wypoz=use_time.FormatISODate();
    std::string data_wypoz=dat_wypoz.ToStdString();
	//(*Initialize(add_relentdialog)
	Create(parent, id,_("ADD rental"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(300,400));
	Move(wxDefaultPosition);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxPoint(50,130), wxSize(200,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _("Text"), wxPoint(48,180), wxSize(200,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Price :"), wxPoint(50,16), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Relent date : "+data_wypoz), wxPoint(50,46), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Date of Return :"), wxPoint(50,76), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	Button1 = new wxButton(this, ID_BUTTON1, _("ADD_Relent"), wxPoint(50,300), wxSize(90,24), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button2 = new wxButton(this, ID_BUTTON2, _("Cancel"), wxPoint(160,300), wxSize(90,24), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("User E-mail "), wxPoint(56,110), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Movie title"), wxPoint(56,160), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	wxFont StaticText5Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	SpinCtrlDouble1 = new wxSpinCtrlDouble(this, ID_SPINCTRLDOUBLE1, _T("0"), wxPoint(50,230), wxSize(78,23), 0, 1, 20, 0, 1, _T("ID_SPINCTRLDOUBLE1"));
	SpinCtrlDouble1->SetValue(_T("0"));
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Numbers of Day"), wxPoint(56,210), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	wxFont StaticText6Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&add_relentdialog::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&add_relentdialog::OnButton2Click);
	Connect(ID_SPINCTRLDOUBLE1,wxEVT_SPINCTRLDOUBLE,(wxObjectEventFunction)&add_relentdialog::OnSpinCtrlDouble1Change);
	//*)
}

add_relentdialog::~add_relentdialog()
{
	//(*Destroy(add_relentdialog)
	//*)
}


void add_relentdialog::OnSpinCtrlDouble1Change(wxSpinDoubleEvent& event)
{  wxDateTime new_data=use_time.GetLastMonthDay();
    std::string  title= TextCtrl2->GetValue().ToStdString();
    if(Parent_frame->Videos->findFilmTitle(title)!=false){

    int day= SpinCtrlDouble1->GetValue();

     float price=Parent_frame->Videos->node->getPricePerDay();
     price=price*day;

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



     StaticText3->SetLabel("Date of Return :"+data);

    std::string Price=std::to_string(price);
    StaticText1->SetLabel("Price :"+Price);

    }


}

void add_relentdialog::OnButton2Click(wxCommandEvent& event)
{
    Close();
}

void add_relentdialog::OnButton1Click(wxCommandEvent& event)
{
    std::string login=TextCtrl1->GetValue().ToStdString();
    std::string  title= TextCtrl2->GetValue().ToStdString();
    if(Parent_frame->Klient->find_login(login)!=false&&Parent_frame->Videos->findFilmTitle(title)!=false&&Parent_frame->Videos->node->get_availability()!=false){
    int id_z=Parent_frame->Relent->last_id;
    id_z+=1;
    int id_k=Parent_frame->Klient->node->get_id();
    int id_f=Parent_frame->Videos->node->getId();
    wxString dat_wypoz=use_time.FormatISODate();
    std::string data_wypoz=dat_wypoz.ToStdString();
    Parent_frame->Videos->set_availability(false);
    Parent_frame->Relent->insert_node(id_z,id_k,id_f,data_wypoz,data);
    Parent_frame->Relent->seve_to_file();
    Parent_frame->Klient->save_in_file();
    Parent_frame->Videos->saveInFile();
       Close();
    }
    else{
        wxMessageBox("Wrong film title or user name or film is anavailabel ",_("Error"));

    }

}
