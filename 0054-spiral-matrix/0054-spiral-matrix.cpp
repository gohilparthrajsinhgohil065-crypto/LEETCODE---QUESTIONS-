class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();

        int a = 0, b = 0;
        int c = n - 1, d = m - 1;

        while(a <= c && b <= d) {
            for(int i = b; i <= d; i++)
                ans.push_back(matrix[a][i]);
            a++;

            for(int i = a; i <= c; i++)
                ans.push_back(matrix[i][d]);
            d--;

            if(a <= c) {
                for(int i = d; i >= b; i--)
                    ans.push_back(matrix[c][i]);
                c--;
            }

            if(b <= d) {
                for(int i = c; i >= a; i--)
                    ans.push_back(matrix[i][b]);
                b++;
            }
        }

        return ans;
    }
};