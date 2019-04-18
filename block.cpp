#include <iostream>
using namespace std;

int main(){
	int rows,columns;
	do{
	cout << "Enter number of rows and columns:" <<endl;
	cin >>rows>>columns;
	for (int row = 0; row < rows; row++){
		for (int col = 0; col < columns; col++){
			cout << "X.";
		}
		cout << endl;
	}
	}
	while(rows != 0 && columns !=0);
	
   return 0;
}
