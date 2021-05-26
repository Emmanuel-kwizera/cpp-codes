#include <iostream>
using namespace std;

class BST{
    int data;
    BST *left, *right;
 
public:
    // 	Default constructor.
    BST(); 
    
    // 	Parameterized constructor.
    BST(int); 
    
    // 	Insert function.
    BST* Insert(BST*, int);  
    
    // 	Inorder traversal.
    void Inorder(BST*);
    
	//	Search function
	BST* Search(BST*, int); 
	
	//	Find lowest function
	BST* FindMin(BST*);
	
	//	Find highest function
	BST* FindMax(BST*);
	  
	// Delet function
	BST* Delete(BST*, int);    
};

// Default Constructor definition.
BST ::BST()
    : data(0)
    , left(NULL)
    , right(NULL)
{
}

// Parameterized Constructor definition.
BST::BST(int value){
    data = value;
    left = right = NULL;
}

BST* BST::Insert(BST* root, int value){
	if(!root){
		return new BST(value);
	}
	if (value > root->data){
		root->right = Insert(root->right, value);
	}else{
		root->left = Insert(root->left, value);	
	}
	return root;
}

void BST ::Inorder(BST* root){
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << "  ";
    Inorder(root->right);
}

BST* BST::Search(BST* root, int key){
	if(!root || root->data == key){
		return root;
	}
	if (root->data < key)
       return Search(root->right, key);
    return Search(root->left, key);
}

BST* BST::FindMin(BST* root){
	BST* current = root;
	while (current && current->left)
        current = current->left;
 	
 	cout << current->data <<endl;
    return current;
}

BST* BST::FindMax(BST* root){
	BST* current = root;
	while (current && current->right)
        current = current->right;
 	
 	cout << current->data <<endl;
    return current;
}

BST* BST::Delete(BST* root, int element){
	BST* Temp;
	if (!root) {
		return root;
	}if(element < root->data){
		root->left = Delete(root->left,element);
	}else if(element > root->data){
		root->right = Delete(root->right,element);
	}else{
		if(root->left == NULL && root->right == NULL){
			return NULL;
		}else if(root->left == NULL){
			Temp = root->right;
            delete(root);
            return Temp;
		}else if(root->right == NULL){
			Temp = root->left;
            delete(root);
            return Temp;
		}
		Temp = FindMin(root->right);
		root->data = Temp->data;
		root->right = Delete(root->right, Temp->data);
	}
	return root;
//	if (!root) {
//		cout<<"No Elements in a tree"<<endl;
//       return;
//    }
//    if(root->data > element){
//    	Delete(root->left,element);
//	}else if(root->data > element){
//		Delete(root->right,element);
//	}else if(!root->left && !root->right){
//		delete(root);
//	}else if(root->left && root->right){
//		Temp = FindMin(root);
//		root->data = Temp->data;
//		delete(Temp);
//	}else if(root->left){
//		Temp = root->left;
//		root->data = Temp->data;
//		delete(Temp);
//	}else{
//		Temp = root->right;
//		root->data = Temp->data;
//		delete(Temp);
//	}
}

int main(){
	
BST b, *root = NULL;
    root = b.Insert(root, 50);
    b.Insert(root, 30);
    b.Insert(root, 20);
    b.Insert(root, 40);
    b.Insert(root, 70);
    b.Insert(root, 60);
    b.Insert(root, 80);
    
	cout<<"Inorder Traversal:"<<endl;
    b.Inorder(root);
    cout<<endl<<endl;
    
    cout << "Delete 20\n";
    root = b.Delete(root, 20);
    cout << "Inorder traversal of the modified tree \n";
    b.Inorder(root);
    cout<<endl<<endl;
    
    cout<<"Minimum value: ";
	b.FindMin(root);
	
	cout<<"Maximum value: ";
	b.FindMax(root);
	
	cout << "\nDelete 80\n";
    root = b.Delete(root, 80);
    cout << "Inorder traversal of the modified tree \n";
    b.Inorder(root);
    cout<<endl<<endl;
	
	cout<<"Minimum value: ";
	b.FindMin(root);
	
	cout<<"Maximum value: ";
	b.FindMax(root);
	
	return 0;
}
