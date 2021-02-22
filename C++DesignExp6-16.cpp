#include <iostream>
using namespace std;
class Point {
    public:
    Point():x(0),y(0) {
        cout<<"Default Constructor called."<<endl;
    }
    Point(int x,int y):x(x),y(y) {
        cout<<"Constructor called.\n";
    }
    Point(Point &p):x(p.x),y(p.y) {
        cout<<"Copy called.\n";
    }
    ~Point() {
        cout<<"Destructor called.\n";
    }
    const int getX() {return x;}
    const int getY() {return y;}
    void move(int newX, int newY) {
        x=newX;
        y=newY;
    }
    private:
    int x,y;
};
int main () {
    cout<<"step 1:\n";
    Point* ptr1=new Point;
    delete ptr1;
    cout<<"step 2:\n";
    ptr1=new Point(1,2);
    delete ptr1;
    return 0;
}