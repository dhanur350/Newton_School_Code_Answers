#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{

    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90 && s[0] == 'A')
        {
            count++;
        }
    }
    if (count > 1)
    {
        cout << "Space";
    }
    else if (count == 1)
    {
        cout << "Gravity";
    }
    else
    {
        cout << "Space";
    }
    return 0;
}