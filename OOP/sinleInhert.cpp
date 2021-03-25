#include <iostream>
using namespace std;

 class mainClass
 {
     int num1;
 public :
     void main_input(int x)
     {
       num1 = x;
     }
     void main_show( )
     {
       cout<<"num 1: "<<num1<<endl;
     }
 };
 class newClass :public mainClass
 {
     int num2;
     public :
        void new_input(int x)
      {
        num2=x;
      }
      void new_show( )
      {
        cout<<"num 2="<<num2<<endl;
      }
 };
int main(){
	int f,l;
	newClass o1;
	cout<<"Enter the first number : ";
    cin>>f;
    cout<<"Enter the second number : ";
    cin>>l;
    
     o1.main_input(f);
     o1.new_input(l);
     o1.main_show( );
     o1.new_show( );
	return 0;
}
