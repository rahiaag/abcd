class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;

        for (char i:magazine){
            mp[i]++;
        }

        for (int i=0;i<ransomNote.size();i++){
            if (mp[ransomNote[i]]==0){
                return false;
            }
            mp[ransomNote[i]]--;
        }
        return true;

       /* sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());

        for (int i=0;i<ransomNote.size();i++){
            if (ransomNote[i]!=magazine[i]){
                return false;
            }
        }
        return true;*/
    }
};