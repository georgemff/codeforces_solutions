#include <cstdio>
#include <iostream>
 
using namespace std;
 
int main ()
{
    long long n;
    long long m;
    long long a;
 
    cin >> n >> m >> a;
     
    cout << ((n + a - 1) / a) * ((m + a - 1) / a) << endl; 
 
    return 0;
}
 
