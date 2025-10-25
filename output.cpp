#include<iostream>
using namespace std;
 int main(){
    int marks;
    cout<<"enter your marks:";
    cin>> marks;
    if (marks > 85)
    {
        cout<<"A\n";
    } 
    else if (marks > 60 && marks<85)
    {
        cout<<"B\n";
    }
    else if (marks > 40 && marks<60)
    {
        cout<<"C\n";
    }
    
    return 0;
 }

 

  
