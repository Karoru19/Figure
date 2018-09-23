#include "rectangle.h"

Rectangle::Rectangle(int length, int width, std::string color) : Figure(color), m_length(length), m_width(width) {
    calculateArea();
};

Rectangle::~Rectangle() {};

int Rectangle::getLength() const {
    return m_length;
}

int Rectangle::getWidth() const {
    return m_width;
}

void Rectangle::setLength(int length) {
    m_length=length;
}

void Rectangle::setWidth(int width) {
    m_width=width;
}
    
void Rectangle::calculateArea() {
    m_area = m_length*m_width;
}

const std::string Rectangle::classname() {
    return "Rectangle";
}

bool Rectangle::equals(Figure *fig) {
    if (fig->classname() != "Rectangle") return false;
    if (Rectangle *rect = dynamic_cast<Rectangle *> (fig))
        return getLength() == rect->getLength() && getWidth() == rect->getWidth() && getColor() == rect->getColor();
    return false;
}
