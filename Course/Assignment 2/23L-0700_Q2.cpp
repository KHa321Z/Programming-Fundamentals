#include <iostream>
using namespace std;

int N, quantity;
float price;
float subtotal = 0;
float discount = 0;
float shippingfee = 0;

int main()
{

	cout << "WELCOME TO ONLINE SHOPPING CART" << endl << endl;
	cout << "Enter Total Number of Items: ";
	cin >> N;
	cout << endl;

	if (N < 1) {
		cout << "Incorrect Number of Items Entered!" << endl;
		return 0;
	};

	for (int i = 1; i <= N; i++)
	{

		cout << "Item " << i << ":" << endl;

		do {

			cout << "Price (Rs.): ";
			cin >> price;
			cout << "Quantity: ";
			cin >> quantity;
			cout << endl;

			if (quantity <= 0 || price <= 0)
				cout << "Incorrect Input! Enter Details Again!" << endl 
					<< endl << "Item " << i << ":" << endl;

		} while (quantity <= 0 || price <= 0);

		subtotal += quantity * price;

	};

	if (subtotal > 1000)
		discount = subtotal * 10 / 100;

	if (subtotal < 500)
		shippingfee = 50;

	cout << "Itemized List:" << endl;
	cout << "Subtotal:\t Rs. " << subtotal << endl;
	cout << "Discount:\t Rs. " << discount << endl;
	cout << "Shipping Fee:\t Rs. " << shippingfee << endl;
	cout << "Total Cost:\t Rs. " << subtotal - discount + shippingfee << endl;

	return 0;

};