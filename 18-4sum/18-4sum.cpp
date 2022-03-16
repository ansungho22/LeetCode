class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>> ans; 
        if(nums.empty()) return ans; 
        int n = nums.size();
        sort(nums.begin(), nums.end()); 
        
        for(int i=0; i<n; i++) 
        {
            for(int j=i+1; j<n; j++) 
            {
                int target2 = target - nums[i] - nums[j]; 
                int left = j + 1, right = n - 1; 
                while(left < right)
                {
                    int two_sum = nums[left] + nums[right];
                    if(two_sum < target2) left++;
                    else if(two_sum > target2) right--;
                    else
                    {
                        vector<int> squad(4, 0); 
                        squad[0] = nums[i];
                        squad[1] = nums[j];
                        squad[2] = nums[left];
                        squad[3] = nums[right];
                        ans.push_back(squad); 
                        
                        while(left < right && nums[left] == squad[2]) left++;
                        while(left < right && nums[right] == squad[3]) right--;
                    }
                }
                while(j+1 < n && nums[j+1] == nums[j]) j++;
            }
                    while(i+1 < n && nums[i+1] == nums[i]) i++;
        }
        
        return ans;
    }
};