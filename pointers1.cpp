#include <iostream>

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l, int w) : length(l), width(w) {}

    // Function to calculate area
    int area() const {
        return length * width;
    }

    // Function to display the dimensions
    void display() const {
        std::cout << "Rectangle with length " << length << " and width " << width << std::endl;
    }

    // Destructor (optional for demonstration)
    ~Rectangle() {
        std::cout << "Rectangle destroyed!" << std::endl;
    }
};
