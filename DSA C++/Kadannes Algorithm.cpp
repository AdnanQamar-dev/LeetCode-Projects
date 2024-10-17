#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr1[]={23,53,51,-1};

    int n=sizeof(arr1)/sizeof(arr1[0]);
    int cursum=0;
    int Maxsum=arr1[0];

    // Most Optimized Method 

    for(int i=0;i<n;i++){
        cursum+=arr1[i];
         Maxsum=max(Maxsum,cursum);
  
        if(cursum<0)
        cursum=0;      
       
    }
  
    cout<<Maxsum<<endl;



//.......................................................................................................

    // Brute Force Method

    // int Maxsum=arr1[0];

    // for(int str=0;str<n;str++){
    //     int currsum=0;
    //     for(int end= str;end<n;end++){
    //         currsum+=arr1[end];
    //         Maxsum=max(Maxsum,currsum);
    //     }
    // }

    //     cout << "Current sum: " << ", Max sum: " << Maxsum << endl;

    return 0;
}