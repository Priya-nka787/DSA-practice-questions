// total number of subarrays = n*(n+1)/2
// Printing all the possible subarrays by knowing start and end point of array 
#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[5]={66,33,11,88,77};
    for(int st=0; st<n; st++){
        for(int end= st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}