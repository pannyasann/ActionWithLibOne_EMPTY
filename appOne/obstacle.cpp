#include"libOne.h"
#include"obstacle.h"
void load(static OBSTACLE* o) {
	o->imgIdx = loadImage("assets/pumpkin.png");
	o->imgW = 364;
	o->imgH = 300;
}
void init(static OBSTACLE* o) {
	o->px = width;
	o->py = height - o->imgH;
	o->vx = -10;
}
void move(static OBSTACLE* o) {
	o->px += o->vx;
	if (o->px < -o->imgW) {
		o->px = width;
	}
}
void draw(static OBSTACLE* o) {
	image(o->imgIdx, o->px, o->py);
}