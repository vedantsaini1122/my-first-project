#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,6,4,7,6};
    int sum = 0;
    for(int i=0;i<5;i++){
        sum += arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
