#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

char * stack;
int top = -1;
int n = 20;

void push(char ele) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=ele;
   }
}

char pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
    	return stack[top--];
//		top--;  
	}
}

int is_palindrome(char* str){
    int length = strlen(str);
    stack = (char*)malloc(length * sizeof(char));  
    int i, mid = length / 2;  
    for (i = 0; i < mid; i++){
        push(tolower(str[i]));
    }
    if (length % 2 != 0) {
        i++;
    }
    while (str[i] != '\0'){
        char ele = pop();
  
        if (ele != str[i])
            return 0;
        i++;
    }  
    return 1;
}

int main(){
	char* str;
	str = "Madam";
//	cout << "Enter string";
//	cin>> char;

    cout<<  "\t\t\t======================================================= "<<endl;
	cout<<"\t\t\t   PROVIDED WORD:   "<< str<<endl;
	if (is_palindrome(str)){
		cout<<"\t\t\t   CHECKING RESULT: The word is PALINDROME"<<endl;
	}else{
		cout<<"\t\t\t   CHECKING RESULT: The word ain't PALINDROME"<<endl;
	}
    cout<<  "\t\t\t======================================================= "<<endl;
	return 0;
}
