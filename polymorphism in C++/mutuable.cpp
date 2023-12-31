#include <iostream>
using namespace std;

class Test{
    int a;
    mutable int b;
    public:
    Test()
    {
        a = 0;
        b = 0;

    }

    void change() const{
        a = a + 10; //this will show error as its not mutuable 
        b = b + 10;
    }
}

int main(){
    const Test obj;
    obj.change();
    return 0;
}