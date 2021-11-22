#include<string>
#include<limits>
class Solution {
public:
    bool isDigit(int c) {return c >= 0 && c <= 9;}



    int getDigit(char c) {return c - '0';}
    int myAtoi(string s) {
        long long num = 0;
	    int idx = 0;
	    while (s[idx] == ' ') idx++;
	    bool isNegative = ( s[idx] == '-' );
	    if (isNegative || s[idx] == '+')idx++; 
        int digit;
        while (isDigit((digit = getDigit(s[idx++]))))
	    {
		    if (((num *= 10)+=digit) > INT_MAX) return isNegative ? INT_MIN : INT_MAX;
	    }

    return isNegative ? -num : num;
    }
};
  

    
