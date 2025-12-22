                            // arrays syntax
#include<iostream>
using namespace std;
int main(){
    int marks[5]={99,34,67,12,100};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
                // arrays using loops
    int size=5;
    for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }            
    return 0;
}                            