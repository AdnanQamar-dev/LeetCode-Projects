#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> nums={1,1,2,3,1,1,7};

    int n=nums.size();

    bool found=false;
    

    for(int i=0;i<n;i++){
          
            int count=1;
       
        for(int j=i+1;j<n;j++){
       
            if(nums[i]==nums[j]){
        
                count++;

            }          
        }
           if(count>=n/2){
                
                found=true;
               
                cout << "Element " << nums[i] << " appears "<<n/2<<" Majority times. " << endl; 
               
                break;
                
            }
    }
    
     if(!found)
        {
            cout<<"Not Found \n";
        }
     
    return  0;
}