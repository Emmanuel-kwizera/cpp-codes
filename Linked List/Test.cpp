#include <iostream>
#include <cstdlib>
using namespace std;

struct Route {
    char
    const * name;
    int price;
    char
    const * agent;
};

struct Stops {
    Route route;
    struct Stops * next;
}* first = NULL;

Route holdStop(char
    const * name, int price, char
    const * agent) {
    Route temp;
    temp.name = name;
    temp.price = price;
    temp.agent = agent;

    return temp;
}

Stops * create(Route route, Stops * lastNode) {
    struct Stops * current;
    current = (struct Stops * ) malloc(sizeof(struct Stops));
    current -> route = route;
    current -> next = NULL;

    lastNode -> next = current;

    return current;
}

void write(Route stop[], int n) {
    first = (struct Stops * ) malloc(sizeof(struct Stops * ));
    first -> route = stop[0];
    struct Stops * temp = first;
    for (int i = 1; i < n; i++) {
        temp = create(stop[i], temp);
    }
}

void display(Stops * stop) {
    cout << endl << endl;
    cout << "\t\t\t                  AVAILABLE STOPS             	 " << endl;
    cout << "\t\t\t+-------------------------------------------------- " << endl;
    cout << "\t\t\t| NAME\t\t ||PRICE\t\t ||AGENT ||" << endl;
    cout << "\t\t\t+-------------------------------------------------- " << endl;
    while (stop != NULL) {
        cout << "\t\t\t||" << stop -> route.name << "\t ||  " << stop -> route.price << "\t\t ||" << stop -> route.agent << " ||" << endl;
        cout << "\t\t\t=================================================== " <<
            endl;
        stop = stop -> next;
    }
}

Stops * search(int SEARCH_VAL, Stops * stop) {
    Stops * match;
    while (stop != NULL) {
        if (SEARCH_VAL == stop -> route.price) {
            return stop;
        } else {
            stop = stop -> next;
        }
    }
    return 0;
}

Stops * maximum(Stops * stop) {
    int max = 0;
    Stops * temp = stop;
    while (temp != NULL) {
        if (max < temp -> route.price) {
            max = temp -> route.price;
        } else {
            temp = temp -> next;
        }
    }
    return search(max, stop);
}

int counter(Stops * temp) {
    int counter = 0;
    while (temp != NULL) {
        counter += 1;
        temp = temp -> next;
    }
    return counter;
}

void resultPrinter(Stops * stop) {
    cout << "\t\t\t+-------------------------------------------------- " << endl;
    cout << "\t\t\t| NAME\t\t ||PRICE\t\t ||AGENT ||" << endl;
    cout << "\t\t\t+-------------------------------------------------- " << endl;
    cout << "\t\t\t||" << stop -> route.name << "\t ||  " << stop -> route.price << "\t\t ||" << stop -> route.agent << " ||" << endl;
    cout << "\t\t\t=================================================== " << endl;
}

int main() {
    int cont;
    do {
        int option;
        cout << "\t\t\t+------------------------------------------+ " << endl;
        cout << "\t\t\t|            AVAILABLE OPTIONS             | " << endl;
        cout << "\t\t\t+------------------------------------------+ " << endl;
        cout << "\t\t\t|  1.  Create newtop                       |" << endl;
        cout << "\t\t\t|  2.  View available stops                |" << endl;
        cout << "\t\t\t|  3.  Search                              |" << endl;
        cout << "\t\t\t|  4.  Maximum                             |" << endl;
        cout << "\t\t\t|  5.  Count All                           |" << endl;
        cout << "\t\t\t+------------------------------------------+ " << endl;
        cout << "\t\t\tEnter Your Option: ";
        cin >> option;

        Route path1 = holdStop("Kamembe", 300, "Musa");
        Route path2 = holdStop("Giheke", 500, "Kigabo");
        Route path3 = holdStop("Bumuzi", 700, "Bedjo");
        Route path4 = holdStop("Shangazi", 900, "Bedjo");
        Route path5 = holdStop("Ntendezi", 1000, "Tunga");
        Route container[] = {
            path1,
            path2,
            path3,
            path4,
            path5
        };

        write(container, 5);

        int key;
        struct Stops * result;
        struct Stops * max;
        int total;

        switch (option) {
        case 1:
            break;
        case 2:
            display(first);
            break;
        case 3:
            cout << "\t\tEnter the search key: \t";
            cin >> key;
            result = search(key, first);
            resultPrinter(result);
            break;
        case 4:
    		cout << "\t\t\t                   MAXIMUM             	   " << endl;
            max = maximum(first);
            resultPrinter(max);
        case 5:
            total = counter(first);
            cout << "\n\t\t\tTotal number of nodes in list: " << total << endl;
        default:
            break;
        }
        cout << "\n\t\t\tDo you want to continue[1/0]: ";
        cin >> cont;
    } while (cont == 1);
    return 0;
}
