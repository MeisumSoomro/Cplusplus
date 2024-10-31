#include <iostream>
#include <vector>

// Create a class called "Shape"
class Shape {
 public:
  // Constructor
  Shape(int numSides) : numSides(numSides) {}

  // Destructor
  virtual ~Shape() {}

  // Virtual function that returns the area of the shape
  virtual double getArea() = 0;

  // Virtual function that returns the perimeter of the shape
  virtual double getPerimeter() = 0;

  // Getter function for the number of sides of the shape
  int getNumSides() { return numSides; }

 private:
  // Private member variable for the number of sides of the shape
  int numSides;
};

// Create a class called "Triangle" that inherits from "Shape"
class Triangle : public Shape {
 public:
  // Constructor
  Triangle(double base, double height) : Shape(3), base(base), height(height) {}

  // Override the "getArea" function to return the area of a triangle
  double getArea() { return 0.5 * base * height; }

  // Override the "getPerimeter" function to return the perimeter of a triangle
  double getPerimeter() {
    // Check if the triangle is a right triangle
    if (base * base + height * height <= 0) {
      throw std::runtime_error("Triangle is not a right triangle");
    }

    // Calculate the length of the third side of the triangle using Pythagorean theorem
    double c = sqrt(base * base + height * height);
    return base + height + c;
  }

 private:
  // Private member variables for the base and height of the triangle
  double base;
  double height;
};

// Create a class called "Circle" that inherits from "Shape"
class Circle : public Shape {
 public:
  // Constructor
  Circle(double radius) : Shape(0), radius(radius) {}

  // Override the "getArea

