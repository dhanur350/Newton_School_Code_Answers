#include <bits/stdc++.h>
using namespace std;
int main()
{
    int queries;
    cin >> queries;
    int arr[100], arr1[100];
    for (int i = 0; i < queries; i++)
    {
        cin >> arr[i] >> arr1[i]; // 2 3
    }
    /*for (int i = 0; i < queries; i++)
    {
        cout << arr[i] << arr1[i];
    }*/
    for (int i = 0; i < queries; i++)
    {
        if (arr[i] ^ arr1[i] == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}