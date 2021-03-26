#include <iostream>
#include <bits/stdc++.h>
using namespace std;

	int arrayReverse(){
//		int n = 5;
		int arrayOne[] = {16,89,90,65,45};
		int n = sizeof(arrayOne) / sizeof(arrayOne[0]);
//		for(int i = 0;i< n;i++){
//			cout<<arrayOne[i]<<"\t";
//		}
//		cout <<endl;
		int j = 0;
		for(int x = n;x > j;x--){
			int temp = arrayOne[x];
			arrayOne[x] = arrayOne[x-1];
			arrayOne[x-1] = temp;
		}
			return arrayOne[];

	}

int main(){
	cout<<arrayReverse();
	return 0;
}
