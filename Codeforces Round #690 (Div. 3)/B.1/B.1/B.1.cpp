#include <string>
#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	string input;
	int counter = 0;
	bool marker = false;
	bool found = false;

	cin >> a;

	for (int i = 0;i < a;i++) {
		cin >> b;
		cin >> input;

		if (input != "2020") {

			if (found==false && input[0] == '2' && input[1] == '0' && input[2] == '2' && input[3] == '0') {
				cout << "YES"<<endl;
				found = true;
			}

			if (found == false && input[input.size()-4] == '2' && input[input.size() - 3] == '0' && input[input.size() - 2] == '2' && input[input.size() - 1] == '0') {
				cout << "YES"<<endl;
				found = true;
			}

			if (found == false && input[0] == '2' && input[input.size() - 3] == '0' && input[input.size() - 2] == '2' && input[input.size() - 1] == '0') {
				cout << "YES"<<endl;
				found = true;
			}

			if (found == false && input[0] == '2' && input[1] == '0' && input[input.size() - 2] == '2' && input[input.size() - 1] == '0') {
				cout << "YES"<<endl;
				found = true;
			}

			if (found == false && input[0] == '2' && input[1] == '0' && input[2] == '2' && input[input.size() - 1] == '0') {
				cout << "YES"<<endl;
				found = true;
			}

			if (found == false) {
				cout << "NO"<<endl;
			}

		}
		else {
			cout << "YES"<<endl;
		}

		b = 0;
		input.clear();
		found = false;
	}
}

