#include<iostream>
using namespace std;
int main()
{
    // Unary operators
    // 1.Increment

    int a = 10;
    cout<<"b="<<(a++)<<endl;
    cout<<"a="<< a<<endl;

    cout<<"c="<<(++a)<<endl;
    cout<<"a="<<a<<endl;
    // 2.Decrement
    int p = 10;
    cout<<"q="<<(--p)<<endl;
    cout<<"p="<<p<<endl;

    cout<<"r="<<(p--)<<endl;
    cout<<"p="<<p<<endl;
    return 0;
}