#include <iostream>
using namespace std;

class Rectangle {
	public :
		int length;
		int width;
		void initialize(int l,int w){
			this->length = l;
			this->width = w;
		}
		int area(int l,int w){
			return l*w;
		}
		int perimeter(int l,int w){
			return 2*(l+w);
		}
};

int main(){
	return 0;
}
