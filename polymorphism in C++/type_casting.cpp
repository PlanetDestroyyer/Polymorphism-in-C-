// the type convertion is a process in ehich variable in one data type can be converted to another data type

#include <iostream>

using namespace std;

//explicit converion
class Test {
    int Val;
public:
    explicit Test(int x):Val(x)
    {
        cout<<"Val = "<<Val;
    }
};

int main(){
    //imlplict conversion
    int x;
    float y = 99.99;
    x = y;
    cout<<x;
    //explicit converion
    Test obj = 100;  //will give an error 
    return 0;
    
}