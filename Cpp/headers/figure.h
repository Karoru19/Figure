#ifndef __FIGURE_H_INCLUDED__
#define __FIGURE_H_INCLUDED__

#include <string>

class Figure {
private:
    std::string m_color;

protected:
    float m_area;

    virtual void calculateArea()=0;

public:
    Figure(std::string color);
    virtual ~Figure();
    
    std::string getColor() const;
    float getArea() const;
    
    virtual const std::string classname()=0;
    virtual bool equals(Figure *fig)=0;

};

#endif //__FIGURE_H_INCLUDED__
