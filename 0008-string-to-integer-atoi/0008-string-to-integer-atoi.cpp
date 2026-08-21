class Solution {
public:
    int myAtoi(string s) {
        int ans = 0, i = 0, sign = 1;

        while (i < s.size() && s[i] == ' ')
            i++;

        if (s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (s[i] == '+') {
            i++;
        }

        for (; i < s.size(); i++) {
            char c = s[i];

            if (c < '0' || c > '9')
                break;

            int digit = c - '0';

            if (ans > (INT_MAX - digit) / 10)
                return sign == 1 ? INT_MAX : INT_MIN;

            ans = ans * 10 + digit;
        }

        return ans * sign;
    }
};