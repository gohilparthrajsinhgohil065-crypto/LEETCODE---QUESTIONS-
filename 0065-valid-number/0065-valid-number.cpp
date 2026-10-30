class Solution {
public:
    bool isNumber(string s) {
        int i = 0;
        bool digit = false, dot = false, exp = false;

        for(char c : s) {
            if(isdigit(c)) {
                digit = true;
            }
            else if(c == '+' || c == '-') {
                if(i != 0 && s[i-1] != 'e' && s[i-1] != 'E')
                    return false;
            }
            else if(c == '.') {
                if(dot || exp) return false;
                dot = true;
            }
            else if(c == 'e' || c == 'E') {
                if(exp || !digit) return false;
                exp = true;
                digit = false;
            }
            else {
                return false;
            }
            i++;
        }

        return digit;
    }
};