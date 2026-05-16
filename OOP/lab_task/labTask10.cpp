#include <iostream>
using namespace std;
class Shape {
public:
    virtual void calculateArea() {
        cout << "Calculating area of shape..." << endl;
    }
    void display() {
        cout << "Displaying shape" << endl;
    }

    void display(string name) {
        cout << "Shape: " << name << endl;
    }

    void display(string name, double area) {
        cout << "Shape: " << name << ", Area: " << area << endl;
    }
};
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void calculateArea() override {
        double area = 3.14 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void calculateArea() override {
        double area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    Shape* shape;

    Circle c(5);
    Rectangle r(4, 6);
    shape = &c;
    shape->calculateArea();

    shape = &r;
    shape->calculateArea();
    Shape s;
    s.display();
    s.display("Circle");
    s.display("Rectangle", 24.0);

    return 0;
}
