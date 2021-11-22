class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1)return s;
        string answer = "";
        int length = s.length();
        int skip = numRows * 2 - 2; 
        
        for (int i = 0; i < numRows; i++)
        {
            int current = i;
            
            while (current < length)
            {
                answer += s[current];
                current += skip;
                    
                    if (i > 0 && i < numRows - 1 && (current - i - i) < length)
                    {
                        answer += s[current - i - i];
                    }
            }
        }
        
        return answer;
        
    }
};