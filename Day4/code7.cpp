    // calculating sum of digits of a number
#include<iostream>
using namespace std;
int sumofdigit(int N){
    int digisum = 0;
    while(N>0){
        int lastdigit = N%10;       
        N/=10;
        digisum+=lastdigit;
    }
    return digisum;
}    
int main(){
    cout<<"Sum = "<<sumofdigit(834)<<endl;
    return 0;
}