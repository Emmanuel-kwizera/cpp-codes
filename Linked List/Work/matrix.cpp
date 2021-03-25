#include <iostream>
using namespace std;

struct Matrix{
	int row;
	int column;
	int value;
	struct Matrix * next;
} *head = NULL;

void create_matrix(int row,int column,int value){
    head = new Matrix;
    head->row = row;
    head->column = column;
    head->value = value;
    head->next = NULL;
}

void insert_other_elements(int row,int column,int value){
	Matrix * temp = new Matrix;
	temp->row = row;
	temp->column = column;
	temp->value = value;
	Matrix *ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

//void display(int rows,int columns,int number){
void display(int rows,int columns){
//	for(int d = 1;d<=number;d++){
		for (int i = 0; i < rows; i++) {
        	for (int j = 0; j < columns; j++) {
            	int flag = 0;
            	struct Matrix *ptr = head;
            	while (ptr != NULL) {
                	if (j == ptr->column && i == ptr->row) {
                    	cout << ptr->value << " ";
                    	flag += 1;
                	}
                	ptr = ptr->next;
            	}
            	if(flag==0){
                	cout<<0<<" ";
            	}
        	}
        	cout << "\n";
    	}
		cout<<endl;		
//	}
}

int main(){
//	int number;
	int rows;
	int cols;
	int col;
	int nonezeros;
    int nonZeroValue;
	
//	cout<<"ENTER THE NUMBER OF MATRICES: ";
//	cin>>number;
	
//	for(int n = 0;n<number;n++){
//		cout<<"MATRIX NUMBER : "<<n<<endl;
//		cout<<"----------------------------------------------------"<<n;
		cout << "\nEnter the number of rows : ";
    	cin >> rows;
    	cout << "\nEnter the number of columns     : ";
    	cin >> cols;
    	for (int i = 1; i <= rows; i++) {
    		NbrOfZeros: cout << "\nNumber of non-zero values at a row " << i << ": ";
    		cin >> nonezeros;
    		if ( nonezeros > cols){
    			goto NbrOfZeros;
			}
			for (int j = 0; j < nonezeros; j++) {
            	Columns: cout << "\nEnter column you want to put a non zero value : ";
            	cin >> col;
            	if(col > cols) {
                	goto Columns; 
            	}
            	cout << "Enter value : ";
            	cin >> nonZeroValue;
            	if (head == NULL) {
                	create_matrix(i, col, nonZeroValue);
            	}else {
                	int flag = 0;
                	struct Matrix * ptr=head;
                	while(ptr!=NULL){
                    	if(ptr->row==i&&ptr->column==col){
                        	ptr->value=nonZeroValue;
                        	flag += 1;
                    	}
                    	ptr=ptr->next;
                	}
                	if (flag==0){
                    	insert_other_elements(i, col, nonZeroValue);
                	}
            	}
            }
    	}
//    	cout<<endl;
//	}
//	display(rows,cols,number);
display(rows,cols);
	return 0;
}
