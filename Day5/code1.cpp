        // converting decimal number into binary number system
#include<iostream>
using namespace std;
int decitobin(int decinum){
    int ans=0,pow=1;
    while(decinum>0){
        int rem = decinum%2;
        decinum = decinum/2;
        ans+=(rem*pow);
        pow*= 10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter number =";
    cin>>n;
    for(int i=2;i<=n;i++){
        cout<<"Decimal number is= "<<i<<endl;
    cout<<"Binary conversion is ="<<decitobin(i)<<endl;
    } 
    return 0;
}