#include <iostream>

using namespace std;

const int ANSWER = 13; // const values cannot be modified

int main(int argc, char *argv[]) {

	int input = 0;

	do {
		cout << "Guess a number between [0 - 100]: ";
		cin >> input;
		if (input == -1)
			break;
		if (input < ANSWER) {
			cout << "Too small" << endl;
			continue;
		}
		if (input > ANSWER) {
			cout << "Too big" << endl;
			continue;
		}
		if (input == ANSWER) {
			cout << "WINNER! ANSWER = " << ANSWER << endl;
			break;
		}
	} while (true);

	cout << "Thanks for playing!" << endl;
}
