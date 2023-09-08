//Создайте контейнер map из 5 элементов для сохранения информации о среднем балле студентов.
//Каждый элемент этого контейнера будет содержать пару "имя студента" - средний балл студента.Найдите одного из студентов.


#include <iostream>
#include <map>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    string name;
    int grade;

    string students[] = { "Shevchenko", "Miller", "Boyko", "Bondarenko", "Kovalenko" };
    int grades[] = {8, 10, 12, 9, 11};
    map<string, int> mapStates;
    map<string, int>::iterator iter;
    for (int i = 0; i < 5; i++) {
        name = students[i];
        grade = grades[i];
        mapStates[name] = grade;
    }

    for (iter = mapStates.begin(); iter != mapStates.end(); iter++) {
         cout << (*iter).first << ' ' << (*iter).second << endl;
    }

    cout << "\nВведите студента, чтобы узнать его средний бал успеваемости: ";
    cin >> name;

    grade = mapStates[name];
    cout << "\nСредний бал успеваемости студента " << name << " - " << grade << " балов.\n\n";
}