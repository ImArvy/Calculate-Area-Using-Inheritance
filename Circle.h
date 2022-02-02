#ifndef RYAN_CIRCLE_H
#define RYAN_CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
protected:
	double radius;

public:
	Circle() : Shape(dimension) {
		radius = dimension;
	}

	void set_radius(double radius_param) { radius = radius_param; }
	double get_radius() {
		return radius;
	}

	double get_area() const {
		return radius * radius * 3.14;
	}
};

#endif // RYAN_CIRCLE_H
