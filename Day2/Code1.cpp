// Conditional statements = If-else statements
#include<iostream>
using namespace std;
int main() {




    // to check given number is positive or not
    int a;
    cout<<"Enter a number a=";
    cin>>a;
if(a>=0){
    cout<<"a is positive number\n";
}else{
    cout<<"a is negative number\n";
}




// to check whether the person can vote or not
int age;
cout<<"Enter the age of person =";
cin>>age;
if(age>=18){
    cout<<"You can vote.\n";
}else{
    cout<<"You cannot vote.\n";
}



// to check whether the given number is even or odd
int n;
cout<<"Enter a number n =";
cin>>n;
if(n%2==0){
    cout<<"n is even\n";
}else{
    cout<<"n is odd\n";
}



// to check given character is uppercase or lowercase
char ch;
cout<<"Enter ch =";
cin>>ch;
if(ch>=65 && ch<=90){
    cout<<"ch is Uppercase\n";
}else{
    cout<<"ch is Lowercase\n";
}



return 0;
}
