#include <iostream>
using namespace std;

int main (){
	int row = 0;
	int col = 0;
	cout << "What's the row and col?"<< endl;
	cin >> row >> col ;
	if (row % 2 == 0)
	exit (-1);

	for (int n = 0; n < row; n++){
		for (int j = 0; j< col; j++){
			if (n + j == row-1 || n+row-1 ==j)
			cout << "*";
			else{
			cout << " ";
		}
	}
			cout << endl;
	}	

return 0;
}