// EncryptionApplication.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Encryption.h"
using namespace std;

int main()
{
    cout << "Welcome in application by encrypt S.A.S.\n";
    Encryption delta("dragons.txt", "output.txt");
    delta.Encrypt();
    delta.close();

    Encryption gamma("output.txt", "output2.txt");
    gamma.Encrypt();
    gamma.close();
    return 0;
}

