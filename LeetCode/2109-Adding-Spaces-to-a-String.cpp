class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {

        int n = s.size();
        string result="";
        int i = 0;
        int j = 0;

        while (i < n) {
            
            if ( j < spaces.size()&& spaces[j] == i) {
                result+= ' ';
                j++;
            }
            result+= s[i];
            i++;
        }
        return result;
    }
};