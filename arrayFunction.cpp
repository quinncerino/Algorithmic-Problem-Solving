#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void initialize(int arr[], int n);
void display(int arr[], int n);
int sum(int arr[], int n);
int largest(int arr[], int n);


int main()
{
    int a[10];

    initialize(a, 10);

    cout << endl;

    cout << "The sum is " << sum(a, 10) << endl;

    cout << "The largest element is " << largest(a, 10) << endl;

    display(a, 10);
     
    cout << endl;

    cout << a[3];
}


void initialize(int arr[], int n)
{
    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 101;
    }
}


int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}


int largest(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i ++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}


void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}