#ifndef RYAN_SHAPE_H
#define RYAN_SHAPE_H

class Shape {
protected:
	double dimension;
public:
	Shape(double dimension = 0);

	virtual double get_area() const;
};

#endif // RYAN_SHAPE_H
