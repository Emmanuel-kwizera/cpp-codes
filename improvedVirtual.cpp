#include <iostream>
using manespace std;
class Sale{
	public:
		sale();
		sale(double thePrice);
		double getPrice() const;
		void setPrice(double newPrice);
		virtual double bill() const;
		double saving(const Sale& other) const;
	private:
		double price;
};

Sale::Sale( ) : price(0){}

Sale::Sale(double thePrice) {
price = thePrice;
}


double Sale::bill() cost{
	return price
}

double Sale::getPrice() const{
	return price;
}

Sale::setPrice(double newPrice){
	price = newPrice;
}


double Sale::savings(const Sale& other) const{
		return (bill() – other.bill());
	}
bool operator < (	const Sale& first,
		const Sale& second){
			return (first.bill() < second.bill());
		}

class DiscountSale   :  public Sale{
		public:
			DiscountSale();
				DiscountSale(double thePrice,double the Discount);
				double getDiscount() const;
				void setDiscount(double newDiscount);
				double bill() const;
				private:
					double discount;
};

double DiscountSale::bill() const{
	double fraction = discount/100;
		return (1 – fraction)*getPrice();
	}



