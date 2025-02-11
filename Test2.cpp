#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int *apply_all(int arr1[], int size1, int arr2[], int size2);
void print(int arr[], int size);

int main()
{
    int arr1 [] {1, 2, 3, 4, 5};
    int arr2 [] {10, 20, 30};

    cout << "Array 1: ";
    print(arr1, 5);
    cout << endl;

    cout << "Array 2: ";
    print(arr2, 3);
    cout << endl;

    cout << "Final Array: ";
    print(apply_all(arr1, 5, arr2, 3), 15);
    cout << endl;


    return 0;
}

int *apply_all(int arr1[], int size1, int arr2[], int size2)
{
    int *result {nullptr};
    int size = size1 * size2;

    result = new int [size];

    for (int i=0; i<size2; i++) {
        for (int j=0, k=i*size1; j<size1; j++, k++) {
            result[k] = arr2[i] * arr1[j];
        }
    }

    return result;
}

void print(int arr[], int size)
{
    cout << "[ ";
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << "]";
}
