// static allocation= memory allocated during compile time and allocated in stack with a fixed size
// dynamic allocation= memory allocated while run time which can be resized
// this memory is allocated in heap type 
// example : static = array & dynamic = vector and size is doubled 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // let's se the size and capacity of vectors
    vector<int> vec;
        vec.push_back(0);
        vec.push_back(13);
        vec.push_back(34);
        vec.push_back(78);
        vec.push_back(100);
    cout<<"size of vec= "<<vec.size()<<endl; //size is number of elements
    cout<<"capacity of vec= "<<vec.capacity()<<endl; //capacity is how much space is there for total elemnets and it doubled always
    return 0;
}