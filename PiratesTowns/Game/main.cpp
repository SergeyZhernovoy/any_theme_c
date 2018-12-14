#include <iostream>
#include "PirateTown.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    cout << "Твой корабль Кровавый ветер, вошел в доки Сент-Мари"
         <<". Ты сошел с корабля на берег и стоишь на причале"
         <<endl;
    wharf::menu();
    return 0;
}
