#include "bits/stdc++.h"
using namespace std;

int maxSubArrayProduct(int arr[])
{
    int maxi, mini, ans;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (i == 0)
        {
            maxi = arr[i], mini = arr[i], ans = arr[i];
        }
        else
        {
            if (arr[i] <= 0)
            {
                swap(maxi, mini);
            }
            maxi = max(maxi, maxi * arr[i]);
            mini = min(mini, mini * arr[i]);
            ans = max(maxi, ans);
        }
    }
    return ans;
}
int main()
{
    int arr[4] = {2, 3, -2, 4};
    int x = maxSubArrayProduct(arr);
    cout << "the ans is:" << x;
}