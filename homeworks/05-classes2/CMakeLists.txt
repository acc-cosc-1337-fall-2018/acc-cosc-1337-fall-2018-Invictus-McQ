project(ticta_toe_lib2) 
add_library(tictactoe_lib2 "tic_tac_toe_board.cpp" "tic_tac_toe_board.h")
add_executable(tictactoe_exe2 "main.cpp" "tic_tac_toe_board.cpp")
