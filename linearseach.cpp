#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int a;
    cout<<"enter the target "<<endl;
    cin>>a;
    for(int i=0;i<5;i++){
        if(a==arr[i]){
            cout<<"yes your target is present "<<endl;
            return 0;
        } 
        else{
            cout<<"target not found "<<endl;
            return 0;
        }
    }
    cout<<a;
    return 0;

}