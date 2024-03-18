#include <iostream>


using namespace std;

int fakt(int n){
    if(n==0){
        return 1;
    }
    return n*fakt(n-1);
}

int main(int argc, char const *argv[])
{
    cout<<"hello, world3"<<endl;
    cout<<fakt(5)<<endl;
    return 0;
}
