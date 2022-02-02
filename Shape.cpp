#include "Shape.h"

using namespace std;

Shape::Shape(double dimension_param) {
	dimension = dimension_param;
}

double Shape::get_area() const {
	return dimension * dimension * 3.14;
}


