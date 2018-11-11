#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe_3.h"


TEST_CASE("Test configuration", "config") {
	REQUIRE(120 == 120);
}

TEST_CASE("Test game over", "[game over]") 
{
	TicTacToe3 board;
	
	REQUIRE(board.game_over() == false);
}

TEST_CASE("Test set first player X", "[first X player]") 
{
	TicTacToe3 board;

	board.start_game("X");
	board.get_player() == "X";
}

TEST_CASE("Test set first player O", "[first O player]")
{
	TicTacToe3 board;

	board.start_game("O");
	board.get_player() == "O";
}


TEST_CASE("Test win by first column", "[X wins first column]") 
{
	/*
	Tic Tac Toe Board
	123
	456
	789
	
	First column win are user position 1,4, and 7
	*/
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(1);//X
	board.mark_board(2);//O
	board.mark_board(4);//X
	board.mark_board(5);//O
	board.mark_board(7);//X
	//X wins
	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second column", "[X wins second column]")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(2);
	board.mark_board(1);
	board.mark_board(5);
	board.mark_board(4);
	board.mark_board(8);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third column", "[X wins third column]")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(3);
	board.mark_board(2);
	board.mark_board(6);
	board.mark_board(5);
	board.mark_board(9);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by first row", "[X wins first row]")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(1);
	board.mark_board(4);
	board.mark_board(2);
	board.mark_board(5);
	board.mark_board(3);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by second row", "[X wins second row]")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(4);
	board.mark_board(2);
	board.mark_board(5);
	board.mark_board(1);
	board.mark_board(6);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win by third row", "[X wins third row]")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(7);
	board.mark_board(4);
	board.mark_board(8);
	board.mark_board(6);
	board.mark_board(9);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonally from top left", "[X wins diagonally top left]")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(1);
	board.mark_board(2);
	board.mark_board(5);
	board.mark_board(4);
	board.mark_board(9);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left", "[X wins diagonally bottom left]")
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(7);
	board.mark_board(2);
	board.mark_board(5);
	board.mark_board(6);
	board.mark_board(3);

	REQUIRE(board.game_over() == true);
}

TEST_CASE("No Winner board full", "[Board full]") 
{
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(1);
	board.mark_board(2);
	board.mark_board(3);
	board.mark_board(5);
	board.mark_board(4);
	board.mark_board(6);
	board.mark_board(8);
	board.mark_board(7);
	board.mark_board(9);

	REQUIRE(board.game_over() == true);
}
