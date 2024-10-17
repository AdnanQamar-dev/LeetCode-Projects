#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans;  // Vector to store result indices
        
        int n = nums.size();

        // Outer loop to pick the first element
        for (int i = 0; i < n; i++) {
            // Inner loop to pick the second element, starting from i + 1 to avoid duplicates
            for (int j = i + 1; j < n; j++) {
                // If the sum of the two elements equals the target, we push their indices to the result
                if (nums[i] + nums[j] == target) {
                    ans.push_back(i);  // First index
                    ans.push_back(j);  // Second index
                    return ans;        // Return immediately once we find the pair
                }
            }
        }

        return ans;  // Return empty vector if no pair is found
    }
};
