#include <iostream>
using namespace std;
int main()
{
　int n, i, b[32];
　cin >> n;
　for (i = 0; n > 0; i++) {
　　b[i] = n % 2;
　　n = n / 2;
　}
　int j = 10;
　while (i != j) 
　{
　  cout << 0;
　  j --;
　}
　while (i > 0) cout << b[--i];
}