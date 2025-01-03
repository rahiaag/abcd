class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        string result="";

        for (int i=0;i<n-2;i++){
            if (num[i]==num[i+1] && num[i+1]==num[i+2]){
                string temp={num[i],num[i+1],num[i+2]};
                result=max(temp,result);
            }
        }
       return result; 
    }
};