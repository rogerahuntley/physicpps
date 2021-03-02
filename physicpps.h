#ifndef PHYCPPS_H
#define PHYCPPS_H

// this is going to be a seperate library for physics and collision code

namespace physicpps {

struct rectangle {
    float x;
    float y;
    float width;
    float height;
    rectangle(int x = 0, int y = 0, int width = 0, int height = 0) : x(x), y(y), width(width), height(height) {};
};

static bool rectCollide(rectangle& rect1, rectangle& rect2);

struct Vector2 {
    float x;
    float y;
};



};

#endif // PHYCPPS_H