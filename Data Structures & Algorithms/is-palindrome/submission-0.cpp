class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }
        string rev_str = filtered;
        reverse(rev_str.begin(), rev_str.end());
        if(filtered == rev_str){
            return true;
        }
        else return false;
        
    }
};