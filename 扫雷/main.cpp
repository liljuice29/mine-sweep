#include<SFML/Graphics.hpp>
#include"grid.h"
#include"map.h"
using namespace sf;







int main()
{
	RenderWindow win(VideoMode(win_w, win_h), L"ɨ��");//����win���ڣ�ʹ��L��ֹ��������
	Texture t;//��������������������Ϸ����ͼ
	t.loadFromFile("output.png");//��ͼƬ���ص��ڴ�
	Sprite s(t);//ʵ����һ��������������ƽ�ƣ����ţ���ת���ٻ��Ƶ���Ļ
	map mp;
	mp.init(&win,&s);

	
	while (win.isOpen())
	{
		Event e;
		Vector2i pos = Mouse::getPosition(win);//������λ��
		int x = pos.x / grid_size;
		int y = pos.y / grid_size;
		//����pollevent��ȡ���¼����������������¼�����������¼������¼���
		while (win.pollEvent(e))
		{
			if (e.type == Event::Closed)//���жϵ������ǹرմ��ڲ�����
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