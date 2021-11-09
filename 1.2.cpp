
#include <iostream>
#include <cmath>

 
using namespace std;
 

 
 
int main() { 
	int d;
	float S;

	if (!(cin >> d) || (cin.peek() != '\n')){
		cout<<"Error";
	}else{
		S=pow(d,2)/(4* M_PI);   
		cout<<S;
	}

 
}