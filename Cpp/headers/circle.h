#ifndef __CIRCLE_H_INCLUDED__
#define __CIRCLE_H_INCLUDED__

#include "figure.h"
#include "math.h"

class Circle : public Figure {
private:
    int m_radius;

protected:
    void calculateArea();

public:
    Circle(int radius, std::string color);
    ~Circle();

    int getRadius() const;
    void setRadius(int radius);
    const std::string classname();
    bool equals(Figure *fig);
};

#endif //__CIRCLE_H_INCLUDED__
