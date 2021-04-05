#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;

vector<long long> get_dividers(long long sum) {

	vector<long long> dividers;
	int size = 0;
	long long divider = 0;

	for (int i = 1; i * i <= sum; ++i) {    /// O(sqrt(n))
		if (sum % i == 0) {
			dividers.push_back(i);
		}
	}

	size = dividers.size() ;

	for (int i = 0;i < size;i++) {
		divider = sum / dividers[i];
		dividers.push_back(divider);
	}

	sort(dividers.begin(), dividers.end());

	return dividers;
}


int main()
{
	int b = 0;
	int a=0;
	int c = 0;
	vector<int> input;
	vector<int> input_copy;
	vector<long long> dividers;
	long long sum=0;
	int max = 0;
	int counter = 0;
	int min_counter = 300000;
	bool pointer = false;

	cin >> a;

	for (int l = 0;l < a;l++) {

		cin >> b;

		for (int i = 0; i < b;i++) {
			cin >> c;
			input.push_back(c);
			sum += c;
		}

		dividers = get_dividers(sum);

		for (int i = 0;i < input.size();i++) {
			if (input[i] > max) {
				max = input[i];
			}

		}

		for (int i = 0;i < dividers.size();i++) {
			if (dividers[i] < max) {
				dividers.erase(dividers.begin()+i);
				i--;
			}
		}



		for (int i = 0;i < dividers.size();i++) {

			input_copy = input;

			for (int k = 0;k < input_copy.size()-1;k++) {
				if (input_copy[k] != dividers[i]) {
					if (input_copy[k] + input_copy[k + 1] <= dividers[i]) {
						input_copy[k + 1] += input_copy[k];
						counter++;
					}
					else {
						pointer = true;
						break;
					}
				}
			}

			if ((min_counter > counter) &&( pointer == false)) {
				min_counter = counter;
			}
			pointer = false;
			counter = 0;
		}

		cout << min_counter << endl;


		input.clear();
		input_copy.clear();
		dividers.clear();
		sum = 0;
		max = 0;
		min_counter = 300000;
	}

}
