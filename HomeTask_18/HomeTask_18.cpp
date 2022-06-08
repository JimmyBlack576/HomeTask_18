#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Программа подсчёта стоимости мобильной связи\n\n\n";

    int opin, opout, min, var;
    float mB = 1.20, mG = 1.50, mSH = 1.40;
    cout << "Выберите оператора с которого собираетесь звонить:  \n\n"
         << "1. Бибилайн \n"
         << "2. Гигафон \n"
         << "3. Шмеле 2 \n";
    cin >> opout;

    while (opout > 3) {
        cout << "Нет такого варианта!\n";
        exit(0);
    }

    cout << "Выберите оператора на который собираетесь звонить:  \n\n"
        << "1. Бибилайн \n"
        << "2. Гигафон \n"
        << "3. Шмеле 2 \n";
    cin >> opin;

    while (opin > 3) {
        cout << "Нет такого варианта!\n";
        exit(0);
    }

    while (opin == opout) {
        cout << "Звонки внутри сети бесплатны!\n";
        exit(0);
    }

    cout << "Введите количество минут: \n";
    cin >> min;

    if (opout == 1) {
        cout << "Стоимость вашего звонка составляет: " << mB * min << " руб. " << endl; 
    }
    else if (opout == 2 ) {
        cout << "Стоимость вашего звонка составляет: " << mG * min << " руб. " << endl;
    }
    else 
        cout << "Стоимость вашего звонка составляет: " << mSH * min << " руб. " << endl;

        

}
