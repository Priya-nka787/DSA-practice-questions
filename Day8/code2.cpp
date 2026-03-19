#include<iostream>
using namespace std;
        // Linear Search
int linearSearch(int arr[], int sz, int target){
    for(int i=0; i<sz; i++){
    if(arr[i]==target){
        return i;//FOUND THE TARGET
    }
    }
    return -1;//NOT FOUND THE TARGET
}    
// Time complexity of linear search = O(n)
int main(){
    int arr[] = {4,2,8,1,2,7,5};
    int sz=7;
    int target = 50;
    cout<< linearSearch(arr, sz, target)<<endl;
    return 0;
}