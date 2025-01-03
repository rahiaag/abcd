class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;

        for (auto i:s){
            mp[i]++;
            if (mp[i]==2){
                return i;
            }
        }
        return 0;
    }
};