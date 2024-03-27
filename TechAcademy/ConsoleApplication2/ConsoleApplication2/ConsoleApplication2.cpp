#include <iostream>
#include <string>

using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(const string& color) : color(color) {}

    virtual double GetArea() const = 0;

    string GetColor() const {
        return color;
    }
};

// ----------------------------------------------------------- //

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(const string& color, double width, double height)
        : Shape(color), width(width), height(height) {}

    double GetArea() const override {
        return width * height;
    }
};

// ----------------------------------------------------------- //

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(const string& color, double base, double height)
        : Shape(color), base(base), height(height) {}

    double GetArea() const override {
        return 0.5 * base * height;
    }
};

// ----------------------------------------------------------- //

class Circle : public Shape {
private:
    double radius;

public:
    Circle(const string& color, double radius)
        : Shape(color), radius(radius) {}

    double GetArea() const override {
        return 3.14159 * radius * radius;
    }
};

// ----------------------------------------------------------- //

int main() {
    Rectangle rect("Red", 5, 4);
    Triangle tri("Blue", 6, 3);
    Circle cir("Green", 7);

    cout << "Rectangle color: " << rect.GetColor() << ", Area: " << rect.GetArea() << endl;
    cout << "Triangle color: " << tri.GetColor() << ", Area: " << tri.GetArea() << endl;
    cout << "Circle color: " << cir.GetColor() << ", Area: " << cir.GetArea() << endl;

    return 0;
}