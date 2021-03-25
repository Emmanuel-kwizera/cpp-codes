#include <iostream>
#include <cmath>
using namespace std;
struct Node{
    int coefience;
    int exponent;
    Node *next;
}*head;

void create(int number){
	Node *last;
	int element;
	head = new Node;
	cout<<"Enter the coefience on the "<< number << " degree: ";
	cin>>element;
	head->coefience = element;
	head->exponent = number;
	
	last = head;
	for(int i = number-1;i>=0;i--){
		Node *temp = new Node;
		cout<<"Enter the coefience on the "<< i << " degree: ";
		cin>>element;
		temp->coefience = element;
		temp->exponent = i;
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
}

void display(){
    Node *temp = head;
    while (temp){
    	if(temp->exponent == 0){
        	cout << temp->coefience<< "  ";
        	temp = temp->next;    		
		}else if(temp->exponent == 1){
			cout << temp->coefience << "x" << " + ";
        	temp = temp->next;
		}else{			
        	cout << temp->coefience << "x^" << temp->exponent << " + ";
        	temp = temp->next;			
		}
    }
    cout<<endl;
}

int evaluate(struct Node* node,int xValue){
	int evaluationValue = 0;
	Node * temp = node;
	while(temp){
		evaluationValue += temp->coefience * pow(xValue, temp->exponent);
		temp = temp->next;
	}
	return evaluationValue;
}

int main(){
	int n;
	cout<<"Enter the maxmum degree: ";
	cin>>n;
    create(n);
    display();
    int x;
    cout <<"Enter the value of x: ";
    cin>>x;
    cout<<"F("<<x<<") = "<<evaluate(head,x);
    return 0;
}
