#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

void print_menu(string menu[], float prices[], int inventory[], int Size);
void choose_item(string menu[], float prices[], int inventory[], int Size);
void print_inventory(string menu[], int inventory[], int Size);

void print_menu(string menu[], float prices[], int inventory[], int Size)
{
	for (int index = 0; index < Size; index++)
		cout << setw(9) << menu[index] << setw(3) << "($" << prices[index] << ") "  << setw(3) << endl;
}

void choose_item(string menu[], float prices[], int inventory[], int Size)
{
	string Payment = "?";
	int Amount = 0;
	int PurchaseTotal = 0;
	cout << "Here is our menu: " << endl;
	print_menu(menu, prices, inventory, Size);
	while (Payment != "pay")
	{	
		cout << "Please select which item you would like (or pay): ";
		cin >> Payment;
		if (Payment == "pay")
		{
			cout << "Your total is: " << "$" << PurchaseTotal << endl;
			return;
		}
		else if (Payment == menu[0])
		{
			cout << "Please selct the amount you would like: ";
			cin >> Amount;
			if ((Amount < inventory[0]) != 1 || Amount <= 0)
				cout << "We do not currently carry that much " << menu[0] << endl;
			else
			{
				PurchaseTotal += (Amount * prices[0]);
				inventory[0] -= Amount;
			}	
		}
		else if (Payment == menu[1])
		{
			cout << "Please selct the amount you would like: ";
			cin >> Amount;
			if ((Amount < inventory[1]) != 1 || Amount <= 0)
				cout << "We do not currently carry that much " << menu[1] << endl;
			else
			{
				PurchaseTotal += (Amount * prices[1]);
				inventory[1] -= Amount;
			}
		}
		else if (Payment == menu[2])
		{
			cout << "Please selct the amount you would like: ";
			cin >> Amount;
			if ((Amount < inventory[2]) != 1 || Amount <= 0)
				cout << "We do not currently carry that much " << menu[2] << endl;
			else
			{
				PurchaseTotal += (Amount * prices[2]);
				inventory[2] -= Amount;
			}
		}
		else if (Payment == menu[3])
		{
			cout << "Please selct the amount you would like: ";
			cin >> Amount;
			if ((Amount < inventory[3]) != 1 || Amount <= 0)
				cout << "We do not currently carry that much " << menu[3] << endl;
			else
			{
				PurchaseTotal += (Amount * prices[3]);
				inventory[3] -= Amount;
			}
		}
		else if (Payment == menu[4])
		{
			cout << "Please selct the amount you would like: ";
			cin >> Amount;
			if ((Amount < inventory[4]) != 1 || Amount <= 0)
				cout << "We do not currently carry that much " << menu[4] << endl;
			else
			{
				PurchaseTotal += (Amount * prices[4]);
				inventory[4] -= Amount;
			}
		}
		else if (Payment == menu[5])
		{
			cout << "Please selct the amount you would like: ";
			cin >> Amount;
			if ((Amount < inventory[5]) != 1 || Amount <= 0)
				cout << "We do not currently carry that much " << menu[5] << endl;
			else
			{
				PurchaseTotal += (Amount * prices[5]);
				inventory[5] -= Amount;
			}
		}
		else if (Payment == menu[6])
		{
			cout << "Please selct the amount you would like: ";
			cin >> Amount;
			if ((Amount < inventory[6]) != 1 || Amount <= 0)
				cout << "We do not currently carry that much " << menu[6] << endl;
			else
			{
				PurchaseTotal += (Amount * prices[6]);
				inventory[6] -= Amount;
			}
		}
		else if (Payment == menu[7])
		{
			cout << "Please selct the amount you would like: ";
			cin >> Amount;
			if ((Amount < inventory[7]) != 1 || Amount <= 0)
				cout << "We do not currently carry that much " << menu[7] << endl;
			else
			{
				PurchaseTotal += (Amount * prices[7]);
				inventory[7] -= Amount;
			}
		}
		else if (Payment == menu[8])
		{
			cout << "Please selct the amount you would like: ";
			cin >> Amount;
			if ((Amount < inventory[8]) != 1 || Amount <= 0)
				cout << "We do not currently carry that much " << menu[8] << endl;
			else
			{
				PurchaseTotal += (Amount * prices[8]);
				inventory[8] -= Amount;
			}
		}
		else if (Payment == menu[9])
		{
			cout << "Please selct the amount you would like: ";
			cin >> Amount;
			if ((Amount < inventory[9]) != 1 || Amount <= 0)
				cout << "We do not currently carry that much " << menu[9] << endl;
			else
			{
				PurchaseTotal += (Amount * prices[9]);
				inventory[9] -= Amount;
			}
		}
		else
		{
			cout << "That item is not in our inventory." << endl;
		}
	}
}

void print_inventory(string menu[], int inventory[], int Size)
{
	cout << "Here is our inventory: " << endl;
	for (int index = 0; index < Size; index++)
		cout << setw(9) << menu[index] << setw(3) << " Amount in Stock: " << inventory[index] << endl;
}

int main()
{
	string Name = "name";
	srand(time(NULL));
	const int Size = 10;
	string menu[Size] = { "Twizzlers", "Snickers", "Pringles", "Cheetos", "Poptarts", "Pepsi", "Kool-aid", "Coca-Cola", "Red_Vines", "Gatorade" };

	int inventory[Size];
	for (int index = 0; index < Size; index++)
		inventory[index] = (rand() % 91) + 10;

	float prices[Size];
	for (int index = 0; index < Size; index++)
		prices[index] = 2.25;
	while (Name != "exit")
	{
		cout << "Please enter the name of the customer purchasing an item (or exit): ";
		cin >> Name;
		if (Name == "exit")
			break;
		choose_item(menu, prices, inventory, Size);
	}
	print_inventory(menu, inventory, Size);

	return 0;
}
