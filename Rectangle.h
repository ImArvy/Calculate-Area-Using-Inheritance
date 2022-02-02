#ifndef RYAN_RECTANGLE_H
#define RYAN_RECTANGLE_H

#include "Square.h"

class Rectangle : public Square {
protected:
	double height;

public:
	Rectangle(double height_param = 0.0) : Square() {
		height = height_param;
	}

	void set_height(double height_param) { height = height_param; }
	double get_height() { 
		return height; 
	}

	double get_area() const {
		return width * height;
	}
};

#endif // RYAN_RECTANGLE_H
