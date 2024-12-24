//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:

    int count(int N){
        int count2=0;
        
        for(int i=1;i<=N;i++){
            int count=0;
            for (int j=1;j<=sqrt(i);j++)
        {
            if (i%j==0){
                count++;
            
            if (j!=i/j)
                count++;
            }
            
        }
        if (count%2!=0){
            count2++;
        }
    }
    return count2;
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
        cout << ob.count(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends