#include "delleteVideo.h"
#include <wx/msgdlg.h>
//(*InternalHeaders(delleteVideo)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(delleteVideo)
const long delleteVideo::ID_STATICTEXT1 = wxNewId();
const long delleteVideo::ID_STATICTEXT2 = wxNewId();
const long delleteVideo::ID_SPINCTRL1 = wxNewId();
const long delleteVideo::ID_STATICTEXT3 = wxNewId();
const long delleteVideo::ID_STATICTEXT4 = wxNewId();
const long delleteVideo::ID_CONTEXTHELPBUTTON1 = wxNewId();
const long delleteVideo::ID_BUTTON1 = wxNewId();
const long delleteVideo::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(delleteVideo,wxDialog)
	//(*EventTable(delleteVideo)
	//*)
END_EVENT_TABLE()

delleteVideo::delleteVideo(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(delleteVideo)
	Create(parent, id, _("Delete Movie"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxSize(400,270));
	Move(wxDefaultPosition);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Delete Video:"), wxPoint(140,20), wxSize(72,16), 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Film Title :"), wxPoint(40,60), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);

	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Director :"), wxPoint(40,100), wxSize(64,22), 0, _T("ID_STATICTEXT3"));
	wxFont StaticText3Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Production year :"), wxPoint(40,140), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	wxFont StaticText4Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("@Arial Unicode MS"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	Button1 = new wxButton(this, ID_BUTTON1, _("Delete"), wxPoint(50,200), wxSize(140,24), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button2 = new wxButton(this, ID_BUTTON2, _("Cancel"), wxPoint(210,200), wxSize(140,24), 0, wxDefaultValidator, _T("ID_BUTTON2"));

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&delleteVideo::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&delleteVideo::OnButton2Click);
	//*)
}

delleteVideo::~delleteVideo()
{
	//(*Destroy(delleteVideo)
	//*)
}


void delleteVideo::OnUpdata()
{
    std::string ProductionYear=std::to_string(parent_frame->Videos->node->getProductionYear());
    StaticText2->SetLabel("Film Title             :   "+parent_frame->Videos->node->getFilmTitle());
    StaticText3->SetLabel("Director               :   "+parent_frame->Videos->node->getDirector());
    StaticText4->SetLabel("Production year :   "+ProductionYear);

}

void delleteVideo::OnButton2Click(wxCommandEvent& event)
{
    Close();
}

void delleteVideo::OnButton1Click(wxCommandEvent& event)
{
    int id_f=parent_frame->Videos->node->getId();
    if(parent_frame->Relent->find_id_filmu(id_f)!=false)
      parent_frame->Relent->erse_node();
      parent_frame->Videos->eraseNode();

    wxMessageBox( wxT("Video has been deleted!") );
  Close();
}
