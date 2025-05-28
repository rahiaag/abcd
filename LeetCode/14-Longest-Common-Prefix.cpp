class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort (strs.begin(),strs.end());
        int n=strs.size();
       
        string result="";
         if (n==0){
            return result;
         }
        string first=strs[0];
        string last=strs[n-1];
        for (int i=0;i<min(first.size(),last.size());i++){
            if (first[i]==last[i]){
                result+=first[i];
            }
            else{
                break;
            }

        }
        return result;
    }
};