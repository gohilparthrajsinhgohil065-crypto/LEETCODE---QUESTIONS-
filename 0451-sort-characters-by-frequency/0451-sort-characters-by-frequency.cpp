class Solution {
public:
    string frequencySort(string s) {
        int freq[256] = {0};
        for(char c:s){
            freq[c]++;

        }
string ans="";
 for (int i = 0; i < s.length(); i++) {
            int mx = 0, ch = 0;

            for (int j = 0; j < 256; j++) {
                if (freq[j] > mx) {
                    mx = freq[j];
                    ch = j;
                }
            }

            for (int j = 0; j < mx; j++)
                ans += ch;

            freq[ch] = 0;
        }
        return ans;
      
    }
};