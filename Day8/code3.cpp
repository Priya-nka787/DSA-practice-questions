//Reverse of array
#include<iostream>
using namespace std;
    
void ReverseArr( int arr[], int sz){
    int start =0, end = sz-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={4,2,7,8,1,3,5};
    int sz=7;
    ReverseArr(arr, sz);
    for (int i=0; i<sz; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}