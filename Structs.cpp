#include <iostream>

using namespace std;

struct Rectangle
    {
        int height;
        int width;

    // Create Cnstructor
    
    Rectangle(int height,int width)
    {
        this->height = height;
        this->width = width;
    }

    void display()
    {
        cout << "The Area of Rectangle is : " << height * width << endl; 
    }
};

int main()
{
    Rectangle r1(4,7);
    r1.display();

    return 0;
}