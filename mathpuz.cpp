#include <iostream>
using namespace std;

int main()
{
	const int horse = 10;
	const int pig = 3;
	const double rabbit = 0.5;

	int number_animals = 0 ;
	double cost_animals = 0;
	int h = 0;
	int p = 0;
	int r = 0;
	do{
		number_animals = h + p + r;
		cost_animals = horse*h + pig*p +rabbit*r;
		if(number_animals == 100 && cost_animals == 100){
	      cout<< "There are "<< h <<" horses " << p <<" pigs and "<< r <<" rabbits"<<endl; 
		}
        r += 2;
		if(r == 100){
		  p++;
		  r = 0;
		}
		if(p == 100){
		  h++;
		  p = 0;
		}
	}
		while (h != 100 && p != 100 && r!= 100);	
return 0;
}
