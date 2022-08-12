//5.9.11

#include <iostream>
#include <vector>
#include <algorithm>
#include <typeinfo>



int main()
{
    using namespace std;

    vector<string> ReadData;

    string AddToData = "";

    while(1) {
        cin >> AddToData;
        if (AddToData == "quit")
            break;
        ReadData.push_back(AddToData);
    }
    
    for (int i = 0; i < ReadData.size(); i++) {
        for(int j = i + 1; j < ReadData.size(); j++)
        { 
            if (ReadData[i] == ReadData[j]) {
                ReadData.erase(ReadData.begin()+j);
            }
        }
    }
    string Str, StrNext;

    char SymbolStr, SymbolStrNext;
   
    for (int i = 0; (i + 1) < ReadData.size(); i++){

        for (int j = 0; (j + 1) < (ReadData.size() - i); j++){
            Str = ReadData[j];
            StrNext = ReadData[j + 1];

            SymbolStr = Str[0];
            SymbolStrNext = StrNext[0];

            if (SymbolStr > SymbolStrNext) {
                swap(ReadData[j], ReadData[j + 1]);
            }
        }
    }
    
    for (int i = 0; i < ReadData.size(); i++) {
        cout << ReadData[i] << endl;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
