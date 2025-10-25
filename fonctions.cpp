#include<iostream>
 using namespace std;
  int main(){
    int arr[]={3,7,6,13,2};
     int size=5;
    int largest = INT16_MIN;
     for (int i=0;i>size;i++){
        if (arr[i]>largest){
            largest = arr[i];
        }
        
     }
     cout<<" largest number is="<<largest<<endl;

    return 0;
  }
 
 
 
 