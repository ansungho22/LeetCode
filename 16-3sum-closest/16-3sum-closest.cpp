#include<limits.h>
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {   
        int answer = 5000;
        sort(nums.begin(),nums.end());
        
        int len = nums.size();
        
        for(int i = 0; i < len - 2; i++) {
            int j = i + 1;
            int k = len - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (target == sum) {
                    return target;
                }
                else if (target > sum)
                    j++;
                else if (target < sum)
                    k--;
                answer = (std::abs(target - answer) < std::abs(target - sum)) ? answer : sum;
            }
        }
        return answer;
    }
};