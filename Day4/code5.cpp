// to calculate N factorial
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    cout<<"factorial is= "<<factorial(5)<<endl;
    cout<<"factorial is= "<<factorial(4)<<endl;
    return 0;
}