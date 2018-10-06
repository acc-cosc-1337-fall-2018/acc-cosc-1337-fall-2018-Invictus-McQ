#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe_board.h"
#include <string>
#include <vector>
#include <iostream>

TEST_CASE("test win by first column", "[x wins in column 1]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(0); //x
	board.mark_board(2);//o
	board.mark_board(3);//x
	board.mark_board(5);//o
	board.mark_board(6);//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win by second column", "[x wins in column 2]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(1);//x
	board.mark_board(3); //o
	board.mark_board(4);//x
	board.mark_board(5);//o
	board.mark_board(7);//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win by third column", "x wins in column 3]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(2);//x
	board.mark_board(3); //o
	board.mark_board(5);//x
	board.mark_board(6);//o
	board.mark_board(8);//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win by first row", "[x wins in row 1]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(0);//x
	board.mark_board(3); //o
	board.mark_board(1);//x
	board.mark_board(5);//o
	board.mark_board(2);//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win by secon row", "[x wins in row 2]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(3);//x
	board.mark_board(1); //o
	board.mark_board(4);//x
	board.mark_board(7);//o
	board.mark_board(5);//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win by third row", "[x wins in row 3]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(6);//x
	board.mark_board(3); //o
	board.mark_board(7);//x
	board.mark_board(5);//o
	board.mark_board(8);//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win diagonally pegs 0, 4, 8", "[x wins in diag 1]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(0);//x
	board.mark_board(3); //o
	board.mark_board(4);//x
	board.mark_board(5);//o
	board.mark_board(8);//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test win diagonally pegs 2, 4, 6", "[x wins in diag 2]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(2);//x
	board.mark_board(3); //o
	board.mark_board(4);//x
	board.mark_board(0);//o
	board.mark_board(6);//x
	// x wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("test no winner", "[no win]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(0);//x
	board.mark_board(1); //o
	board.mark_board(2);//x
	board.mark_board(3);//o
	board.mark_board(5);//x
	board.mark_board(4); //o
	board.mark_board(6);//x
	board.mark_board(8);//o
	board.mark_board(7);//x
	// no one wins

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test first player is X", "[returns X]")
{
	TicTacToeBoard board;
	board.start_game("X");
	board.get_player();

	REQUIRE(board.get_player() == "X");
}
