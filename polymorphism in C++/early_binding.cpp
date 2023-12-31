#include <iostream>
using namespace std;
class Base {
    public:
        void display(){
            cout<<"This is Base Class"<<endl;
        }
};

class Derived : public Base{
    public :
    void display(){
        cout<<"This is Derived Class"<<endl;
    }
};

int main(){
    Base b;
    Derived d;
    b.display();
    d.display();
    return 0;
}