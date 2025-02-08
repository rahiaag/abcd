/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string result = "";
        vector<int> arr1(3);

        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[j];
        }
        int x = arr1[1];
        vector<int> arr2(x);

        for (int k = 0; k < x; k++)
        {
            cin >> arr2[k];
        }
        int y = arr1[2];

        set<int> st(arr2.begin(), arr2.end());

        for (int q = 0; q < y; q++)
        {
            int value = arr1[q];
            if (st.find(value) == st.end())
            {
                result += "1";
            }
            else
            {
                result += "0";
            }
        }

        cout << result << endl;
    }
    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string result = "";
        if (m == 0 || k == 0)
        {
            cout << string(m, '1') << endl;
            continue;
        }
        vector<int> a(m);

        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        vector<int> b(k);

        for (int j = 0; j < k; j++)
        {
            cin >> b[j];
        }

        set<int> st(b.begin(), b.end());

        for (int i = 0; i < m; i++)
        {
            if (st.find(a[i]) == st.end())
            {
                result += "1";
            }
            else
            {
                result += "0";
            }
        }

        cout << result << endl;
    }
    return 0;
}