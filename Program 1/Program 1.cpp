#include <iostream>
using namespace std;
int main() {
	double originalprice, markuppercentage, salestaxrate;

	cout << "Original Price: $"; cin >> originalprice;
	cout << "Markup Percentage: "; cin >> markuppercentage;
	cout << "Sales tax rate: "; cin >> salestaxrate;

	double markupamount = originalprice * (markuppercentage / 100);
	double sellingprice = originalprice + markupamount;
	double salestax = sellingprice * (salestaxrate / 100);
	double finalprice = sellingprice + salestax;

	cout << "Orignal Price: $" << originalprice << endl;
	cout << "Markup: " << markuppercentage << "%" << endl;
	cout << "Selling Price: $" << sellingprice << endl;
	cout << "Sales Tax: $" << salestax << endl;
	cout << "Final price with tax: $" << finalprice << endl;

	return 0;
}
