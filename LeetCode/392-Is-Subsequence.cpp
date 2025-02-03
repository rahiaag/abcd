class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        int n=t.size();
        int m=s.size();
        if (n==0 && m==0){
            return true;
        }
        
        for (int i=0;i<n;i++){
            if (s[j]==t[i]){
                j++;
            }
            if (j==m){
                return true;
            }
        }
        return false;
    }
};