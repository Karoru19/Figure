#include "circle.h"

Circle::Circle(int radius, std::string color) : Figure(color), m_radius(radius) {
    calculateArea();
}
Circle::~Circle() {}

int Circle::getRadius() const {
    return m_radius;
}

void Circle::setRadius(int radius) {
    m_radius=radius;
}

void Circle::calculateArea() {
    m_area = M_PI*m_radius*m_radius;
}

const std::string Circle::classname() {
    return "Circle";
}

bool Circle::equals(Figure *fig) {
    if (fig->classname() != "Circle") return false;
    if (Circle *circle = dynamic_cast<Circle *> (fig))
        return getRadius() == circle->getRadius() && getColor() == circle->getColor();
    return false;
}
