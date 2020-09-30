#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int sum1 = 0;
    int sum2 = 0;
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
      int s;
      cin >> s;
      a.push_back(s);
    }
    for (int i = 0; i < n; i++)
      sum1 += a[i];
    for (int i = 0; i < n; i++)
    {
      if (a[i] > k)
        a[i] = k;
    }
    for (int i = 0; i < n; i++)
      sum2 += a[i];
    cout << abs(sum1 - sum2) << endl;
  }
  return 0;
}
