// conditional statement = if-elseif-else

#include<iostream>
using namespace std;
int main(){



    // To check the grade of any student
    int marks;
    cout<<"Enter marks =";
    cin>>marks;
    if(marks>=90){
        cout<<"Grade A\n";
    }else if (marks>=75){
        cout<<"Grade B\n";
    }else if (marks>=60){
        cout<<"Grade C\n";
    }else if (marks>=45){
        cout<<"Grade D\n";
    }else{
        cout<<"Fail\n";
    }








    return 0;
}