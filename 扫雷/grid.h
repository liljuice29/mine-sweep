#pragma once
#include"const.h"

class Grid {
public:
	Grid();
	void setshowgridtype(gridtype sgt);
	void setrealgridtype(gridtype sgt);
	void showgrid();
	bool isempty()const;
	bool isrealbomb()const;
	bool isshowbomb()const;
	gridtype getshowgridtype()const;
private:
	gridtype realgridtype;
	gridtype showgridtype;
};