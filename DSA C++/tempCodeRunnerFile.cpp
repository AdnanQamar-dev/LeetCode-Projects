class Solution {
public:
    int maxSubArray(vector<int>& nums) {
            int currsum=0;int MaxSum=INT_MIN;

            for(auto Val : nums){
                currsum+=Val;
                MaxSum=max(currsum,MaxSum);
                if(currsum<0){
                currsum=0;
                }
            }
        return MaxSum;
    }
};