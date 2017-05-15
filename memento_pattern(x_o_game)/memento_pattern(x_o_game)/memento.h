#include<iostream>

class Memento
{
	int prev[3][3];
public:
	Memento(int** pr) { for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) prev[i][j] = pr[i][j]; }
	void set_memento(int** pr) { for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) prev[i][j] = pr[i][j]; }
	int** get_prev() 
	{
		int** pr = new int*[3]; 
		for (int i = 0; i < 3; i++)
		{
			pr[i] = new int[3];
			for (int j = 0; j < 3; j++) pr[i][j] = prev[i][j];
		}
		return pr;
	}
};


class game
{
	int mtx[3][3];
	Memento* m;
public:
	game()
	{
		memset(mtx, 0, sizeof(mtx)); 
		int** pr = new int*[3];
		for (int i = 0; i < 3; i++)
		{
			pr[i] = new int[3];
			for (int j = 0; j < 3; j++) pr[i][j] = 0;
		}
  	    m = new Memento(pr);
	}
	void client_step(int x, int y)
	{
		int** pr = new int*[3];
		for (int i = 0; i < 3; i++)
		{
			pr[i] = new int[3];
			for (int j = 0; j < 3; j++) pr[i][j] = mtx[i][j];
		}
		m->set_memento(pr);

		mtx[x][y] = 1;
	}
	void undo()
	{
		int **pr = m->get_prev();
		for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) mtx[i][j] = pr[i][j];
	}
	int** get_game()
	{
		int** pr = new int*[3];
		for (int i = 0; i < 3; i++)
		{
			pr[i] = new int[3];
			for (int j = 0; j < 3; j++) pr[i][j] = mtx[i][j];
		}
		return pr;
	}
	int game_over()
	{
		int res = -1;
		if (mtx[0][0] == 1 && mtx[0][1] == 1 && mtx[0][2] == 1) res = 1;
		if (mtx[1][0] == 1 && mtx[1][1] == 1 && mtx[1][2] == 1) res = 1;
		if (mtx[2][0] == 1 && mtx[2][1] == 1 && mtx[2][2] == 1) res = 1;
		if (mtx[0][0] == 1 && mtx[1][0] == 1 && mtx[2][0] == 1) res = 1;
		if (mtx[0][1] == 1 && mtx[1][1] == 1 && mtx[2][1] == 1) res = 1;
		if (mtx[0][2] == 1 && mtx[1][2] == 1 && mtx[2][2] == 1) res = 1;
		if (mtx[0][0] == 1 && mtx[1][1] == 1 && mtx[2][2] == 1) res = 1;
		if (mtx[0][2] == 1 && mtx[1][1] == 1 && mtx[2][0] == 1) res = 1;

		if (mtx[0][0] == 2 && mtx[0][1] == 2 && mtx[0][2] == 2) res = 2;
		if (mtx[1][0] == 2 && mtx[1][1] == 2 && mtx[1][2] == 2) res = 2;
		if (mtx[2][0] == 2 && mtx[2][1] == 2 && mtx[2][2] == 2) res = 2;
		if (mtx[0][0] == 2 && mtx[1][0] == 2 && mtx[2][0] == 2) res = 2;
		if (mtx[0][1] == 2 && mtx[1][1] == 2 && mtx[2][1] == 2) res = 2;
		if (mtx[0][2] == 2 && mtx[1][2] == 2 && mtx[2][2] == 2) res = 2;
		if (mtx[0][0] == 2 && mtx[1][1] == 2 && mtx[2][2] == 2) res = 2;
		if (mtx[0][2] == 2 && mtx[1][1] == 2 && mtx[2][0] == 2) res = 2;
		bool f = true;
		if (res == -1)
		{
			for (int i = 0; i < 3; i++)
				for (int j = 0; j < 3; j++)
					if (mtx[i][j] == 0) f = false;

			if (f) res = 0;
		}
		return res;
	}
	int* comp_step()
	{
		int x, y, col;
		int res[2];
		col = 0;
		bool flag = false;
		for (int i = 0; i < 3; i++)
		{
			flag = false;
			col = 0;
			for (int j = 0; j < 3; j++)
			{
				if (mtx[i][j] == 2) col++;
				if (mtx[i][j] == 0) { x = i; y = j; flag = true; }
			}
			if (col == 2 && flag) { res[0] = x; res[1] = y; mtx[x][y] = 2; return res; }
		}
		for (int i = 0; i < 3; i++)
		{
			flag = false;
			col = 0;
			for (int j = 0; j < 3; j++)
			{
				if (mtx[j][i] == 2) col++;
				if (mtx[j][i] == 0) { x = j; y = i; flag = true; }
			}
			if (col == 2 && flag) { res[0] = x; res[1] = y; mtx[x][y] = 2; return res; }
		}
		col = 0;

		flag = false;
		for (int i = 0; i < 3;i++)
		{
			if (mtx[i][i] == 2) col++;
			if (mtx[i][i] == 0) { x = i; y = i;  flag = true; }
			if (col == 2 && flag) { res[0] = x; res[1] = y; mtx[x][y] = 2; return res; }
		}
		col = 0;

		flag = false;
		for (int i = 0; i < 3; i++)
		{
			if (mtx[i][2-i] == 2) col++;
			if (mtx[i][2-i] == 0) { x = i; y = 2-i;  flag = true; }
			if (col == 2 && flag) { res[0] = x; res[1] = y; mtx[x][y] = 2; return res; }
		}
		col = 0;
		for (int i = 0; i < 3; i++)
		{

			flag = false;
			col = 0;
			for (int j = 0; j < 3; j++)
			{
				if (mtx[i][j] == 1) col++;
				if (mtx[i][j] == 0) { x = i; y = j; flag = true; }
			}
			if (col == 2 && flag) { res[0] = x; res[1] = y; mtx[x][y] = 2; return res; }
		}
		for (int i = 0; i < 3; i++)
		{

			flag = false;
			col = 0;
			for (int j = 0; j < 3; j++)
			{
				if (mtx[j][i] == 1) col++;
				if (mtx[j][i] == 0) { x = j; y = i; flag = true; }
			}
			if (col == 2 && flag) { res[0] = x; res[1] = y; mtx[x][y] = 2; return res; }
		}
		col = 0;

		flag = false;
		for (int i = 0; i < 3; i++)
		{
			if (mtx[i][i] == 1) col++;
			if (mtx[i][i] == 0) { x = i; y = i;  flag = true; }
			if (col == 2 && flag) { res[0] = x; res[1] = y; mtx[x][y] = 2; return res; }
		}
		col = 0;

		flag = false;
		for (int i = 0; i < 3; i++)
		{
			if (mtx[i][2 - i] == 1) col++;
			if (mtx[i][2 - i] == 0) { x = i; y = 2 - i;  flag = true; }
			if (col == 2 && flag) { res[0] = x; res[1] = y; mtx[x][y] = 2; return res; }
		}

		res[0] = x; res[1] = y; mtx[x][y] = 2; return res; 
	}
};