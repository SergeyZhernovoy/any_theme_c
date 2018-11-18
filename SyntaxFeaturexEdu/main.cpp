#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void CalculateResult(const double* const num1, double& result);
void CalculateResult(double num1, double num2, double& result);
void DisplayNumber(vector<int>& dynArray);

int main() {
    string hello = "Hello World !";
    for (auto sym : hello)
    {
        cout << (char)(sym) << "\t";
    }
    auto result = 0.0;
    double numeric = 2;
    CalculateResult(&numeric, result);
    cout << endl <<result << endl;
    CalculateResult(2, 3, result);
    cout << result << endl;
    vector<int> myNums;
    myNums.push_back(501);
    myNums.push_back(-1);
    myNums.push_back(25);
    myNums.push_back(-35);

    DisplayNumber(myNums);

    cout << "\nСортировка в порядке убывания\n";
    sort(myNums.begin(), myNums.end(), [](int num1, int num2) {return num2 < num1;});

    DisplayNumber(myNums);

    double* anyPointer = nullptr;
    anyPointer = &result;
    cout << "\n\naddress " << &anyPointer << " value  " << anyPointer << " result = " <<  &result <<" value by pointer " << *anyPointer;
    cout << "\n" << sizeof(char*)<<"\n";

    int* pArray = new int[5];
    pArray[0] = 1;
    //cout << pArray  << "\t" << *pArray<< endl;
    //pArray++;
    pArray[1] = 2;
    //cout << pArray  << "\t" << *pArray<< endl;
    //pArray--;
    cout << pArray  << "\t" << *pArray<< endl;
    //pArray--;

    //cout << pArray  << "\t" << *pArray<< endl;
    pArray++;

    cout << pArray  << "\t" << *pArray;

    pArray--;



    try
    {
        int* const pointer = new int[0x1fffffffff];
        delete[] pointer;
    }
    catch(bad_alloc)
    {
        cout << "\nError! Memory not allocate";
    }

    delete[] pArray;


    int* const pointer2 = new(nothrow)int[0x1fffffffffff];
    if (pointer2)
    {
        delete[] pointer2;
    }
    else
    {
        cout << "\nError new! Memory not allocate";

    }


    return 0;

}

inline void CalculateResult(const double* const num, double& result)
{
    result = (*num) * (*num);
}

inline void CalculateResult(double num1, double num2, double& result)
{
    result = num1 * num2;
}

void DisplayNumber(vector<int>& dynArray)
{
    for_each(dynArray.begin(),
             dynArray.end(),
             [](int e) {cout << e << " ";});
}
