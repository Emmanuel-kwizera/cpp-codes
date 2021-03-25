#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void display(vector<int> a){
	for (int i = 0; i<a.size();i++) 
        cout << i << " : "<< a[i] <<endl;
}
int main(){
	vector<int> a(4);
	cout<<"The size: "<<a.size()<<endl;
	cout<<"The capacity: "<<a.capacity()<<endl;
	a.push_back(10); 
    a.push_back(20); 
//    can be used to update but not to add an element meaning we hava always to add push while we add
    a[7] = 45;
//    at is also used to update element of a vector
    a.at(2) = 3;
//    a.push_back(30); 
//    a.push_back(40); 
//    a.push_back(50); 
	display(a);
	cout<<"The size: "<<a.size()<<endl;
	cout<<"The capacity: "<<a.capacity();
	return 0;
}

