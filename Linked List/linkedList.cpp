#include <iostream>
#include <cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node * next;
}*first=NULL;

void create(int element, struct Node * lastNode){
	struct Node * current;
	current = (struct Node *)malloc(sizeof(struct Node));
	current->data = element;
	lastNode->next = current;
}


int main(){
	int element;
	struct Node * last;
	first=(struct Node *)malloc(sizeof(struct Node)); 
	first->data = 10;
	
	cout<< "First Element"<<endl;
	cout<<first->data;
	cout<<endl;
	cout<< "Enter the next element:\t";
	cin>>element;
	
	cout<<endl;
	
	create(element,first);
	cout<< "Next Element"<<endl;	
	cout<<first->next->data;
	return 0;
}
