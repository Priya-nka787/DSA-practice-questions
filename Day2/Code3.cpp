// Ternary statements = condition?posi:neg;

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number = ";
    cin>>n;
    cout<<(n>=0 ? "positive number" : "negative number")<<endl;
    return 0;
}