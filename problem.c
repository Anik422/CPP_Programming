

#include <iostream>
#include <cmath>
using namespace std;
const int M = 1e9 + 9;

int main()
{
    long long  n, k;
    cin >> n >> k;

    long long x = 0;
    for (int i = 0; i < n; ++i) {
        x += pow(k, __gcd(i,n));
    }

    cout << (int)(((double)1/n) * x) % M;
    return 0;
}
