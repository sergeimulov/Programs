#include <iostream>
#include <cmath>

 
using namespace std;
 

 
 
int main() { 
	int a,b,h,r,c;
	float S;

	cout<<"Какой фигуры вам надо посчитать площадь."<<endl<<"1 Трапеция."<<endl<<"2 Круг."<<endl;
	cin>>c;
	if (c==1){
		cout<<"Введите длина 1-ого основания,длина 2-ого основания,длина высоты трапеции(в строчку с пробелами)";
		cin>>a,b,h;
		S=((h*(a+b))/2);
		cout<<S;
	}else if(c==2){
		cout<<"Введите радиус";
		cin>>r;
		S=(4*M_PI*pow(r,2));
		cout<<S;
	}
}