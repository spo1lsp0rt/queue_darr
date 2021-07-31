/*
    ���� ����������� ����������� ��� ���������� ������� �� ���� ������������� �������.
    ���������� ���� �����������: front, back, push, pop, empty.
*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "������� ����� �������: " << endl;
    int n;
    cin >> n;

    cout << "������� ��������." << endl;
    int start = 0, end = 0;
    int* queue = new int[n];
    for (int i = 0; i < n; i++) {
        int a;
        cout << endl << i + 1 << "� �������: ";
        cin >> a;
        queue[end++] = a;
    }

    //front
    cout << endl << "������ ������� �������: " << queue[start] << endl;

    //pop
    if (start + 1 > end) {
        start = 0;
        end = 0;
    }
    else 
        start++;
    cout << "����� �������� �������� ������ ������� ������� ����: " << queue[start] << endl;

    //back
    cout << "��������� ������� �������: " << queue[end - 1] << endl;

    //push
    cout << "������� ������� ��� ����������: ";
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

    cout << "���������� ��������. ��������� ������� �������: " << queue[end - 1] << endl;

    //empty
    if (start != end) cout << "������� ���������";
    else cout << "������� �����";

    return 0;
}