#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    vector <int> input;
    int a = 0;
    int b = 0;
    int i = 0;
    int n = 1;
    vector <int>  output;

    cin >> a;

    for (int z = 0; z < a;z++) {

        cin >> b;

        while (output.size() != b) {
            if (b % 2 == 0) {
                if (output.size() <= b / 2) {
                    output.push_back(b - i);
                    i++;
                }
                else {
                    output.push_back(n);
                    n++;
                }
            }
            else {
                if (output.size() <= (b / 2)-1) {
                    output.push_back(b - i);
                    i++;
                }
                else {
                    output.push_back(n);
                    n++;
                }

            }
        }

        for (int i = 0; i < b;i++) {
            cout << output[i] << " ";
        }
        cout << endl;

        output.clear();
        i = 0;
        n = 1;

    }
}
