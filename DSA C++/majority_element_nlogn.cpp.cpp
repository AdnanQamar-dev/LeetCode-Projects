#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution
{
    public:

    int majorityelement(vector<int> & nums){

       int sz=nums.size();
        
        sort(nums.begin(),nums.end());

        int count=1;

        int ans=nums[0];

        for(int i=1;i<sz;i++){
            if(nums[i]==nums[i-1])
          
            {
                count++;
            }
         
            else{
              
              
                count=1; 
                ans=nums[i];
            }
            
            if(count>sz/2)
            {
                return ans;
                
            }  
    }
   
     return ans;
    }
};
int main(){
   
   vector <int> nums ={4,2,4,51,1,1,1,1,1,1,1};

    Solution sol;

    cout<<"Majority Element : "<<sol.majorityelement(nums);


    return 0;
}