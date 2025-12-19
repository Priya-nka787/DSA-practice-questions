    // pattern problems
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number= ";
    cin>>n;
    int num=1;
 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<num<<" ";
        num+=1;
    }
    cout<<endl;
 }
 cout<<endl;

        //    to draw character pattern
  char ch='A';  
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<ch<<" ";
        ch+=1;
    }
    cout<<endl;
 }    
 return 0;   
}    