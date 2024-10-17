#include<iostream>
using namespace std;

int main(){

    // int Arr1[]={4,1,2,1,2};

    int Arr1[]={2,2,1};

    int count=0;

    int sz=sizeof(Arr1)/sizeof(Arr1[0]);

    for(int i=0;i<sz;i++){
   
    count^=Arr1[i];               

    }

    cout<<count;

    return 0;
}    
    

    