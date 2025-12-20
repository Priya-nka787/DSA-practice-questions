        // to check bitwise operators
#include<iostream>
using namespace std;
int main(){
            // Bitwise & operator
int a,b;
cout<<"Enter two numbers:"<<endl;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<(a&b)<<endl;
            // Bitwise | operator= only 0|0=0and rest is 1
cout<<(a|b)<<endl;
            // Bitwise ^(Xor) operator= when bit same than gives zero otherwise 1 
cout<<(a^b)<<endl; 
           // bitwise << (left shift)=in this the bit is shifted to the left
cout<<(a<<2)<<endl;
           // bitwise >>(right shift)=in this the bit is shifted to the right
cout<<(a>>1)<<endl;           
return 0;            
}                