#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> input;
    int a = 0;
    int b = 0;
    int c = 0;
    int counter_1 = 0;
    int counter_2 = 0;

    cin >> a;

    for (int z = 0; z < a;z++) {

        cin >> b;

        for (int k = 0;k < b;k++) {
            cin >> c;

            if (c == 1) {
                counter_1++;
            }
            if (c == 2) {
                counter_2++;
            }
            
        }

        if (counter_1 != 0) {
            if (counter_1 % 2 == 1) {
                cout << "NO" << endl;
            }

            if (counter_1 % 2 == 0) {
                cout << "YES" << endl;
            }
        }
        if (counter_1 == 0) {

            if (counter_2 % 2 == 1) {
                cout << "NO" << endl;
            }

            if (counter_2 % 2 == 0) {
                cout << "YES" << endl;
            }
        }
      

        counter_1 = 0;
        counter_2 = 0;

    }
}
