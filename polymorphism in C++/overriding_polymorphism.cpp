#include <iostream>

using namespace std;

class Base {

    public:
    void display(){
        cout<<"This is base Class"<<endl;
    }
};

class dervied : public Base{
    public :
    void display(){
        cout<<"This is Dervied Class "<<endl;
    }
};

int main(){

    Base b;
    b.display();
    dervied obj;
    obj.display();
    return 0;
}