#include<iostream>
using namespace std;
int main()
{
     cout<<"Hello Priyanka."<<endl <<"How is your day?" << endl;
     char grade = 'A';//ASCII value of A is 65
     int value = grade;
     cout<< value<<endl;
    //  type casting = converting big datatype into small datatype
    double price = 15.45;
    int newprice = (int)price;
    cout<< newprice<<endl;
    // arithmetic operations
    int a=10,b=5;
    cout<<"sum="<<(a+b)<<endl;
    cout<<"difference="<<(a-b)<<endl;
    cout<<"product="<<(a*b)<<endl;
    cout<<"Division="<<(a/b)<<endl;
    cout<<"modulo= "<<(a%b)<<endl;
    // relational operator
    cout<<(3<5)<<endl; 
    cout<<(3>5)<<endl;
    cout<<(3<=3)<<endl;
    cout<<(3!=3)<<endl;
    // logical operators
    cout<<(3<5)<<endl;
    cout<<!(3<5)<<endl;
    cout<<((3<5) || (5<1))<<endl;
    cout<<((3<5) && (5<1))<<endl;
    return 0;
}