class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int count=0;

        for (int i=n-1;i>=0;i--){
            if (s[i]==' ' && count!=0){
                break;
            }
            
            if (s[i]!=' '){
            count++;
            }
        } 
      return count;
    }
};



















 /* int siz=s.size();
        int count=0;

        for (int i=siz-1;i>=0;i--)
        {                             
            if (s[i]==' ' && count)   // checking if count is true  
                                      // if count value =0 then false else true
            break;
            if (s[i]!=' ') // To Represent Space
            count++;    
        }
        return count;*/