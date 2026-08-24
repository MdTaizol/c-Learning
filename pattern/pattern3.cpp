#include <bits/stdc++.h>
using namespace std;

void prins(int n)
{
    for (int i = 0; i< n; i++)
    {
        for (int j = 1; j<= i; j++)
        {
            cout << j <<" ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        prins(n);
    }
}


// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 