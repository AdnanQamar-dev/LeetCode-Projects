#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int Arr1[]={2,12,3,7,8,-1,4};

    int MaxSum=Arr1[0];
    int countsum=0;
    int in_1=-1;
    int in_2=-1;

    for(int val:Arr1){
       
        countsum=val+countsum;
      
       if(countsum<0)
             countsum=0;
        
        MaxSum=max(MaxSum,countsum);
    }

   cout<< MaxSum;
}
