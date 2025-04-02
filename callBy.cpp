#include<iostream>

using namespace std;

void swap(int & num1, int & num2);
void display(int arr[], int n);
void swapFunction(int a[], int i, int j);

int main()
{
    int num1 = 5, num2 = 10;
    swap(num1, num2); //with call by reference (&), their values are actually changed in memory (swapped). 
    //Without &, they aren't changed in main.
    cout << num1 << " " << num2;
    cout << endl;



    int arr[] = {1,2,3,4,5,6,7,8,9};
    display(arr, 9);
    cout << endl;



    swap(arr[2], arr[5]); //first way to swap an array! (this swaps the 3rd and 6th number)
    display(arr, 9);
    cout << endl;



    swapFunction(arr, 3, 4); //second method to swap an array! (this swaps the 4th and 5th number)
    display(arr, 9);
    cout << endl;
}



void swap(int & num1, int & num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapFunction(int a[], int i, int j)
{
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}