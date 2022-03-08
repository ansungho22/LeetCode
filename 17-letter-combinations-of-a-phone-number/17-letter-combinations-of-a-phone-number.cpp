#include<string>
class Solution {
public:
    vector<string> answer = {};
    
    void dfs(vector<string> alp,vector<int> target,string str,int current_index){
        if(str.size() == target.size()){
            answer.push_back(str);
            return;
        }
        string cur_str = str;
        for(auto i : alp[ target [current_index] ] ){
            dfs(alp,target,cur_str+i,current_index+1);
        }
    }
    vector<string> letterCombinations(string digits) {    
        vector<int> nums;
        vector<string> alp = { "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.length() == 0) return {};
        
        for(char num : digits){
            int i = (num - '0') -2;
            nums.push_back(i);
        }
        
        dfs(alp,nums,"",0);
        return answer;
    }
    
    
};