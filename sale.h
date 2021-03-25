#include <iostream>
using namespace std;

class Sale{
	public:
		Sale();
		Sale(double thePrice);
		double getPrice() const;
		void setPrice(double newPrice);
		virtual double bill() const;
		double savings(const Sale& other) const;
	private:
		double price;
};

Sale::Sale( ) : price(0){}

Sale::Sale(double thePrice) {
price = thePrice;
}


double Sale::bill( ) const
  {
    return price;
  }

double Sale::getPrice() const
{
	return price;
}

void Sale::setPrice(double newPrice){
	price = newPrice;
}


double Sale::savings(const Sale& other) const {
			return (bill() - other.bill()); 
			}

bool operator < (	const Sale& first,
		const Sale& second){
			return (first.bill() < second.bill());
		}
