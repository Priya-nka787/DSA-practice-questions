//vectors in C++
#include<iostream>
#include<vector>
using namespace std;
//declaration of syntax of vectors = 3 methods
int main(){
    // 1st method
         // vector<int> vec;
    // 2nd method
        // vector<int> vec = {1,2,3};
        // cout << vec[0] << endl;
    //  3rd method
        // vector<int> vec(5,1)---> here 5 is size of vector and 1 is the element that is to be sotred
        // cout << vec[0] << endl;
        // cout << vec[1] << endl;
        // cout << vec[2] << endl;
        // cout << vec[3] << endl;
    // by using for each loop
        vector<char> vec = {'a','b','c','d','e'};
        cout<<"size ="<<vec.size()<<endl;//here it will give the size of vector
        for(char i : vec){
            cout<<i<<endl;
    // here the iterator i stores the value of array vector not the index number
    // this is difference betwwen for and for each loop
        }
    return 0;
}