class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;        
        bool flag = false;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j)continue;
                if(target == nums[i]+nums[j]){
                    answer.push_back(i);
                    answer.push_back(j);
                    flag = true;
                }
            }
            if(flag == true)break;
        }
        return answer;
    }
};