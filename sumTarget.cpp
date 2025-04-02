#include<iostream>

using namespace std;

void search(int arr[], int n, int target);
void initialize(int arr[], int n);
void display(int arr[], int n);

int main()
{
    int target, n;
    cout << "What is the length of the array? ";
    cin >> n;

    int a[n];

    cout << "Enter values for the array: ";
    initialize(a, n);

    display(a, n);

    cout << "What is your target value? ";
    cin >> target;

    search(a, n, target);
}

void search(int arr[], int n, int target)
{
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j << endl;
                found = true;
            }
        }
    }
    if (found == false)
    {
        cout << "Not found";
    }
}

void initialize(int arr[], int n)
{

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
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