#pragma once
const int ori_grid_size = 96;//ͼƬ��ÿ�����ӵĴ�С
const int grid_size = 48;//ʵ����ʾ�ڴ���ʱÿ�����Ӵ�С
const int map_col = 15;//����15������
const int map_row = 10;//����10������
const int win_w = grid_size * (1 + map_col + 1);//���ڵĿ�
const int win_h = grid_size * (1 + map_row + 1);//���ڵĸ�



const int dir[8][2] = {
	{-1,-1},{-1,0},{-1,1},
	{0,-1},{0,1},
	{1,-1},{1,0},{1,1}
};

enum gridtype {
	gt_empty = 0,
	gt_count_1 = 1,
	gt_count_2 = 2,
	gt_count_3 = 3,
	gt_count_4 = 4,
	gt_count_5 = 5,
	gt_count_6 = 6,
	gt_count_7 = 7,
	gt_count_8 = 8,
	gt_bomb = 9,
	gt_hide = 10,
	gt_flag = 11,
};