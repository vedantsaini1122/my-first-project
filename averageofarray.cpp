#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    int sum = arr[0];
    for(int i=0;i<4;i++){
        sum+= arr[i];
    }
    cout<<sum/4<<endl;
    return 0;
}