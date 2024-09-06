#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l, int w) : length(l), width(w) {}

    // Function to calculate the area of the rectangle
    int area() const {
        return length * width;
    }

    // Function to display the dimensions
    void display() const {
        cout << "Rectangle with length " << length << " and width " << width << endl;
    }

    // Destructor
    ~Rectangle() {
        cout << "Rectangle destroyed!" << endl;
    }
};

int main() {
    // Dynamically allocate memory for a Rectangle object using a pointer
    Rectangle* rectPtr = new Rectangle(10, 5);

    // Access members using the pointer (-> operator)
    rectPtr->display();
    cout << "Area of the rectangle: " << rectPtr->area() << endl;

    // Dynamically allocate memory for another Rectangle
    Rectangle* anotherRectPtr = new Rectangle(15, 7);

    // Access the new Rectangle's data
    anotherRectPtr->display();
    cout << "Area of the second rectangle: " << anotherRectPtr->area() << endl;

    // Free the dynamically allocated memory
    delete rectPtr;
    delete anotherRectPtr;

    return 0;
}
