
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int sum = 0;
    vector<int> answer;

    cin >> a;

    for (int i = 0;i < a;i++) {

        cin >> b;

        if (b > 45) {
            cout << -1 <<endl;
            }
        else {
            for (int k = 9;k > 0;k--) {
                if (sum == b) {
                    break;
                }
                else if (sum > b) {
                    answer[answer.size()-1] -= (sum - b);
                    break;
                }
                else {
                    answer.push_back(k);
                    sum += k;
                }
            } 
        }

        sort(answer.begin(), answer.end());
        for (int m = 0;m < answer.size();m++) {
            cout << answer[m];
        }
        cout << endl;

        answer.clear();
        sum = 0;
     
    }
}
