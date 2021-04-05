#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    vector <int> input;
    int a = 0;
    int w = 0;
    bool pointer = 0;
        int counter = 0;

    cin >> a;


    for (int z = 0; z < a;z++) {



        for (int k = 0;k < 3;k++) {
            cin >> w;
            input.push_back(w);
        }

        while (input[1] % 2 != 1 || input[0] % 2 != 1|| input[2]==1) {

            if (input[0] % 2 == 0) {
                input[0] = input[0] / 2;
                counter++;
            }

            if (input[1] % 2 == 0) {
                input[1] = input[1] / 2;
                counter++;
            }

            if (pow(2,counter) >= input[2]) {
                cout << "YES" << endl;
                pointer = 1;
                break;
            }

        }

        if (pointer == 0) {
            cout << "NO" << endl;
        }
        pointer = 0;
        counter = 0;
        input.clear();

    }
}
