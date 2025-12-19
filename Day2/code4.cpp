                         // study of loops

#include<iostream>
using namespace std;
int main(){
    
                        // while loop

int n;
cout<<"enter number =";
cin>>n;
int i = 1;
while(i<=n){
    cout<<i<<" ";
    i++;
}
cout<<endl;
                    //  for loop
                    // sum of n numbers
int num;
cout<<"Enter number =";
cin>>num;
int sum =0;
for(int j=1;j<=num;j+=1 ){
    sum+=j;   //sum=sum+1+j
}          
cout<<"sum of series ="<<sum<<endl;    

            //   do while loop
int p = 10;
int k = 1;
do {
    cout<< k <<" ";
     k++;
}  while(k<=p);          
cout<<endl;
                   
return 0;
}