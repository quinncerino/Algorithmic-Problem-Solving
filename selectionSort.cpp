#include<iostream>

using namespace std;

void initialize(int arr[], int n);
void display(int arr[], int n);
void swap(int & a, int & b);
void selectionSort(int arr[], int n);
int smallestIndex(int arr[], int i, int n);

int main()
{
    int arr[20];
    initialize(arr, 20);
    display(arr, 20);

    selectionSort(arr, 20);
    display(arr, 20);
}


void initialize(int arr[], int n)
{
    srand(time(0));

    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 101 + 100;
    }
}


void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void swap(int & a, int & b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest = smallestIndex(arr, i, n);
        swap(arr[i], arr[smallest]);
    }
}

int smallestIndex(int arr[], int i, int n)
{
    int s = i;
    for (int j = i; j < n; j++)
    {
        if (arr[j] < arr[s])
        {
            s = j;
        }
    }
    return s;
}
