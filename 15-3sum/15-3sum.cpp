class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();
        if (len < 3)
            return {};
        sort(nums.begin(), nums.end());
        set<vector<int>> unique_results;
        for(int i = 0; i < len - 2; i++) {
            int j = i + 1;
            int k = len - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (0 == sum) {
                    unique_results.insert({nums[i], nums[j++], nums[k--]});
                }
                else if (0 > sum)
                    j++;
                else if (0 < sum)
                    k--;
            }
        }
        vector<vector<int>> results;
        for(auto i :  unique_results){
            results.push_back(i);
        }
        
        return results;
    }
};
