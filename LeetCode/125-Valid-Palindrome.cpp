class Solution {
public:
    bool isPalindrome(string s) {
        string result="";

        for (int i=0;i<s.size();i++){
            if (s[i]>='A' && s[i]<='Z'){
                result+=s[i]-'A'+'a';
            }
            else if (s[i]>='a' && s[i]<='z'){
                result+=s[i];
            }
            else if (s[i]>='0' && s[i]<='9'){
                result+=s[i];
        }
        }
        int n=result.size();
        for (int i=0;i<n;i++){
            if (result[i]!=result[n-i-1]){
                return false;
            }
        }
        return true;
    }
};