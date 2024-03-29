#include <iostream>
using namespace std;
class Rectangle {
public:
    int length;
    int width;
public:
    int getPerimeter() {
        return 2 * (length + width);
    }
    int getArea() {
        return length * width;
    }
};
int main() {
    cout << "类与对象案例:长方形!" << endl;
    Rectangle rectangle;
    rectangle.length = 4;
    rectangle.width = 2;
    int a = rectangle.getArea();
    int p = rectangle.getPerimeter();
//    cout <<
    return 0;
}



