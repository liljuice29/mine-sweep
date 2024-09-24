#include"map.h"


void map::init(RenderWindow* win, Sprite* spirit) {

	pwin = win;
	pspirit = spirit;
	initgame();
}
	void map::initgame(){
		isrunning = true;
	for (int i = 1; i <= map_col; i++) {
		for (int j = 1; j <= map_row; j++) {
			grid[i][j].setshowgridtype(gridtype::gt_hide);
			if (rand() % 6 == 0) {
				grid[i][j].setrealgridtype(gridtype::gt_bomb);
			}
			else {
				grid[i][j].setrealgridtype(gridtype::gt_empty);
			}
		}
	}


	for (int i = 1; i <= map_col; i++) {
		for (int j = 1; j <= map_row; j++) {
			if (grid[i][j].isempty()) {
				int cnt = 0;
				for (int k = 0; k < 8; k++) {
					int ti = i + dir[k][0];
					int tj = j + dir[k][1];
					if (grid[ti][tj].isrealbomb()) {
						cnt++;
					}
				}
				grid[i][j].setrealgridtype((gridtype)cnt);
			}
		}
	}
}

void map::handlemouseevent(Event e, int x, int y) {
	if (e.type == Event::MouseButtonPressed) {
		if (e.key.code == Mouse::Left) {
			if (isrunning) {
				grid[x][y].showgrid();
				if (grid[x][y].isshowbomb()) {
					isrunning = false;
				}
			}
			else {
				initgame();
			}

		}
		else if (e.key.code == Mouse::Right) {
			grid[x][y].setshowgridtype(gridtype::gt_flag);

		}


	}
}

void map::draw(int x, int y) {
	pspirit->setScale(Vector2f(grid_size * 1.0 / ori_grid_size, grid_size * 1.0 / ori_grid_size));
	for (int i = 1; i <= map_col; i++) {
		for (int j = 1; j <= map_row; j++) {
			if (!isrunning) {
				grid[i][j].showgrid();
			}

			pspirit->setTextureRect(IntRect(ori_grid_size * grid[i][j].getshowgridtype(), 0, ori_grid_size, ori_grid_size));
			pspirit->setPosition(i * grid_size, j * grid_size);
			pwin->draw(*pspirit);
		}
	}
}