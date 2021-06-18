#pragma once
#include"float2.h"
#include"rect_area.h"
struct OBSTACLE {
	int imgIdx = 0;
	int imgW = 0;
	int imgH = 0;
	struct FLOAT2 p;
	float vx = 0;
	struct RECT_AREA r;
};
void load(static OBSTACLE * o) ;
void init(static OBSTACLE * o) ;
void move(static OBSTACLE * o) ;
void draw(static OBSTACLE * o) ;
