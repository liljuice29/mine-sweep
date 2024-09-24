#include"grid.h"
Grid::Grid() {
	realgridtype = gridtype::gt_empty;
	showgridtype = gridtype::gt_empty;
}
void Grid::setshowgridtype(gridtype sgt) {
	showgridtype = sgt;
}
void Grid::setrealgridtype(gridtype sgt) {
	realgridtype = sgt;
}
void Grid::showgrid() {
	showgridtype = realgridtype;
}
bool Grid::isempty()const {
	return realgridtype == gridtype::gt_empty;
}
bool Grid::isrealbomb()const {
	return realgridtype == gridtype::gt_bomb;
}
bool Grid::isshowbomb()const {
	return showgridtype == gridtype::gt_bomb;
}
gridtype Grid::getshowgridtype()const {
	return showgridtype;
}