#include <iostream>
using namespace std;

int main(){

	int a;
	cin >> a;
	int c;
	for(int i=1; i<=9; i++){ //Compute a * (1~9) and print out
		c = a*i; //product
		//print out the result
		cout << a << " * " << i << " = " << c << endl;
	}

}
