class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>result;
        for (auto i:words){
            for (auto j:words){
                if (i==j)continue;
                if (j.find(i)!=string::npos){
                    result.push_back(i);
                    break;
                }
            }

        }
        return result;
    }
};