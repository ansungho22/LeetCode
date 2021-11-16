#include<stack>
using namespace std;
class Solution {
public:
     string longestPalindrome(string s) { 
        //brute-force solution 

        int len = s.length(); 
        int sublen = 0; 
        int max_sublen = 0; 
        string max_subpalin; 
        bool ispalin = false; 
        int start; 
        int end; 
        for(int i=0;i<len;i++){ 
            for(int j =i;j<len;j++){ 
                sublen = j-i+1; 
                if(sublen<=max_sublen)continue; 
                ispalin = true; 
                start = i, end = j; 
                while(start<end){ 
                    if(s[start++]!=s[end--]){ 
                        ispalin = false; 
                        break; 
                    }     
                } 
                if(ispalin){ 
                    max_subpalin= s.substr(i,sublen); 
                    max_sublen = sublen; 
                } 

            } 
        } 
        return max_subpalin; 
    } 
};