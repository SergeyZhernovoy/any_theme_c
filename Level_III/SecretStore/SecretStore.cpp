// SecretStore.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;
#define MAX(a, b) a<b? b:a

struct Item
{
	string name;
	int price;
};

class Store
{
	vector<Item> inventory;
	vector<Item> forSale;
	int money;
public: 
	Store(Item* itemList, int n);
	~Store() {}

	string BuyItem(int item);
	string viewInventory();
	string ListItems();
	int getMoney() const
	{
		return MAX(money, 0);
	}
};

Store::Store(Item* itemList, int n)
{
	for (int i = 0; i < n; i++)
	{
		forSale.push_back(itemList[i]);

	}
	money = 20;
}

string Store::BuyItem(int item)
{
	money -= forSale[item - 1].price;
	if (money < 0)
		return "\nSsory, you don't have money\n\n";
	inventory.push_back(forSale[item - 1]);
	return "You buy " + forSale[item - 1].name + '\n';
}

string Store::ListItems()
{
	string s;
	for (int i = 0; i < forSale.size(); i++)
	{
		s += "[";
		s += i + 49;
		s += "] buy ";
		s += forSale[i].name;
		s += " ($";
		s += forSale[i].price + 48;
		s += ")\n";
	}
	return s;
}

string Store::viewInventory()
{
	string s;
	for (int i = 0; i < inventory.size(); i++)
		s += inventory[i].name + '\n';
	return s + '\n';
}

int main()
{
	int input;
	Item f[3];
	f[0].name = "Clown";
	f[0].price = 2;
	f[1].name = "Cracker John";
	f[1].price = 6;
	f[2].name = "Camel";
	f[2].price = 9;
	Store s = Store(f, 3);
	while (true)
	{
		do
		{
			cout << "Welcome to store\n"
				<< "You have " << s.getMoney()
				<< " dollars.\n"
				<< "\n What do you want to do?\n"
				<< s.ListItems()
				<< "[4] See catalog pripasov\n"
				<< "[5] Go away\n";
			cin >> input;
		}
		while (input < 1 || input > 5);
		switch (input)
		{
		case  4: 
			cout << s.viewInventory();
			break;
		case 5: 
			goto END;

		default:
			cout << s.BuyItem(input);
		}
	}
END: 
	cout << "Good luck!";
	return 0;
}
