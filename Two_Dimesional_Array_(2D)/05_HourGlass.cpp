/*

Problem Statement
You are given a 6x6 2D array. An hourglass in this array is defined as a subset of values with indices that form this pattern:

a b c
  d
e f g

You need to find the maximum hourglass sum in the 2D array.

Input Format
A 6x6 2D array of integers.

Output Format
Print the maximum hourglass sum found in the array.

Sample Input

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0

Sample Output

19   (2+4+4+2+1+2+4)

*/
#include<bits/stdc++.h>
using namespace std;

int summ(vector<vector<int>>arr){

  int n=arr.size();
  int m=arr[0].size();
  int maxi=INT_MIN;

  for (int i=0;i<=n-3;i++){
    
    for (int j=0;j<=m-3;j++){
     int sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
     maxi=max(sum,maxi);
    }
    
  }
  return maxi;
}
int main(){
  vector<vector<int>>arr={{1, 1, 1, 0 ,0 ,0},
{0 ,1, 0, 0 ,0 ,0},
{1 ,1, 1, 0 ,0 ,0},
{0 ,0, 2, 4 ,4 ,0},
{0 ,0, 0, 2 ,0 ,0},
{0 ,0, 1, 2 ,4 ,0}};

cout<<summ(arr);
return 0;
}
