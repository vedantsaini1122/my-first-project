#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,2,5,4,7};
    int product =3;
    for(int i=1;i<5;i++){
        product *= arr[i];
    }
    cout<<product;
    return 0;
}