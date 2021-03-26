#include <iostream>
using namespace std;

int main(){
	int score[] = {52,78,75,68,88,63,75,90,78};
	int item = 10, k = 3, len = 9, j=len-1;
	for(int i= 0; i<=9; i++){
		if(i == k){
			score[i] = item;
		}
	}for(int j = 0;j<=len;j++){
		cout << score[j] << "\t"; 
	}
	return 0;
} 
