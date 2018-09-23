#include <iostream>
#include <vector>
#include <limits.h>
#include "figure.h"
#include "rectangle.h"
#include "square.h"
#include "circle.h"

using namespace std;

void clear() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

bool exist(vector<Figure*> v, Figure* fig) {
    for (size_t i=0; i<v.size(); i++){
        if (v.at(i)->equals(fig)) {
                return true;
        }
    }
    return false;
}

int main() {
    vector<Figure*> list;
    bool exit = false;
    clear();
    while(!exit) {
        int option = 10;
        cout << "1 - Create rectangle" << endl;
        cout << "2 - Create square" << endl;
        cout << "3 - Create circle" << endl;
        cout << "4 - Show all figures" << endl;
        cout << "0 - Exit" << endl;
        cin >> option;
        if (option == 1) {
            clear();
            cout << "Creating Rectangle" << endl;
            int length = 0;
            int width = 0;
            string color = "white";
            cout << "Enter length (integer): ";
            cin >> length;
            while (!cin.good()) {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << "Enter length (integer): ";
                cin >> length;
            }
            cout << "Enter width (integer): ";
            cin >> width;
            while (!cin.good()) {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << "Enter width (integer): ";
                cin >> width;
            }
            cout << "Enter color (string): ";
            cin >> color;
            Rectangle* rect = new Rectangle(length, width, color);
            if (!exist(list, rect)) {
                list.push_back(rect);
                clear();
            }
            else {
                clear();
                cout << "This Rectangle exists\n\n";
            }
        }
        if (option == 2) {
            clear();
            cout << "Creating Square" << endl;
            int side = 0;
            string color = "white";
            cout << "Enter side (integer): ";
            cin >> side;
            while (!cin.good()) {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << "Enter side (integer): ";
                cin >> side;
            }
            cout << "Enter color (string): ";
            cin >> color;
            Square* sqr = new Square(side, color);
            if (!exist(list, sqr)) {
                list.push_back(sqr);
                clear();
            }
            else {
                clear();
                cout << "This Square exists\n\n";
            }
        }
        if (option == 3) {
            clear();
            cout << "Creating Circle" << endl;
            int radius = 0;
            string color = "white";
            cout << "Enter radius (integer): ";
            cin >> radius;
            while (!cin.good()) {
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << "Enter radius (integer): ";
                cin >> radius;
            }
            cout << "Enter color (string): ";
            cin >> color;
            Circle* circle = new Circle(radius, color);
            if (!exist(list, circle)) {
                list.push_back(circle);
                clear();
            }
            else {
                clear();
                cout << "This Circle exists\n\n";
            }
        }
        if (option == 4) {
            clear();
            cout << "List of Figures" << endl;
            for (Figure* fig: list) {
                cout << fig->classname() << " - area = " << fig->getArea() << ", color: " << fig->getColor() << endl;
            }
            cout << endl;
        }
        if (option == 0) {
            exit = true;
            int rectCount = 0, sqrCount = 0, circleCount=0;
            clear();
            if (list.size() == 0) cout << "List is empty" << endl;
            else cout << "List of Figures" << endl;
            for (Figure* fig: list) {
                if (fig->classname() == "Rectangle") rectCount++;
                else if (fig->classname() == "Square") sqrCount++;
                else circleCount++;
                cout << fig->classname() << " - area = " << fig->getArea() << ", color: " << fig->getColor() << endl;
                delete fig;
            }
            cout << "\nNumber of Rectangles: " << rectCount << "\nNumber of Squares: " << sqrCount << "\nNumber of Circles: " << circleCount << endl;
        }
    }
    list.clear(); 
    return EXIT_SUCCESS;
}
