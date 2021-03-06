#include "stdafx.h"
#include "CppUnitTest.h"

#include "catch.hpp"
#include "memento.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit_tests
{		
	TEST_CASE("cl_step")
	{
		game *g = new game();
		int **b;
		g->client_step(2, 0);
		b=g->get_game();
		bool res = true;
		if (b[0][0] != 0 || b[0][1] != 0 || b[0][2] != 0 || b[1][0] != 0 || b[1][1] != 0 || b[1][2] != 0 || b[2][0] != 1 || b[2][1] != 0 || b[2][2] != 0) res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("comp_step")
	{
		game *g = new game();
		int **b;
		g->client_step(2, 0);
		g->comp_step();
		g->client_step(0, 2);
		g->comp_step();
		b = g->get_game();
		bool res = true;
		if (b[0][0] != 0 || b[0][1] != 0 || b[0][2] != 1 || b[1][0] != 0 || b[1][1] != 2 || b[1][2] != 0 || b[2][0] != 1 || b[2][1] != 0 || b[2][2] != 2) res = false;
		REQUIRE(res == true);
	};
	TEST_CASE("undo")
	{
		game *g = new game();
		int **b;
		g->client_step(2, 0);
		g->comp_step();
		g->client_step(0, 2);
		g->comp_step();
		g->undo();
		b = g->get_game();
		bool res = true;
		if (b[0][0] != 0 || b[0][1] != 0 || b[0][2] != 0 || b[1][0] != 0 || b[1][1] != 2 || b[1][2] != 0 || b[2][0] != 1 || b[2][1] != 0 || b[2][2] != 0) res = false;
		REQUIRE(res == true);
	};

	TEST_CASE("win")
	{
		game *g = new game();
		g->client_step(2, 0);
		g->comp_step();
		g->client_step(0, 2);
		g->comp_step();
		g->client_step(0, 0);
		g->comp_step();
		g->client_step(1, 0);
		int res=g->game_over();
		REQUIRE(res == 1);
	};
	TEST_CASE("loose")
	{
		game *g = new game();
		g->client_step(2, 0);
		g->comp_step();
		g->client_step(0, 2);
		g->comp_step();
		g->client_step(0, 0);
		g->comp_step();
		g->client_step(1, 2);
		g->comp_step();
		int res = g->game_over();
		REQUIRE(res == 2);
	};

	TEST_CASE("no_winner")
	{
		game *g = new game();
		g->client_step(2, 0);
		g->comp_step();
		g->client_step(0, 2);
		g->comp_step();
		g->client_step(0, 0);
		g->comp_step();
		g->client_step(2, 1);
		g->comp_step();
		g->client_step(1, 2);
		int res = g->game_over();
		REQUIRE(res == 0);
	};
}