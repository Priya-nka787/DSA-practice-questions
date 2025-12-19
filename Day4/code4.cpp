        // to calculate sum of numbers from 1 to N
#include<iostream>
using namespace std;
int summation(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
    sum+=i;
    }
    return sum;
}        
int main(){
    cout<<"sum of series= "<<summation(5)<<endl;
    cout<<"sum of series= "<<summation(10)<<endl;
    return 0;
}