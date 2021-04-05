#include <iostream>
using namespace std;
int main()
{
    int s = 0, n = 32;
    while (n > s) {
        s = s + 1;
        n = n-1;
    }
    cout << n;
    return 0;
}