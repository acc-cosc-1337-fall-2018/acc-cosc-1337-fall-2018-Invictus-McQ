#ifndef FRAME_H
#define FRAME_H
#include "panel.h"
#include <wx/wx.h>

class Frame : public wxFrame
{
public:
	Frame();

private:
	void OnHello(wxCommandEvent& event);
	void OnExit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
};
#endif //!FRAME_H