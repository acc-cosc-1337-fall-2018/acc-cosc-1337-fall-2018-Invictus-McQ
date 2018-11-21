#ifndef PANEL_H
#define PANEL_H

#include<wx/wx.h>
#include "tic_tac_toe_manager.h"
#include<memory>
#include<vector>
#include<string>

using std::unique_ptr;

class Panel : public wxPanel
{
public:
	Panel(wxWindow* parent);
private:
	void on_start_btn_clk(wxCommandEvent& event);
	void on_peg_btn_clk(wxCommandEvent& event);
	void on_listbox_clk(wxCommandEvent& event);
	void set_btn(wxGridSizer* sizer);

	wxBoxSizer* get_top_box_sizer();
	wxBoxSizer* get_mid_box_sizer();
	wxGridSizer* get_grid_sizer(int size);
	wxGridSizer* tic_tac_toe_grid_3;
	wxGridSizer* tic_tac_toe_grid_4;
	wxRadioBox* game_type_radio;
	wxRadioBox* first_player_radio;
	wxButton* start_button;
	wxListBox* history_list_box;
	wxTextCtrl* winner_text;

	unique_ptr<TicTacToeManager> manager;
	unique_ptr<TicTacToeBoard> board;
};

#endif // !PANEL_H
