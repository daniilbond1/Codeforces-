#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> input;
    vector <int> repeated;
    int a = 0;
    int b = 0;
    int c = 0;
    int counter = 0;
    int min = 200000;

    cin >> a;

    for (int z = 0; z < a;z++) {

        cin >> b;

        for (int k = 0;k < b;k++) {
            cin >> c;
            input.push_back(c);
        }

        for (int i = 0;i < b;i++) {

            auto it = find(repeated.begin(), repeated.end(), input[i]);

            if (it == repeated.end())
            {
                repeated.push_back(input[i]);

                if (i != 0) {
                    counter++;
                }

                for (int k = i;k < b;k++) {
                    if (input[k] == input[i] && (k + 1)!=b && input[k + 1] != input[k]) {
                        counter++;
                    }
                }

                if (counter < min) {
                    min = counter;
                }
                counter = 0;

            }
        }

       cout << min << endl;
   
        input.clear();
        repeated.clear();
        counter = 0;
         min = 200000;
    }
}