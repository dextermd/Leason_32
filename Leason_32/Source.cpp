#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <string.h>
#include <algorithm> // STL
#include "Data.h"
#include "Student.h"


using namespace std;


int main()
{


#if 0

    // ------------------------------------- Структуры ----------------------------------------------------- \\
    // ----------------------------------------------------------------------------------------------------- \\
    // Описать сруктуры для хранения даты (день,месяц,год)

    // Обьявления обьекта /  экземпляра структуры Data

    Data a;
    cout << "\nОбьем памяти: " << sizeof(a) << endl;

    a.day = 3;
    a.month = 4;
    a.year = 2023;

    show(a);

    // Инициалтзация обьекта на этапе  разработки
    Data b{ 25, 5, 2023 };
    show(b, true);

    cout << endl << endl;

    // ----------------------------------------------------------------------------------------------------- \\

    Data x;
    show(x);
    x = b;
    show(x);

    cout << endl << endl;

    // ----------------------------------------------------------------------------------------------------- \\

    /*
    Реализовать функцию для ввода данных с клавиатуры
    */

    Data c;
    
    //c = init();

    init(c);

    show(c, true);

#endif

#if 0

    // ----------------------------------------------------------------------------------------------------- \\
    // Написать функцию для инициализации Даты содержимым строки.

    Data k;
    k = init("12/3/2021");
    show(k, true);

#endif

#if 0
    // ----------------------------------------------------------------------------------------------------- \\
    // Описать структуру Студент(имя, фамилия, Вуз, 5 оценок, год рождения)

    Student s1{ "Ivanov", "Ivan", "UTM", 10,9,6,7,8, 2000 };

    cout << "\nОбьем памяти: " << sizeof(s1) << endl;

    show(s1);

    // ----------------------------------------------------------------------------------------------------- \\
    // Реализовать функции для инициализации объекта с клавиатуры и вывода данных объекта на экран

    //  Student s2;
    //  init(s2);
    //  show(s2);

    // ----------------------------------------------------------------------------------------------------- \\

    /*
    Самостоятельно:
    Написать функцию определения среднего балла студента.
    */

    cout << "\nСредний бал студента = " <<  average(s1);

#endif

#if 0
    // ----------------------------------------------------------------------------------------------------- \\
    // Заменить поле Дата в структуру Студент - день рождения.
    // Отредактировать функции init и show для Студента

    Student s1{ "Ivanov", "Ivan", "UTM", 10,9,6,7,8, 15,2,2001 };

    show(s1);

    // Student s2;
    // init(s2);
    // show(s2);

    cout << s1.name << endl;

#endif


#if 0
    // ----------------------------------------------------------------------------------------------------- \\

    /*
    Создать массив студентов - количество 3,
    проинициализировать сразу и вывести на экран
    */

    Student s1{ "Ivanov", "Ivan", "UTM", 10,9,6,7,8, 15,2,2001 };

    const int N = 3;
    Student mas[N]{ 
        {"Borisov", "Boris", "STEP", 9,10,8,9,10, 25,1,2002},
        s1,
        {"Anisimova", "Kate", "UTM", 5,9,8,7,6, 2,3,2000}
    };

    cout << "\nМассив студентов: \n";

    //for (int i = 0; i < N; i++)
    //{
    //    show(mas[i]);
    //}

    show(mas, N);

#endif


#if 0
    Student s1{ "Ivanov", "Ivan", "UTM", 10,9,6,7,8, 15,2,2001 };

    const int N = 3;

    Student mas[N]{
        {"Borisov", "Boris", "STEP", 9,10,8,9,10, 25,1,2002},
        s1,
        {"Anisimova", "Kate", "UTM", 5,9,8,7,6, 2,3,2000}
    };



    // ----------------------------------------------------------------------------------------------------- \\
   
    /*
        Самостоятельно:
        Написать функцию поиска студента в массиве студентов по фамилии,
        в случае нахождения возвращает индекс студента в массиве,
        в случае отсутствия - 1.

        int find_student(Student * m, int size, const char * surname);
    */

    char key[30];
    cout << "\nВведи фамилию студента для поиска: ";
    cin.getline(key, sizeof(key));

    int index;
    index = find_student(mas, N, key);

    if (index != -1)
    {
        cout << "\nСтудент есть в массиве, порядковый номер: " << index + 1;
    }
    else {
        cout << "\nТакой студент не найден";
    }


#endif


#if 0
    Student s1{ "Ivanov", "Ivan", "UTM", 10,9,6,7,8, 15,2,2001 };

    const int N = 3;

    Student mas[N]{
        {"Borisov", "Boris", "STEP", 9,10,8,9,10, 25,1,2002},
        s1,
        {"Anisimova", "Kate", "UTM", 5,9,8,7,6, 2,3,2000}
    };



    // ----------------------------------------------------------------------------------------------------- \\
   
    /*
        Самостоятельно:
        Написать функцию, которая определяет лучшего студента из
        массива студентов и возвращает его.
        Критерий: если его средний балл выше.

        Student best(Student * mas, int size);
    */


    Student bst = best(mas, N);
    cout << "\nЛучший студент(данные): ";
    show(bst);

    cout << "\nЛучший студент: " << bst.surname << " средний балл: " << average(bst);


#endif

#if 1

    Student s1{ "Ivanov", "Ivan", "UTM", 10,9,6,7,8, 15,2,2001 };

    const int N = 3;

    Student mas[N]{
        {"Borisov", "Boris", "STEP", 9,10,8,9,10, 25,1,2002},
        s1,
        {"Anisimova", "Kate", "UTM", 9,10,8,9,10, 2,3,2000}
    };


    show(mas, N);

    // ----------------------------------------------------------------------------------------------------- \\
   
    /*
    
    Самостоятельно:
    Написать функцию, которая выводит на экран всех студентов
    с максимальным балло (всех лучших студентов)

    void show_best(Student * mas, int size);
    */


    cout << "\nСтуденты с максимальным средним баллом в группе: \n";

    show_best(mas, N);


#endif





    _getch();
}


