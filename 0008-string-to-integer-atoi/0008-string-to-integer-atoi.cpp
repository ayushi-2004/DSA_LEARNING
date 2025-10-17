class Solution {
public:
    int myAtoi(string s) {
        
        int i = 0, n = s.size();
        long result = 0;     // use long to detect overflow safely
        int sign = 1;        // default positive

        // 1️⃣ Skip leading spaces
        while (i < n && s[i] == ' ')
            i++;
 
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }        
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            
            if (result > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            i++;
        }

       
        return (int)(result * sign);
    }
    
};