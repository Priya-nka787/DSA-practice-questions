        // to find mini of two numbers
#include<iostream>
using namespace std;
int ismini(int a,int b){     //parameters
if(a<b){
    return a;
}else{
    return b;
}
}
 int main(){
    cout<<"mini number="<<ismini(4,8); //arguments-technically called literal which means that dose not change and remains fix
 }    
