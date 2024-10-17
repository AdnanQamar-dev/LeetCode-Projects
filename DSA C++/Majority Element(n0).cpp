#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class solution{ 
    
     public:

    int major_element(vector<int> & nums){ 
            
            int sz=nums.size();
            int ans=0;
            int freq=0;

            for(int i=0;i<sz;i++){

                if(freq==0){
                    ans=nums[i];
                }
                if(ans==nums[i]){
                    freq++;
                }
                else{
                    freq--;
                }

            }

                int count=1;

                for(int val:nums){
                    if(val==ans)
                    {
                        count++;
                    }
                }

                if(count>sz/2){

                    cout<<"The Major Element is : "<<ans<<"\n";
                    return ans;
                }
                else
                {
                    cout<<"No Major Elements : ";
                    return -1;
                }

       return ans;
    }

   
    
};

int main() {

    vector<int> nums={1,6,6,7};

    solution sol;

    sol.major_element(nums);


return 0;
}