// task_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


void vivod(int size, int** matrix) {


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
};

void diag(int size,int** matrix) {
    int k;
    int pd;
    int summa;
    k = 0;
    pd = 0;
    for (int i = 0, j = 0; i < size; i++, j++) {
        for (int temp = 2; temp <= sqrt(abs(matrix[i][j])); temp++)
        {
            if (matrix[i][j] % temp == 0) {
                k++;
                break;
            }
        }
        cout << endl;
    }
    for (int i = 0, j = size-1; i < size; i++, j--) {
        for (int temp = 2; temp <= sqrt(abs(matrix[i][j])); temp++)
        {
            if (matrix[i][j] % temp == 0) {
                pd++;
                break;
            }
        }
        cout << endl;
    }
    summa = size - k + size - pd;
    cout << summa;
};


int main()

{   
    int size;
    cin >> size;
    int** matrix;
    int** c;
    c = new int* [size];
    int** b;
    b = new int* [size];
    matrix = new int*[size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 50 + (-10);  // присваивание
            cout << matrix[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;

    int min = 100;
    for (int i = 0; i < size;i++ ) {
        for (int j = 0; j < size;j++) {
            if (matrix[i][j] < min) {       //минимальный элемент
                min = matrix[i][j];
            }
        }

   }
    cout << min<< endl;



    for (int  i= 0; i < size; i++) {
        c[i] = new int[size];
        for (int j = 0; j < size; j++) {
            c[i][j] = rand() % 50 + (-10); //присваивание
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            temp = c[i][j];
            c[i][j] = c[j][i];      //транспонирование
            c[j][i] = temp;
        }
    }

    cout << endl;

    vivod(size, c);

    for (int i = 0; i < size; i++) { 
        b[i] = new int[size];
        for (int j = 0; j < size; j++) {
            b[i][j] = 2* (c[i][j] + matrix[i][j]);
        }
        cout << endl;
    }
    vivod(size, b);
    diag(size,matrix);

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
