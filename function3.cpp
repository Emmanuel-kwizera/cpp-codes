#include <iostream>
using namespace std;
double rect_area(double l,double w){
	return l * w;
}
int main(){
	double result;
	double a;
	double b;
	cout<<"Enter the length of the rectangle: ";
	cin>> a;
	cout << "Enter the width of the rectangle: ";
	cin>> b;
	
	result = rect_area(a,b);
	cout << "The area of given rectangle is " << result <<endl;
	return 0;
}
