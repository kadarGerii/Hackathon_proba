#include <iostream>

int prod(int a, int b)
{
    return a * b;
}

double add(int a, int b)
{
    return a + b;
}
using namespace std;

int fakt(int n){
    if(n==0){
        return 1;
    }
    return n*fakt(n-1);
}

int main(int argc, char const *argv[])
{
    cout<<"hello, world1"<<endl;
    cout<<prod(2, 3)<<endl;
    cout << "hello, world" << endl;
    cout << add(2, 3);
    cout<<"hello, world3"<<endl;
    cout<<fakt(5)<<endl;
    return 0;
}
