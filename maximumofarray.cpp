#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,5,3,4,6};
    int max = arr[0];
    int secmax = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
           max=arr[i] ;
    }
}
    cout<<"maximum element of a given array is "<<max<<"\n";
    for (int j=0;j<5;j++){
        if(arr[j]>secmax&&arr[j]<max){
            secmax=arr[j];
        }
    }
    cout<<"second maximum element of an array is "<<secmax;
    return 0;
}