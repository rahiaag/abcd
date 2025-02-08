
/*
#include <bits/stdc++.h>
using namespace std;


// Time Limit Exceeds
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vector<int> arr(4);
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[j];
        }

        while (arr[0] > 0)
        {
            arr[0] -= arr[1];
            count++;

            if (arr[0] <= 0)
                break;

            arr[0] -= arr[2];
            count++;

            if (arr[0] <= 0)
                break;

            arr[0] -= arr[3];
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

// Time Limit Exceeds
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        vector<int> arr(4);
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[j];
        }

        int sum = arr[1] + arr[2] + arr[3];

        while (arr[0] > 0)
        {
            int ans = arr[0] / sum;
            count = ans * 3;
            arr[0] = arr[0] % sum;

            if (arr[0] <= 0)break;

            for (int k = 1; k <= 3; k++)
            {
                if (arr[0] <= 0)
                    break;
                arr[0] -= arr[k];
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}