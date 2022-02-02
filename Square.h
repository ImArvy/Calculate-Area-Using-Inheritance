#ifndef RYAN_SQUARE_H
#define RYAN_SQUARE_H

#include "Shape.h"

class Square : public Shape {
protected:
	double width;

public:	
	Square() : Shape(dimension){
		width = dimension;
	}

	void set_width(double width_param) { width = width_param; }
	double get_width() {
		return width;
	}

	double get_area() const {
		return width * width;
	}
};

#endif // RYAN_SQUARE_H
