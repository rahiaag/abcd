//{ Driver Code Starts

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    
    int NumberofDivisor(int A){
        int count=0;
        
        for (int i=1;i<=sqrt(A);i++){
            if (A%i==0){
                count++;
                if (i!=A/i){
                    count++;
                }
            }
        }
        return count;
    }
    
    int count(int A,int B,int N){ 
        
        int count2=0;
        for (int i=A;i<=B;i++){
            if (NumberofDivisor(i)==N){
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
        int A,B,N;
        cin>>A>>B>>N;
        Solution ob;
        cout << ob.count(A,B,N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends