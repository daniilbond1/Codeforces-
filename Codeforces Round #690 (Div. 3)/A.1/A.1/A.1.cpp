
#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    vector<int> input;
    cin >> a;

    for (int i = 0;i < a;i++) {
        cin >> b;

        for (int k = 0;k < b;k++) {
            cin >> c;
            input.push_back(c);
        }

        if (b % 2 == 0) {
            for (int m = 0;m < b / 2;m++) {
                cout << input[m]<<" " << input[input.size() - 1 - m] <<" ";
            }

        }
        else {
            for (int m = 0;m < b / 2+1;m++) {
                if (m != input.size() - 1 - m) {
                    cout << input[m]<<" " << input[input.size() - 1 - m]<<" ";
                }
                else {
                    cout << input[m]<<" ";
                }

            }

        }

        input.clear();

    }

}

