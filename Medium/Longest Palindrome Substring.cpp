class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() == 0){return "";}
        int memo[s.length()][s.length()] = {0};
        int max = 1;
        string longest = s.substr(0,1);

        //initialize diagonals as palindromes
        for(int i = 0; i < s.length(); i++){
            memo[i][i] = 1;
        }
        
        for(int k = 2; k <= s.length() ; k++){
            for(int i = 0; i < s.length() - k + 1; i++){
                int j = i + k - 1;
                if(j - 1 == i){
                    if(s[i] == s[j]){
                        memo[i][j] = 1;
                        if(j - i + 1 > max){
                            max = j - i + 1;
                            longest = s.substr(i,j-i + 1);
                        }
                    }
                }
                else{
                    if(memo[i+1][j-1] == 1 && s[i] == s[j]){
                        memo[i][j] = 1;
                        if(j - i + 1 > max){
                            max = j - i + 1;
                            longest = s.substr(i,j-i + 1);
                        }
                    }
                }
            }
               
        }

        return longest;
    }
};