#include<iostream>

using namespace std;
void initialize(char arr[], int n);
void display(char arr[], int n);
int remove(char arr[], int n);

int used1;

int main()
{
    const int MAX = 100;
    char a[MAX];
    int numValues;
    int used;

    cout << "How many values do you want to enter into the array? ";
    cin >> used;

    cout << "Enter values into the array: ";
    initialize(a, used);
    display(a, used);

    remove(a, used);

    display(a, used1);

}

void initialize(char arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void display(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int remove(char arr[], int n)
{
    used1 = n;
    for (int i = 0; i < used1; i++)
    {
        for(int j = used1; j > i; j--)
        {
            if (arr[i] == arr[j] && i != j)
            {
                if (j < used1)
                {
                    int remove = j;
                    
                    for (int k = remove + 1; k < used1; k++)
                    {
                        arr[k - 1] = arr[k];
                    }
                    used1--;
                    
                }
            }
        }
    }
    return used1;
}