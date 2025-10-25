#include <iostream>
using namespace std;
int main(){
    int arr[]={2,-4,3,-6,7,4,-5};
    int n =sizeof (arr[0]);
    int pos = 0;
    int neg = 0;
   for (int i=0;i<7;i++){
    if (arr[i]>0){
       pos++;
    }
    else{
        neg++;
    }
    }
      cout<<"total number of positive element are "<<pos<<endl;
      cout<<"total number of negative element are"<<neg<<endl;
      
    return 0;

}          