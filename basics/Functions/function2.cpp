#include <iostream>
using namespace std;
double maximum(double x,double y,double z){
	double maxValue = x;
	if(y>maxValue)
	maxValue = y;
	if (z > maxValue)
	maxValue = z;
	return maxValue;
}
int main(){
	double max = maximum(12.5,13.8,13.7);
	cout << "THE MAXIMUM VALUE: " <<max <<endl;
	return 0;
}
