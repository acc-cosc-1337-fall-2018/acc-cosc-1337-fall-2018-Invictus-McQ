project(tic_tac_toe_library2) 
add_library(tic_tac_toe_library2 "tic_tac_toe_board.cpp" "tic_tac_toe_board.h")
add_executable(tic_tac_toe_exe2 "main.cpp" "tic_tac_toe_board.cpp")
