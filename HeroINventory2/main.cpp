#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main() {

    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    vector<string>::iterator myIterator;
    vector<string>::const_iterator iter;
    cout <<"\nYou have " << inventory.size() <<" items.\n";
    cout <<"\nYou items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
    {
      cout << *iter << endl;
    }
    cout << "\nYou trade your sword for a battle axe.";
    myIterator = inventory.begin();
    *myIterator = "battle axe";
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
    {
        cout << *iter << endl;
    }
    cout << "\nThe item name '" << *myIterator << "' has ";
    cout << (*myIterator).size() << " letters in it.\n";
    cout << "\nThe item name '" << *myIterator << "' has ";
    cout << myIterator->size() << " letters in it.\n";
    cout << "\nYou recover a crossbow froam a slain enemy.";
    inventory.insert(inventory.begin(), "crossbow");
    cout <<"\nYou items now:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)
    {
        cout << *iter << endl;
    }
    cout << "\nYou shield is destroyed in a fierce battle.";
    inventory.erase((inventory.begin() + 2));
    //inventory.pop_back();
    cout <<"\nYou items now:\n";
    for (unsigned int i = 0; i < inventory.size(); i++)
    {
        cout << inventory[i] << endl;
    }
    cout << "\nYou were robbed of all of your possesions by a thief.";
    inventory.clear();
    if (inventory.empty())
    {
        cout << "\nYou have nothing.\n";
    }
    else
    {
        cout <<"\nYou have at least ont item\n";
    }

    string word = "The test word for random";
    random_shuffle(word.begin(), word.end());
    cout << word;
    sort(word.begin(), word.end());
    cout << word;

    return 0;
}