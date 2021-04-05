#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> input;
    vector <int> copy;
    int a = 0;
    int b = 0;
    int c = 0;
    int conteiner=-1;
    int index = 0;


    cin >> a;

    for (int z = 0; z < a;z++) {

        cin >> b;

        for (int k = 0;k < b;k++) {
            cin >> c;
            input.push_back(c);
        }

        copy = input;

        sort(copy.begin(), copy.end());


        if (b > 1) {

            for (int i = 1;i < b;i++) {
                if (copy[0] < copy[1]) {
                    conteiner = copy[0];
                    break;
                }
                else if (copy[i - 1]<copy[i] && b!=(i+1) && copy[i]<copy[i + 1]) {
                    conteiner = copy[i];
                    break;
                }
                else if (b == (i + 1)) {
                    if (copy[i-1] != copy[i]) {
                        conteiner = copy[i];
                    }
                }
            }
        }
        else {
            conteiner = copy[0];
        }

       // cout << conteiner;

       if (conteiner != -1) {
           auto it = find(input.begin(), input.end(), conteiner);
            if (it != input.end())
            {
                index = it - input.begin()+1;
                cout << index << endl;
            }
        }
        else {
            cout << "-1" << endl;
        }
       
       
        
        input.clear();
        copy.clear();
        conteiner = -1;
        index = 0;
    }

}
