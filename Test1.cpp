#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{

    // Your code here
    int l;
    cin >> l;
    string s;
    cin >> s;
    int count = 0;
    int count1 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'N')
        {
            count++;
        }
        else if (s[i] == 'T')
        {
            count1++;
        }
    }
    if (count > count1)
    {
        cout << "Nutan";
    }
    else
    {
        cout << "Tusla";
    }
    return 0;
}