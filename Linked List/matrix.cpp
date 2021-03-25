#include <iostream>
using namespace std;
struct Matrix {
    int col;
    int row;
    int value;
    struct Matrix *next;
} *head = NULL;
void createLists(int value, int row, int column) {
    head = new Matrix;
    head->col = column;
    head->row = row;
    head->value = value;
    head->next = NULL;
}
void insertAtEnd(int row, int column, int value) {
    Matrix *t = new Matrix;
    t->row = row;
    t->col = column;
    t->value = value;
    t->next = NULL;
    Matrix *ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = t;
}
void traverseSparse(int rows, int cols) {   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int flag = 0;
            struct Matrix *ptr = head;
            while (ptr != NULL) {
                 if (j == ptr->col && i == ptr->row) {
                    cout << ptr->value << " ";
                    flag++;
                }
                ptr = ptr->next;
            }
            if(flag==0){
                cout<<0<<" ";
            }
        }
        cout << "\n";
    }
}
void addMatrices(){
}
int main() {
    int nbrRows;
    int nbrColumns;
    int nonZeroValue;
    int column;
    int nonzeros;
    // Struct Matrix2 matrix2
    cout << "Enter the number of rows : " << endl;
    cin >> nbrRows;
    cout << "Enter the number of columns     : " << endl;
    cin >> nbrColumns;
    for (int i = 0; i < nbrRows; i++) {
        NbrOfZeros: cout << "Number of non-zero values at a row " << i + 1 << ": ";       
        cin >> nonzeros;
        if ( nonzeros >= nbrColumns)
        {
            goto NbrOfZeros;
        }
        for (int j = 0; j < nonzeros; j++) {
            Columns: cout << "Enter column you want to put a non zero value : ";
            cin >> column;
            if(column > nonzeros) {
                goto Columns; 
            }
            cout << "Enter value : ";
            cin >> nonZeroValue;
            if (head == NULL) {
                createLists(nonZeroValue, i, column);
            } else {
                int flag = 0;
                struct Matrix * ptr=head;
                while(ptr!=NULL){
                    if(ptr->row==i&&ptr->col==column){
                        ptr->value=nonZeroValue;
                        flag++;
                    }
                    ptr=ptr->next;
                }
                if (flag==0){
                    insertAtEnd(i, column, nonZeroValue);
                }
            }
        }
    }
    traverseSparse(nbrRows, nbrColumns);
    return 0;
}
