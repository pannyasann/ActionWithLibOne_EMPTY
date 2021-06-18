#include"libOne.h"
#include"obstacle.h"
void load(static OBSTACLE* o) {
	o->imgIdx = loadImage("assets/pumpkin.png");
	o->imgW = 364;
	o->imgH = 300;
}
void init(static OBSTACLE* o) {
	o->p.x = width;
	o->p.y = height - o->imgH;
	o->vx = -10;
	o->r.dx = 30;
	o->r.w = 50;
	o->r.w = o->imgW - o->r.dx * 2;
	o->r.h = o->imgH - o->r.dy;
}
void move(static OBSTACLE* o) {
	o->p.x += o->vx;
	if (o->p.x < -o->imgW) {
		o->p.x = width;
	}
}
void draw(static OBSTACLE* o) {
	image(o->imgIdx, o->p.x, o->p.y);
}