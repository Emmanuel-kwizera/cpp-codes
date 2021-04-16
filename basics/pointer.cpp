#include <iostream>
#include <bits/stdc++.h>
using namespace std;

	int arrayReverse(){
		int arrayOne[] = {16,89,90,65,45};
		int n = sizeof(arrayOne) / sizeof(arrayOne[0]);
		int j = 0;
		for(int x = n;x > j;x--){
			int temp = arrayOne[x];
			arrayOne[x] = arrayOne[x-1];
			arrayOne[x-1] = temp;
			cout << &arrayOne[x] << "\t";
		}
//			return & arrayOne[];

	}
	
int main(){
//	cout<<arrayReverse();
	arrayReverse();
	return 0;
}
