// to understand pass by value
// means copy of argument is passed to function
#include<iostream>
using namespace std;
void change(int x){
    x = 2*x;
    cout<<"x="<<x<<endl;
}
int main(){
    int x = 5; //introducing a value and passing it to called function
    change(x); //first worked so printed first as output than removed from the memory of stack
    cout<<"x = "<<x<<endl; //after removing change function stack top comes to main function and give us output
    return 0;

}