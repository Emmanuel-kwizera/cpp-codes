#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
} *first = NULL;

void create(int A[], int n){
    struct Node* last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    int i;
    struct Node* t;
    for (i = 1; i < n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p){
	cout<< "Elements in a list"<<endl;
	while (p != NULL) {
        cout << p->data <<"\t";
        p = p->next;
    }
}

int main(){
    int A[5] = { 1, 20, 3, 5, 6 };
//	int A[5];
//	int element;
//    for(int i = 0;i>5;i++){
//    	cout<<"Enter element at index "<<i<<"\t";
//    	cin>>element;
//    	A[i] = element;
//	}
    create(A, 5);
//    struct Node *printer = first;
//    display(printer);
	display(first);
   
    return 0;
}
