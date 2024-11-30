#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[20];
    int i = 0;

    cout << "Enter the name :";
    cin >> arr;

    // for (int i=0;name[i]!='\0';i==)
    
    while (arr[i] != '\0')
        i++;
    cout << "The Length of the Name is " << i << endl;

    return 0;
}

// A null character '\0' is present at the end of the string 