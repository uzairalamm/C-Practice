#include <iostream>
#include <string>
using namespace std;

struct Product
{
	string iD;
	string name;
	int quantity;
	float price;
};

int main()
{
	int items;

	cout << "============Grocery Store==========" << endl;
	cout << "\nHow many Products You want to Add in Store: ";
	cin >> items;

	Product product[items];
	cout << "Enter " << items << "Products and their Details" << endl;

	for (int i = 0; i < items; i++)
	{
		cout << i + 1 << ".\nEnter Name of Product: ";
		cin >> product[i].name;

		cout << "Enter its ID: ";
		cin >> product[i].iD;

		cout << "Enter Its Price: ";
		cin >> product[i].price;

		cout << "Enter its Quatity: ";
		cin >> product[i].quantity;
	}

	cout << "\n============Display Products==========" << endl;
	for (int i = 0; i < items; i++)
	{
		cout << i + 1 << ".\n";
		cout << "Product Name: " << product[i].name << endl;
		cout << "Product ID: " << product[i].iD << endl;
		cout << "Product Price: " << product[i].price << endl;
		cout << "Product Quantity: " << product[i].quantity << endl;
		cout << "Total Price: " << product[i].price * product[i].quantity << endl;
	}
}