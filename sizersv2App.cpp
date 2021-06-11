/***************************************************************
 * Name:      sizersv2App.cpp
 * Purpose:   Code for Application Class
 * Author:    cezary_kretkowski ()
 * Created:   2020-12-18
 * Copyright: cezary_kretkowski ()
 * License:
 **************************************************************/

#include "sizersv2App.h"

//(*AppHeaders
#include "LoginDailog.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(sizersv2App);

bool sizersv2App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	LoginDailog* Frame = new LoginDailog(0);
    	Frame->load_from_fill();
    	Frame->Show();

    	Frame->save_to_fill();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
