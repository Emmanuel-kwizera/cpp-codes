#include <iostream>
using namespace std; 

void personInfo(string fName, int age){
	cout<< fName <<endl;
	cout<< age <<endl;
}

void display(int a, float b, double c){
	cout<< a <<endl;
	cout<< b <<endl;
	cout<< c <<endl;		
}

int main(){
	personInfo("john", 19);
	display(12.4,100,12.98765);
	return 0;
}
