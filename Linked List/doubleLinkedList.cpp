#include <iostream>
using namespace std;

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
} *head = NULL;

void createDLL(int A[], int size){
	head = new Node;
	head->data = A[0];
	head->prev = head->next = NULL;
	Node *temp,*last;
	last = head;
	for(int i=1;i<size;i++){
		temp = new Node;
		temp->data = A[i];
		temp->next = last->next;
		temp->prev = last;
		last->next = temp;
		last = temp;		
	}
}

void insert_at_head(int value){
	Node *temp = new Node;
	temp->data  = value;
	temp->next = head;
	temp->prev = NULL;
	head->prev = temp;
	head = temp;
}

void insert_at_end(int value){
	Node *temp = new Node;
	temp->data = value;
	Node *p = head;
	while(p->next != NULL){
		p = p->next;
	}
	p->next = temp;
	temp->prev = p;
	temp->next = NULL;
}

void insert_after_given_node(int value,int prevous){
	Node *temp = new Node;
	temp->data = value;
	Node *p = head;
	while(p->data != prevous){
		p = p->next;
	}
	temp->next = p->next;
	temp->prev = p;
	p->next->prev = temp;
	p->next = temp;
}

void insert_before_given_node(int value,int giveNode){
	Node *temp = new Node;
	temp->data = value;
	Node *p = head;
	while(p->data != giveNode){
		p = p->next;
	}
	temp->next =  p;
	temp->prev = p->prev;
	p->prev->next = temp;
	p->prev = temp;
//	if(giveNode == head->data){
//		insert_at_head(value);
//	}
}

void delete_from_the_beginning(){
    Node*temp = head;
    head = head->next;
    head->prev = NULL;
    delete(temp);
}

void delete_from_the_end(){
    Node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete(temp);
}

void delete_after_given_node(int node){
	Node* temp = head;
	while(temp->data != node){
		temp = temp->next;
	}
	if(temp->next){
		temp = temp->next;
		temp->prev->next = temp->next;
		temp->next->prev = temp->next;
		delete(temp);
	}
}

void delete_given_node(int node){
	Node* temp = head;
	while(temp->data != node){
		temp = temp->next;
	}
	if(temp->next)
		temp->prev->next = temp->next;
		temp->next->prev = temp->next;
		delete(temp);
}

void delete_before_given_node(int node){
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<"\t";
		p=p->next;
	}
}

int main(){	
    int A[] = {20, 30, 40, 50, 100};
    createDLL(A, 5); 	
    int option;
    cout << "\t\t\t+------------------------------------------+ " << endl;
    cout << "\t\t\t|            AVAILABLE OPTIONS             | " << endl;
    cout << "\t\t\t+------------------------------------------+ " << endl;
    cout << "\t\t\t|  1.  Insert on Head                      |" << endl;
    cout << "\t\t\t|  2.  Insert on Tail                      |" << endl;
    cout << "\t\t\t|  3.  Insert after Node                   |" << endl;
    cout << "\t\t\t|  4.  Insert before Node                  |" << endl;
    cout << "\t\t\t|  5.  Delete the head                     |" << endl;
    cout << "\t\t\t|  6.  Delete the tail                     |" << endl;
    cout << "\t\t\t|  7.  Delete after given node             |" << endl;
    cout << "\t\t\t|  8.  Delete given node                   |" << endl;
    cout << "\t\t\t|  9.  Display                             |" << endl;
    cout << "\t\t\t+------------------------------------------+ " << endl;
    cout << "\t\t\tEnter Your Option: ";
    cin >> option;
    int element;
    
    int exsitingElement;
    switch(option){
    	case 1:
        	cout<<"Enter the element: ";
        	cin>>element;
        	insert_at_head(element);
        	cout<<"\t\tALL DATA AFTER INSERTING ON THE HEAD"<<endl;
        	display(head);
        	break;
        case 2:
        	cout<<"Enter the element: ";
        	cin>>element;
        	insert_at_end(element);
        	cout<<"\t\tALL DATA AFTER INSERTING ON THE TAIL"<<endl;
        	display(head);
        	break;
        case 3:
        	cout<<"Enter the Exsiting Node: ";
        	cin>>exsitingElement;
        	cout<<"Enter the element: ";
        	cin>>element;
        	insert_after_given_node(element,exsitingElement);
        	cout<<"\t\tALL DATA AFTER INSERTING AFTER "<<exsitingElement<<endl;
        	display(head);
        	break;
        case 4:
        	cout<<"Enter the Exsiting Node: ";
        	cin>>exsitingElement;
        	cout<<"Enter the element: ";
        	cin>>element;
        	insert_before_given_node(element,exsitingElement);
//        	if (insert_before_given_node(element,exsitingElement)){
        		cout<<"\t\tALL DATA AFTER INSERTING BEFORE "<<exsitingElement<<endl;
        		display(head);
//			}else{
//				cout << "Check if the node you provided exsits"
//			}
        	break;
        case 5:
        	delete_from_the_beginning();
        	cout<<"\t\tALL DATA AFTER DELETING THE HEAD"<<endl;
        	display(head);
        	break;
        case 6:
        	delete_from_the_end();
        	cout<<"\t\tALL DATA AFTER DELETING THE TAIL"<<endl;
        	display(head);
        	break;
        case 7:
        	cout<<"Enter the Exsiting Node: ";
        	cin>>exsitingElement;
			delete_after_given_node(exsitingElement); 
        	cout<<"\t\tALL DATA AFTER DELETING THE NODE NEXT TO "<<exsitingElement<<endl;
        	display(head); 
        	break;
		case 8:   	
        	cout<<"Enter the Node to delete: ";
        	cin>>exsitingElement;
        	delete_given_node(exsitingElement);
        	cout<<"\t\tALL DATA AFTER DELETING "<<exsitingElement<<endl;
        	display(head); 
        	break;
        case 9:
    		cout<<"\t\tALL DATA"<<endl;
    		display(head);
        	break;
		default:
			break;           		
	}
        
	return 0;
}
