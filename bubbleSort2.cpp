#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void initialize(int arr[], int n);
void display(int arr[], int n);
void bubbleSort(int arr[], int n);
void swap(int & a, int & b);
void oneRound (int arr[], int j);

int main()
{
    int arr[20];

    initialize(arr, 20);
    display(arr, 20);

    bubbleSort(arr, 20);
    display(arr, 20);
}

//initializes an int type array of size n elements to random numbers between 100 to 200
void initialize(int arr[], int n)
{
    srand(time(0));

    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 101 + 100;
    }
}

//displays the elements of the array
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//purpose: one round of bubble sort on the given unsorted
//input: the array, the index of the last unsorted element
//return: void
void oneRound (int arr[], int j)
{
    for(int i = 0; i < j; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

//sorts the elements of the array in ascending order using bubble sort method and by calling the swap function
void bubbleSort(int arr[], int n)
{
    for (int j = n - 1; j > 0; j--)
    {
        oneRound(arr, j);
    }
}


//swaps two values a and b, and changes their value in main memory because using call by reference
void swap(int & a, int & b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}