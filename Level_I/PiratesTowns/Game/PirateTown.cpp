#include <iostream>
#include <string>
#include <vector>
#include "MenuUtility.h"
#include "PirateTown.h"

using namespace std;

using menuNamespace::menu;

namespace wharf
{
    void menu()
    {
        vector<string> menuCase;
        menuCase.push_back("Прыгнуть в воду");
        menuCase.push_back("Взять гребную лодку и уплыть в закат");
        menuCase.push_back("Взойти на борт \"Кровавого ветра\"");
        menuCase.push_back("Отправиться в город:> ");
        int userResponce = ::menu(menuCase);
        switch (userResponce) {
        case 0:
            cout <<"Ты прыгаешь в воду. "
                 <<" Внезапно ты слышишь"
                 <<" смех, и тут же \n"
                 <<"осознаешь, что забыл "
                 <<" снять одежду."
                 <<" Ты вылезаешь \n"
                 <<"из воды, промокший насквозь. \n";
                 menu();
            break;
        case 1:
            cout <<"Ты хватаешь неболшую красную лодочку "
                 <<" и уплываешь в закат."
                 <<" Ах, слава\n";
            break;
        case 2:
            cout <<"Ты возвращаешься на борт Красного ветра "
                 <<" и ждешь когда вернутся твои друзья,"
                 <<" вдоволь навеселившись\n";
            break;
        case 3:
            street::menu();
            break;
        default:
            break;
        }
    }
}

namespace tavern
{
    void menu()
    {
        vector<string> menuCase;
        menuCase.push_back("Заказать выпивку");
        menuCase.push_back("Начать драку");
        menuCase.push_back("Выйти на улицу");
        int userResponce = ::menu(menuCase);
        switch (userResponce) {
        case 0:
            cout <<"Ты заказал коктейль Fake. ";
                menu();
            break;
        case 1:
            cout <<"Ты начал крутую драку ";
               menu();
            break;
        case 2:
            street::menu();
            break;
        default:
            break;
        }
    }
}

namespace street
{
    void menu()
    {
        vector<string> menuCase;
        menuCase.push_back("Двигаться к причалу");
        menuCase.push_back("Войти в таверну");
        menuCase.push_back("Войти в оружейный магазин");
        menuCase.push_back("Начать драку");
        int userResponce = ::menu(menuCase);
        switch (userResponce) {
        case 0:
            wharf::menu();
            break;
        case 1:
            tavern::menu();
            break;
        case 2:
            weaponShop::menu();
            break;
        case 3:
            cout <<"Ты начал отличную, полезную для здоровья  "
                 <<" потасовку прямо на улице. \n";
            street::menu();
            break;
        }
    }
}

namespace weaponShop
{
    void menu()
    {
        vector<string> menuCase;
        menuCase.push_back("Купить кинжал, украшенный драг. камнями за 300 голды");
        menuCase.push_back("Купить мушкет за 350 голды");
        menuCase.push_back("Купить стандартную боевую саблю за 100");
        menuCase.push_back("Уйти из магазина");
        int userResponce = ::menu(menuCase);
        switch (userResponce) {
        case 0:
            cout <<"Ты купил кинжал  "
                <<"и спрятал его в карман, уплатив\n"
               <<"костлявому мужчине\n"
                 <<"за прилавком. \n";
            menu();
            break;
        case 1:
            cout <<"Заплатив за мушкет  "
                 <<"ты сразу опробовал его. Он\n"
                 <<"превосходно действует\n";
            menu();
            break;
        case 2:
            cout <<"Взмахнув саблей пару"
                 <<" раз, для пробы, \n"
                 <<" ты понимаешь, что она \n"
                 <<" не стоит потраченного "
                 <<" золота \n";
            menu();
            break;
        case 3 :
            street::menu();
            break;
        }
    }
}
