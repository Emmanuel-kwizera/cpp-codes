#include <iostream>
#include <cstdlib>
using namespace std;

struct Queue{
	int size;
	int front;
	int rear;
	float *Q;
};

void create(struct Queue *q,int size){
	q->size = size;
	q->front = q->rear = -1;
	q->Q = new float(q->size);
}

void enqueue(struct Queue *q,float x){
	if(q->rear == q->size==1)cout<<"QUEUE IS FULL"<<endl;
	if(q->front == -1 && q->rear == -1){
		q->front = q->rear = 0;
	}else{
		q->rear = q->rear + 1;
	}
	q->Q[q->rear] = x;
}

void dequeue(struct Queue *q){
	int x = -1;
	if(q->front>q->rear || q->front == -1){
		cout<<"QUEUE IS EMPTY"<<endl;
		return x;
	}
	x = q->Q[q->front];
	q->Q[q->front] = 0;
	q->front = q->front+1; 
}

void display(struct Queue *q){
	for(int i=q->front;i<=q->rear;i++){
		cout<<q->Q[i]<<" ";
	}
}

int main(){
		struct Queue q;
	create(&q,10);
	enqueue(&q,45.09);
	enqueue(&q,9.00);
	enqueue(&q,10.02);
	enqueue(&q,2.05);
	enqueue(&q,50.00);
	
	display(&q);
	return 0;
}
