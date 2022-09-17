#include "bits/stdc++.h"
using namespace std;

int maxSubArraySum(int arr[])
{
    int poi = 0, ans = 0, max0 = arr[0];
    for (int i = 0; i < sizeof(arr); i++)
    {
        if (poi <= 0)
        {
            poi = 0;
            poi = max(poi, arr[i]);
        }
        else
        {
            ans = poi;
            poi = poi + arr[i];
            ans = max(ans, poi);
        }
        max0 = max(max0, arr[i]);
    }
    if (ans <= 0)
        return max0;
    else
        return ans;
}
int main()
{
    int arr[100] = {-2, -3, 2, -4};
    int x = maxSubArraySum(arr);
    cout << "the ans is:" << x;
}