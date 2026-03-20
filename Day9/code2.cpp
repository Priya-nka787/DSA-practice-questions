//topic = vector functions
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector functions = size,pushback, pop_back, front, back, at
    // size function is used to give size of the vector
    // push_back is used to add any value in the program
    // pop_back is used to remove any value from program by default removes last value
    // front is used to print the starting value of vector
    // back is used to print last value of the vector
    // at is used to print the value of any position of vector
vector<int> vec;
cout<<"size= "<<vec.size()<<endl;
vec.push_back(25);
vec.push_back(22);
vec.push_back(38);
vec.push_back(46);
vec.push_back(74);
cout<<"size after push back ="<<vec.size()<<endl;
vec.pop_back(); 
cout<<"size after pop back ="<<vec.size()<<endl;
for (int val : vec){
    cout<<val <<endl;
}
cout<<"front value= "<<vec.front()<<endl;
cout<<"back value= "<<vec.back()<<endl;
cout<<"2nd index value= "<<vec.at(2)<<endl;
return 0;
}