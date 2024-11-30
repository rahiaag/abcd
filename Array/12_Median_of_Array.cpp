#include <bits/stdc++.h>
using namespace std;

int find_median(vector<int> v)
{
    int result;
    sort(v.begin(), v.end());
    int n = v.size();

    if (n % 2 != 0)
    {
        result = v[n / 2];
    }
    else
    {
        result = floor((v[n / 2] + (v[(n / 2) - 1])) / 2);
    }
    return result;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = find_median(v);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends