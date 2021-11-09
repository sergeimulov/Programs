
#include <iostream>
#include <cmath>

 
using namespace std;
 

 
 
long int main() { 
	float a,x,y;

	a=1,6;
	cin>>x;
	if(x=0){
		y=3;
		cout<<y;
	}else if(x>a){
		y=(exp(a*x)-2.5);
		cout<<y;
	} else {
        y=((a/x)+sin(x));
		cout<<y;
    }

	
}