#include<iostream>
#include "discount_sale.h"
using namespace std;

int main(){
	
	Sale d1(1000);
	DiscountSale d2(1000, 2);
	cout<<(d1<d2);
	cout<<d1.savings(d2);
	
	
	return 0;
}
