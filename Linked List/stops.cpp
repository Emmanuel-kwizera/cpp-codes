#include <iostream>
#include <cstdlib>
using namespace std;
struct Stops{
	char *name;
	int price;
	char *agent;
    struct Stops *next;
}*first = NULL;
Stops createStop(char *name, int price,char *agent){
	Stops temp;
	temp.name = name;
	temp.price = price;
	temp.agent = agent;
	
	return temp;		
}
Stops * create(char *name,int price,char *agent,Stops *lastNode){
	struct Stops * current;
	current = (struct Stops *)malloc(sizeof(struct Stops));
	current->name = name;
	current->price = price;
	current->agent = agent;
	current->next = NULL;
	
	lastNode->next = current;
	
	return current;		
}
void write(Stops stop[],int n){
	struct Stops *temp = first;
	for(int i = 0;i < n;i++){
		temp = create(stop[i].name,stop[i].price,stop[i].agent,temp);
	}
}
void display(Stops *stop){
	cout<<"\t\t\t======================================================= "<<endl;
    cout<<"\t\t\t||                AVAILABLE STOPS             		  || "<<endl;
    cout<<"\t\t\t======================================================= "<<endl;
	while(stop != NULL){
		cout<<"\t\t\t||NAME: "<<stop->name<<"\t PRICE: "<<stop->price<<"\t AGENT: "<<stop->agent<<endl;
    cout<<"\t\t\t======================================================= "<<endl;
		stop = stop->next;
	}
}
int main(){
	int option;
	cout<<"\t\t\t============================================= "<<endl;
    cout<<"\t\t\t||            AVAILABLE OPTIONS            || "<<endl;
    cout<<"\t\t\t============================================= "<<endl;
    cout<<"\t\t\t|| 1.  Create a stop                       ||"<<endl;
    cout<<"\t\t\t|| 2.  View stops                          ||"<<endl;
    cout<<"\t\t\t============================================= "<<endl;
    cout<<"\t\t\tEnter Your Option: ";
    cin>>option;
    first = (struct Stops*)malloc(sizeof(struct Stops*));
    first->name = "Nyabugogo";
    first->price = 250;
    first->agent = "Mukamana";
    Stops path1 = createStop("Musanze",1900,"Kubwimana");
    Stops path2 = createStop("Byangabo",2300,"Irumva");
    Stops path3 = createStop("Nyabihu",2500,"Ikirezi");
    Stops container[] = {path1,path2,path3};
	
	write(container,3);
	
	
	switch(option){
		case 1:
			break;
		case 2:
			display(first);
		default:
			break;
	}
	return 0;
}
