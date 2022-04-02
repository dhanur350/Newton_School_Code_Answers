#include <bits/stdc++.h> // header file includes every Standard library
#define MAX 1000000
using namespace std;
int main()
{
    int N;
    cin >> N;
    int a[N], b[N];
    int s[MAX];
    for (int i = 0; i < N; i++)
    {
        s[i] = i;
    }
    for (int i = 0; i < N; i++)
    {
        cout << s[i];
    }

    // Your code here
    return 0;
}