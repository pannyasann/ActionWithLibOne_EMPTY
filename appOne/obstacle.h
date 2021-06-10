#pragma once
struct OBSTACLE {
	int imgIdx = 0;
	int imgw = 0;
	int imgW = 0;
	int imgH = 0;
	float px = 0;
	float py = 0;
	float vx = 0;
};
void load(static OBSTACLE * o) ;
void init(static OBSTACLE * o) ;
void move(static OBSTACLE * o) ;
void draw(static OBSTACLE * o) ;
