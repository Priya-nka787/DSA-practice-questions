        // binary to decimal number conversion
#include<iostream>
using namespace std;
int bintodeci(int binnum){
    int pow=1,ans=0;
    while(binnum>0){
        int rem = binnum%10;
        binnum/=10;
        ans+=(rem*pow);
        pow*=2;
    }
    return ans;
}        
int main(){
    int n;
    cout<<"Enter number=";
    cin>>n;
    cout<<"Enter binary number ="<<bintodeci(n);
    return 0;
}