#include<SFML/Graphics.hpp>
#include"grid.h"
#include"map.h"
using namespace sf;







int main()
{
	RenderWindow win(VideoMode(win_w, win_h), L"扫雷");//创建win窗口，使用L防止中文乱码
	Texture t;//创建纹理对象，纹理就是游戏的贴图
	t.loadFromFile("output.png");//将图片加载到内存
	Sprite s(t);//实例化一个精灵对纹理进行平移，缩放，旋转，再绘制到屏幕
	map mp;
	mp.init(&win,&s);

	
	while (win.isOpen())
	{
		Event e;
		Vector2i pos = Mouse::getPosition(win);//获得鼠标位置
		int x = pos.x / grid_size;
		int y = pos.y / grid_size;
		//调用pollevent获取到事件队列中最先来的事件，包括鼠标事件键盘事件等
		while (win.pollEvent(e))
		{
			if (e.type == Event::Closed)//该判断的作用是关闭窗口不堵塞
			{
				win.close();
			}
			mp.handlemouseevent(e,x,y);
		}
		mp.draw( x, y);
		
		win.display();

	}
	return 0;


}