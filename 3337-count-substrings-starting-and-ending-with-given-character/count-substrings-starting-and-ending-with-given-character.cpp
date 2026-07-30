class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long count = 0;
        long long subString = 0;

        for(char &ch : s){
            if(ch == c){
                subString += (1 + count);
                count++;
            }
        }

        return subString;
    }
};