#include<iostream>
using namespace std;
int main(){
    int arr[5]={23,43,89,24,56};
    int x;
    cin>>x;
    cout<<"Enter your target:"<<x;
    for(int i=0;i<5;i++){
      if (arr[i]==x){
        cout<<"yes the number is present in table"<<x;
      }
      cout<<"\n";
    }
    return 0;
}