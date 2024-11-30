#include<bits/stdc++.h>
using namespace std;


/*-----------------------------------------------------

Time Complexity : O(nlogn) // Because of the Sorting Function
Space Complecity : O(n)

-------------------------------------------------------*/

vector<vector<int>> MergeInterval(vector<vector<int>>intervals){

    vector<vector<int>> ans;
    sort (intervals.begin(),intervals.end());
    
    for (int i=0;i<intervals.size();i++){

        if (ans.empty()){
            ans.push_back(intervals[i]);
        }
        else{
            vector<int>& res=ans.back();
            int y=res[1];

            if (intervals[i][0]<=y){
                res[i]=max(y,intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
            }

        }
    }
    return ans;
}

void printIntervals(const vector<vector<int>>& intervals) {
    for (auto interval : intervals) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> intervals = {{1, 3}, {2, 5}, {8, 10}, {15, 18}};
    vector<vector<int>> result = MergeInterval(intervals);

    printIntervals(result);
    return 0;
}
