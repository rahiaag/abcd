//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isFactorial(int N){
        int ans=1;
        for (int i=1;i<=N;i++){
            ans*=i;
            if (ans>N)break;
            if (ans==N){
                return 1;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isFactorial(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends