class Solution {
public:
    

    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;
        while(start < end){
            if(isalnum(s[start]) && isalnum(s[end])){
                if(tolower(s[start]) != tolower(s[end])){return false;}
                start++;
                end--;
            }
            else if(!isalnum(s[start])){
                start++;
            }
            else{
                end--;
            }
        }    
        return true;
    }
};