#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    vector <int> input;
 map < int,int >  repeated;
    int a = 0;
    int b = 0;
    int c = 0;
    int sum = 0;
    int max = 0;
    int index = 0;

    cin >> a;

    for (int z = 0; z < a;z++) {

        cin >> b;

        for (int k = 0;k < b;k++) {
            cin >> c;
            input.push_back(c);
        }

        for (int i = 0;i < b;i++) {

            if (repeated[index]==index) {
                index = i;
                sum = input[i];

                while (index + input[index] < b) {
                    index += input[index];
                    repeated[index] = index;;
                    sum += input[index];
                }

                if (max < sum) {
                    max = sum;
                }
            }
        }

        cout << max << endl;

        sum = 0;
        index = 0;
        max = 0;
        input.clear();
        repeated.clear();

    }
}
