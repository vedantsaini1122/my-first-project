#include<iostream>
using namespace std;
 int main(){
    int arr[5]={2,4,6,9,7};
    int max = arr[0]; 
    for (int i=0;i<5;i++){
          if (arr[i]>max){
            max=arr[i];
          }
    }
              cout<<max<<endl;
    return 0;
 }
