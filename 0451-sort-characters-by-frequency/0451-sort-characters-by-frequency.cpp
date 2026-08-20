class Solution {
public:
    string frequencySort(string s) {
        int freq[256] = {0};

        for (char c : s) {
            freq[c]++;
        }

        string ans = "";

        for (int k = 0; k < s.length(); k++) {
            int maxFreq = 0;
            char maxChar = 0;

            for (int i = 0; i < 256; i++) {
                if (freq[i] > maxFreq) {
                    maxFreq = freq[i];
                    maxChar = char(i);
                }
            }

            if (maxFreq == 0)
                break;

            for (int i = 0; i < maxFreq; i++) {
                ans += maxChar;
            }

            freq[maxChar] = 0;
        }

        return ans;
    }
};