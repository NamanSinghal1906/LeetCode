class Solution {
public:
    bool isPalindrome(string s) {
        string first = "";
        string second = "";
        for(int i=0; i<=s.length(); i++){
            if(s[i]>='A' && s[i]<='Z' || s[i] >= 'a' && s[i] <= 'z' || s[i]>='0' && s[i]<='9'){
                first+=(char)tolower(s[i]);            
            }
        }
        for(int i = first.length()-1; i >= 0; i--){
            second +=first[i];
        }
        return first == second;
    }
};