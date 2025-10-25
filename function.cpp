#include<iostream>
 using namespace std;
   int sum(int a, int b ){
    cout<<"enter first number:"<<endl;
    cin>>a;
    cout<<"enter second numbeer:"<<endl;
    cin>>b;
     int sumN = a + b; 
    return sumN;
   }
   int main(){ 
    int result = sum(0,0);
    cout<<"the sum of two number is"<<result<<endl;
    return 0;
   }