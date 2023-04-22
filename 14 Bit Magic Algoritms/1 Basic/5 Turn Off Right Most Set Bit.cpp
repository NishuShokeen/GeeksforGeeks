#include <bits/stdc++.h>
using namespace std;
int OFFRightMostSetBit(int a)
{
    return a - (a & -a);
}
signed main()
{
    int a = 12;

    cout << OFFRightMostSetBit(a) << endl;

    return 0;
}