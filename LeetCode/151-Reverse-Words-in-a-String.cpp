class Solution {
public:
    string reverseWords(string s) {

        reverse(s.begin(),s.end());
        int i=0;
        int j=0;
        int k=0;
        int n=s.size();

        while (i<n){
            while (i<n && s[i]!=' ')
                s[j++]=s[i++];

                if (k<j){
                    reverse(s.begin()+k,s.begin()+j);
                    s[j]=' ';
                    j++;
                    k=j;
                }
                i++;
            }
            s=s.substr(0,k-1);
          
        
        return s;
    }
};