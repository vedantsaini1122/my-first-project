#include<iostream>
using namespace std;
int product(int a, int b){
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    int productN = a*b;
    return productN;
}
 int main(){
    int result = product(0,0);
    cout<<"tne product of two number is"<<result<<endl;
    return 0;
 }