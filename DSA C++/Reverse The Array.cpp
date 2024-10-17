#include <iostream>
#include <algorithm>

using namespace std;

/*************  ✨ Codeium Command ⭐  *************/
/**
 * @brief      Reverses the array
 *
 * @details    This program is to reverse the array. It takes an array of integer
 *             and reverses it.
 *
 * @param      arr1  The array to reverse
 * @param      size  The size of the array
 *  
 * @return     void
 **/


int main()
{
    int arr1[]={90,49,32,14,15,49,60};
    int size={sizeof(arr1)/sizeof(arr1[0])};

    // cout<<size;

    int start=0;
    int end=size-1;
    
    if(size%2==0){
    while(start<end)
    {
       
        swap(arr1[start],arr1[end]);
        start++;
        end--;

       

    }}
    else{
    while(start!=end){
        swap(arr1[start],arr1[end]);
        start++;
        end--;
    }}
    
    for(int i;i<size;i++){
        cout<<arr1[i]<<" ";
    }
    
}