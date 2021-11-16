class Solution {
    public:
        int max(int a, int b) {
        int answer;
        answer = a > b ? a : b;
        return answer;
    }
    int lengthOfLongestSubstring(string s) {
        int s_idx = 0;
        int e_idx = 0;
        string str = "";
        int answer = 0;
        while (e_idx < s.size()) {

            if (str.find(s[e_idx]) == string::npos) str += s[e_idx];
            else {
                answer = max(answer, str.size());
                while (str.find(s[e_idx]) != string::npos) {
                    str = str.substr(1);
                }
                str += s[e_idx];
            }
            e_idx++;
        }
        answer = max(answer, str.size());
        return answer;

    }
};