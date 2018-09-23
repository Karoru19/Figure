#ifndef __RECTANGLE_H_INCLUDED__
#define __RECTANGLE_H_INCLUDED__

#include "figure.h"

class Rectangle : public Figure {
private:
    int m_length;
    int m_width;

protected:
    void calculateArea();

public:
    Rectangle(int length, int width, std::string color);
    ~Rectangle();

    int getLength() const;
    int getWidth() const;
    void setLength(int length);
    void setWidth(int width);
    
    const std::string classname();
    bool equals(Figure *fig);
};

#endif //__RECTANGLE_H_INCLUDED__
