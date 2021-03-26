#include <iostream>
using namespace std;

int main(){
	int score[] = {52,78,75,68,88,63,75,90,78};
	int item = 10, k = 3, len = 9, j=len-1;
	while(j>k){
	int counter = 0;
		score[j+1] = score[j];
		j = j-1;
		counter = counter + 1;	
	}
	score[k] = item;
	
	for(int i = 0;i<=len;i++){
		cout << score[i] << "\n"; 
	}
	return 0;
}
