class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0, end = 0;
        vector<vector<bool>> dp(n, vector<bool>(n, false));

        for (int len = 1; len <= n; len++) {
            for (int i = 0, j = i + len - 1; j < n; i++, j++) {
                if (i == j) // FOR LENGTH 1
                    dp[i][j] = true;
                else if (i + 1 == j) // FOR LENGTH 2
                    dp[i][j] = (s[i] == s[j]);
                else // FOR LENGTH GREATER THAN 2
                    dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]);

                if (dp[i][j] && (j - i + 1 > end - start + 1)) {
                    start = i;
                    end = j;
                }
            }
        }

        return s.substr(start, end - start + 1);
    }
};