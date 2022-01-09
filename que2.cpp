#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

#define vi vector<int>
#define lp(i, a, b) for (int i = a; i < b; i++)
#define pii pair<int, int>
#define map map<int, vector<int>>

int target(vi &a, int x)
{
    sort(a.begin(), a.end());
    int temp = INT_MAX;
    for (int i = 0; i < a.size() - 2; i++)
    {
        int ptr1 = i + 1, ptr2 = a.size() - 1;
        while (ptr1 < ptr2)
        {
            int sum = a[i] + a[ptr1] + a[ptr2];
            if (sum == x)
                return sum;
            if (abs(x - sum) < abs(x - temp))
            {
                temp = sum;
            }
            if (sum > x)
                ptr2--;

            else
                ptr1++;
        }
    }
    return temp;
}

int main()
{
    int n;
    cin >> n;
    vi a(n);
    lp(i, 0, n) cin >> a[i];
    int x;
    cin >> x; // target'
    int ans = target(a, x);
    cout << "Closest sum :"<<ans;

    return 0;
}