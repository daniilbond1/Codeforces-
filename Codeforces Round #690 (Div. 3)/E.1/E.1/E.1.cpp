#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	vector <int> input;


	cin >> a;

	for (int l = 0;l < a;l++) {

		int answer = 0;
		int counter = 0;

		cin >> c;

		for (int i = 0; i < c;i++) {
			cin >> b;
			input.push_back(b);
		}

		sort(input.begin(), input.end());


		for (int i = 0;i < input.size();i++) {
			for (int k = 0;k < input.size();k++) {

				if (input[i] - input[k] <= 2) {
					counter++;
				}

			}
			answer += counter;
			counter = 0;	
		}

		cout << answer << endl;
		counter = 0;
		answer = 0;
	}

}


