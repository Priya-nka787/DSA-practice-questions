            //  calling function using parameters
#include<iostream>
using namespace std;
int sum(int a ,int b){
    int s = a+b;
    return s;
}
int main(){
    // function call/invoke
    cout<<sum(10,5);
    cout<<endl;
    return 0;

}