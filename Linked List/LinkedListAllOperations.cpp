#include <iostream>
using namespace std;

struct Number{
	int number;
	struct Number * next;
}* first = NULL;

void display({})

//void insert_at_the_beginning(Number number, struct Number * lastNode){
//    struct Number * current;
//    current = (struct Number *)malloc(sizeof (struct Number));
//    current->stop = stop;
//    current->next = lastNode;
//    first = current;
//}

int main(){
	int cont;
    do {
        int option;
        cout << "\t\t\t+------------------------------------------+ " << endl;
        cout << "\t\t\t|            AVAILABLE OPTIONS             | " << endl;
        cout << "\t\t\t+------------------------------------------+ " << endl;
        cout << "\t\t\t|  1.  Display elements                    |" << endl;
        cout << "\t\t\t|  2.  Search element                      |" << endl;
        cout << "\t\t\t|  3.  Inser at the end                    |" << endl;
        cout << "\t\t\t|  4.  Inser in the middle                 |" << endl;
        cout << "\t\t\t|  5.  Inser on the first                  |" << endl;
        cout << "\t\t\t|  6.  Delete at the end                   |" << endl;
        cout << "\t\t\t|  7.  Delete in the middle                |" << endl;
        cout << "\t\t\t|  8.  Delete on the first                 |" << endl;
        cout << "\t\t\t+------------------------------------------+ " << endl;
        cout << "\t\t\tEnter Your Option: ";
        cin >> option;
        switch (option) {
        case 1:
            break;
        default:
            break;
        }
        cout << "\n\t\t\tDo you want to continue[1/0]: ";
        cin >> cont;
    } while (cont == 1);
	return 0;
}
