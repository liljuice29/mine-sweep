#pragma once
#include<SFML/Graphics.hpp>
using namespace sf;
#include"grid.h"

class map {
private:
	void initgame();
public:
	void init(RenderWindow* win, Sprite* spirit);

	void handlemouseevent(Event e, int x, int y);

	void draw(int x, int y);
private:
	Grid grid[map_col + 1][map_row + 1];//Êµ¼ÊµØÍ¼
	RenderWindow* pwin;
	Sprite* pspirit;
	bool isrunning;
};
