#include <iostream>
using manespace std;
	class Sale{
		public:
			sale();
			sale(double thePrice);
			double getPrice() const;
			virtual double bill() const;
			double saving(const Sale& other) const;
		private:
			double price;
			
		double Sale::savings(const Sale& other) const{
			return (bill() – other.bill());
		}
		bool operator < (	const Sale& first,
			const Sale& second){
				return (first.bill() < second.bill());
			}
	};	
	
	class DiscountSale   :  public Sale{
		public:
			DiscountSale();
				DiscountSale(double thePrice,double the Discount);
				double getDiscount() const;
				void setDiscount(double newDiscount);
				double bill() const;
				private:
					double discount;
			
			double DiscountSale::bill() const{
				double fraction = discount/100;
					return (1 – fraction)*getPrice();
				}

	};
int main(){
	

	return 0;
}
