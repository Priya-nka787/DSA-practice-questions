            // reverse triangle pattern
#include<iostream>
using namespace std;
int main(){
            // numeric pattern
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

            // character pattern

    for(int i=0;i<n;i++){
            char ch ='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl; 
    }        
    return 0;
}            