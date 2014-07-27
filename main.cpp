#include <wx/wx.h>

class App : public wxApp
{
public:
	bool OnInit()
	{
		wxLocale locale(wxLANGUAGE_DEFAULT);

		return true;
	}
};

wxIMPLEMENT_APP(App);
