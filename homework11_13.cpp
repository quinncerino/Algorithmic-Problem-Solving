#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void display(int arr[], int n);
void initialize(int arr[], int n);
int evens(int arr[], int n);
double average(int arr[], int n);
bool search(int arr[], int n, int target);
void reverse(int arr[], int n);


int main()
{
    int n, target;
    int a[20];

    initialize(a, 20);

    display(a, 20);

    reverse(a, 20);

    cout << "The number of even numbers is " << evens(a, 20)
    << ". The average is " << average(a, 20) << endl;

    if (search(a, 20, 150))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

}

//displaysthe elements of the array
void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//initializes array with random values between 100 and 200
void initialize(int arr[], int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 101 + 100;
    }
}

//counts the number of evens
int evens(int arr[], int n)
{
    int evens = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evens ++;
        }
    }
    return evens;
}

//calculates the average of the elements of array
double average(int arr[], int n)
{
    int sum = 0, count = 0;
    double average;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        count++;
    }
    average = (double)sum / count;
    return average;

}

//searches for target element in array and returns whether it was found
bool search(int arr[], int n, int target)
{
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            found = true;
        }
    }
    return found;
}


//displays the elements of the array in reverse order
void reverse(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}