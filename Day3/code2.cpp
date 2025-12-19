// to work on pattern problems
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number= ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            cout<<j ; 
        }
        cout<<endl;
    }
    cout<<endl;


               //    to draw star pattern 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
               //   to draw character pattern
    
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}