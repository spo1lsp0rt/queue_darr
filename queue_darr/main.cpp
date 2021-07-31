/*
    Ниже представлен программный код реализации очереди на базе динамического массива.
    Необходимо было реализовать: front, back, push, pop, empty.
*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Введите разер очереди: " << endl;
    int n;
    cin >> n;

    cout << "Введите элементы." << endl;
    int start = 0, end = 0;
    int* queue = new int[n];
    for (int i = 0; i < n; i++) {
        int a;
        cout << endl << i + 1 << "й элемент: ";
        cin >> a;
        queue[end++] = a;
    }

    //front
    cout << endl << "Первый элемент очереди: " << queue[start] << endl;

    //pop
    if (start + 1 > end) {
        start = 0;
        end = 0;
    }
    else 
        start++;
    cout << "После удаления элемента первый элемент очереди стал: " << queue[start] << endl;

    //back
    cout << "Последний элемент очереди: " << queue[end - 1] << endl;

    //push
    cout << "Введите элемент для добавления: ";
    int el;
    cin >> el;
    if (end + 1 > n) {
        int* temp = new int[n * 2];
        int j = 0;
        for (int i = start; i < end; i++, j++) {
            temp[j] = queue[i];
        }
        start = 0;
        end = j;
        queue = temp;
    }
    queue[end++] = el;

    cout << "Добавление элемента. Последний элемент очереди: " << queue[end - 1] << endl;

    //empty
    if (start != end) cout << "Очередь заполнена";
    else cout << "Очередь пуста";

    return 0;
}