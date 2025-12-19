            // inverted triangle pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number =";
    cin>>n;

    for(int i=0;i<n;i++){
        // spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        // numbers
        for(int j=0;j<n-i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
            // character version
    char ch = 'A';
    for(int i=0;i<n;i++){
        // spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        // numbers
        for(int j=0;j<n-i;j++){
            cout<<ch;
        }
        ch+=1;
        cout<<endl;
    } 
            // inverted pyramid pattern  
    for(int i=0;i<n;i++){
        // spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        // numbers
        for(int j=0;j<n-i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    } 
           
   
return 0;
}            