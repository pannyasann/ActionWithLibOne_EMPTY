/*#include"libOne.h"
struct SQUARE {
	float x, y, w, h;
	float left, right, top, bottom;
};
void gmain() {
	window(1920, 1080, full);
	struct SQUARE a;
	struct SQUARE b;

	a.x = 0;
	a.y = 0;
	a.w = 200;
	a.h = 200;
	b.x = 600;
	b.y = 600;
	b.w = 200;
	b.h = 200;
	while (notQuit) {
		a.x = mouseX;
		a.y = mouseY;
		clear(128, 128, 128);
		a.left = a.x;
		a.right = a.x + a.w;
		a.top = a.y;
		a.bottom = a.y + a.h;
		b.left = b.x;
		b.right = b.x + b.w;
		b.top = b.y;
		b.bottom = b.y + b.h;
		if (a.right < b.left || b.right < a.left||
		    a.bottom < b.top || b.bottom < a.top)
			fill(0, 200, 0, 128);
		else
			fill(200, 0, 0, 128);
		rect(a.x, a.y, a.w, a.h);
		rect(b.x, b.y, b.w, b.h);
		fill(255, 255, 255);
		textSize(200);
		text("a", a.x+50, a.y + 200);
		text("b", b.x+50, b.y + 200);
	}
}
*/


#include"libone.h"
#include"obstacle.h"
#include"player.h"
#include"rect_area.h"
int collision(struct PLAYER* p, struct OBSTACLE* o) {
	float pLeft = p->p.x + p->r.dx;
	float pRight = pLeft + p->r.w;
	float pTop = p->p.y + p->r.dy;
	float pBottom = pTop + p->r.h;
	float oLeft = o->p.x + o->r.dx;
	float oRight = oLeft + p->r.w;
	float oTop = o->p.y + o->r.dy;
	float oBottom = oTop + o->r.h;
	if (pRight < oLeft || oRight < pLeft ||
		pBottom < oTop || oBottom < pTop) {
		return 0;
	}
		return 1;
}
void gmain() {
	window(1920, 1080, full);
	struct OBSTACLE obstacle;
	struct PLAYER player;
	load(&obstacle);
	load(&player);
	init(&obstacle);
	init(&player);
	while (notQuit) {
		move(&obstacle);
		move(&player);
		if(collision(&player,&obstacle))
			clear(250, 0, 0);
		else
		    clear(70, 0, 70);
		draw(&obstacle);
		draw(&player);
		drawRectArea(&obstacle.p, &obstacle.r);
		drawRectArea(&player.p, &player.r);
	}
}
