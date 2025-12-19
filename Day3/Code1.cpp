    //    to check given number is prome or not
#include<iostream>
using namespace std;
int main(){
    int n;
    bool isprime = true;
    cout<<"Enter number = ";
    cin>>n;
 for(int i=2;i<=n-1;i++) {
      if(n%i==0) {
        isprime = false;
        break;
      }
    }     
 if(isprime == true){
    cout<<"prime no\n";
 }else{
    cout<<"non prime no\n";
 }     

        //  second method 
for (int i=2;i*i<=n;i++){
    if(n%i==0){
        isprime = false;
        break;
    }
}
    if(isprime == true){
        cout<<"prime no\n";
    }else{
        cout<<"non prime no\n";
    }
        

return 0;  
}    