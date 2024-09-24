#pragma once
const int ori_grid_size = 96;//图片中每个格子的大小
const int grid_size = 48;//实际显示在窗口时每个格子大小
const int map_col = 15;//横着15个格子
const int map_row = 10;//竖着10个格子
const int win_w = grid_size * (1 + map_col + 1);//窗口的宽
const int win_h = grid_size * (1 + map_row + 1);//窗口的高



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