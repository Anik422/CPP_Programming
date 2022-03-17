
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
const int M = pow(10,9)+9;

int __gcd(int x, int y)
{

    while(y!=0)
    {
        int rem =x%y;
        x=y;
        y=rem;
    }
    return x;

}

int main()
{
    long long  n, k;
    cin >> n >> k;

    long long x = 0;
    for (int i = 0; i < n; ++i)
    {
        x += pow(k,__gcd(i,n));
    }

    cout << (int)(((double)1/n) * x) % M;
    return 0;
}
