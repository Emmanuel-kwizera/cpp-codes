#include <iostream>
#include <string>
using namespace std;   
int counter = 0;
void permutation(string a, int l, int r){  
    if (l == r)  {
        cout<<a<<endl;  
        counter += 1; 
	}
    else{   
        for (int i = l; i <= r; i++)  
        {   
            swap(a[l], a[i]); 
            permutation(a, l+1, r);  
            swap(a[l], a[i]);  
        }  
    } 
} 
//long fact(long n) {
//   if(n == 0 || n == 1 )
//      return 1;
//   return n*fact(n-1);
//}
//
//int countPermutation(string str) {
//   int freq[26] = {0};
//   for(int i = 1; i<str.size(); i++) {
//      freq[str[i] - 'a']++;
//   }
//   int counter = fact(str.length());
//   for(int i = 0; i<26; i++) {
//      if(freq[i] > 1)
//        counter /= fact(freq[i]);
//   }
//   return counter;
//}

int main(){    
    string str;
	cout << "ENTER THE WORLD: ";
	cin >> str;  
    int n = str.size();  
    permutation(str, 0, n-1);  
	cout<< "THE NUMBER OF PERMUTATIONS IS: "<<counter;	
//    cout<< "THE NUMBER OF PERMUTATIONS IS: "<<countPermutation(str); 
    return 0;  
}  
