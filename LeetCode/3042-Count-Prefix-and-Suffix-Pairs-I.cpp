    class Solution {
    public:
        bool isPrefixAndSuffix(string str1, string str2){
            int n1=str1.size();
            int n2=str2.size();
            
            if (n1 > n2) return false;

            string a=str2.substr(0,n1);
            string b=str2.substr(n2-n1,n1);

            return a == str1 && b == str1;
        }
        int countPrefixSuffixPairs(vector<string>& words) {
            int count=0;
            int n=words.size();
            for (int i=0;i<n-1;i++){
                for (int j=i+1;j<n;j++){
                    if (isPrefixAndSuffix(words[i],words[j])==true){
                        count++;
                    }
                }
            }
            return count;
        }
    };