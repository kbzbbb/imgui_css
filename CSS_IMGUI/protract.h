#pragma once
#include "tool.h"
#include "disposition.h"
#include "data.h"

namespace protract {
	void Get_data();
	void getGameRect(RECT& RectGame);
	void protract_pane(float x, float y, float w, float h, ImColor color, float t);
	void cheatDraw(HWND hwnd);
}