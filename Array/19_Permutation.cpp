#include <bits/stdc++.h> 
using namespace std; 
 
void permute(int arr[], int l, int r) 
{ 
	if (l == r) 
    for (int i=0;i<r;i++){
		cout<<arr[i];
    }
	else
	{ 
		for (int i = l; i <= r; i++) 
		{  
			swap(arr[l], arr[i]); 
			permute(arr, l+1, r); 
			swap(arr[l], arr[i]); 
		} 
	} 
}  
int main() 
{ 
	int arr[] ={ 1,2,3,4}; 
	int n = sizeof arr/sizeof arr[0]; 
	permute(arr, 0, n-1); 
	return 0; 
} 
