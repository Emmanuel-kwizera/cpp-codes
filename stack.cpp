#include <iostream>
#include <cstdlib>
using namespace std;

struct Stack{
	int size;
	int top;
	float *S;
};

void create(struct Stack *st,int size){
	st->size = size;
	st->top = -1;
	st->S = new float(size);
}

void push(struct Stack *st,float x){
	if(st->top==st->size){
		cout<<"THE STACK IS FULL"<<endl;
	}
	st->top = st->top+1;
	st->S[st->top] = x;
}

int pop(struct Stack *st){
	int x=-1;
	if(st->top=-1) cout<<"STACK IS EMPTY"<<endl;
	x = st->S[st->top];
	st->S[st->top] = 0;
	st->top = st->top-1;
	return x;
}

void display(struct Stack *st){
	for(int i=st->top;i>=0;i--){
		cout<<st->S[i]<<" ";
	}
}

int main(){
	struct Stack st;
	create(&st,10);
	push(&st,45.09);
	push(&st,9.00);
	push(&st,10.02);
	push(&st,2.05);
	push(&st,50.00);
	
	display(&st);
	
//	cout<<"Deleted value: "<<pop(&st);
	
	return 0;
}
