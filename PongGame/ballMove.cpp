#include <iostream>
#include <raylib.h> 

using namespace std;

class Ball {
	public:
	float x, y;
	int speed_x, speed_y;
	int radius;

	void Draw() {
		DrawCircle(screen_width / 2, screen_height / 2, 20, WHITE);
	}
};