class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    
    vector<int> func(int n){
        int temp=n;
        int result=0;
        vector<int>vec;
        while (temp){
            int value=temp%10;
            vec.push_back(value);
            temp/=10;
        }
        return vec;
    }
    int evenlyDivides(int n) {
        
        vector<int>result=func(n);
        int count=0;
        
        for (int i=0;i<result.size();i++){
            if (result[i]==0){
                continue;
            }
            else{
                
                if (n%result[i]==0){
                    count++;
                }
            }
        }
        return count;
        
    }
};