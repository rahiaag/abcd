//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  /*
  int GCD(int a,int b){
      int maxi=1;
      for (int i=1;i<=min(a,b);i++){
          if (a%i==0 && b%i==0){
              maxi=max(i,maxi);
          }
      }
      return maxi;
  }
  
  int HCF(int a,int b){
      int mul=a*b;
      int LCM=GCD(a,b);
      
      int hcf=mul/LCM;
      
      return hcf;
  }
  */
    vector<int> lcmAndGcd(int a, int b) {
        vector<int>ans;
        
        int hcf=__gcd(a,b);
        int lcm=(a*b)/hcf;
        
        //int lcm=GCD(a,b);
        //int hcf=HCF(a,b);
        ans.push_back(lcm);
        ans.push_back(hcf);
        
        return ans;
    }
};
// we know multiplication of two number is equal to LCM * HCF


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends