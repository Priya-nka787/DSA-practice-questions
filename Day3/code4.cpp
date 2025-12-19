        // to draw triangle pattern
#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"enter number= ";
    cin>>n;
    for(int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    //   numeric triangle pattern
    int num=1;
    for(int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<endl;

    //    character triangle pattern
    char ch='A';
    for(int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
    cout<<endl;
            // numeric pattern
      for(int i=0;i<n;i++){
        int num=1;
        for (int j=0;j<i+1;j++){
            cout<<num<<" ";
            num++;
        }       
        cout<<endl;
    }    cout<<endl;

        //   numeric pattern 

for(int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
 
        // character pattern
char c = 'A';        
for(int i=0;i<n;i++){
    for(int j=0; j<i+1; j++){
        cout<<c<<" ";
    }c+=1;
    cout<<endl;
}      
return 0;
}        