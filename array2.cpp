#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    const int MAX = 100;
    int arr[MAX], used = 0, evens = 0, sum = 0;

    srand(time(0)); 

    //create array
    for (int i = 0; i < 50; i++)
    {
        arr[i] = rand() % 101 + 100;
        used++;
    }


    //display array
    for (int i = 0; i < used; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;





    //insert 50 as the 2nd value
    if (used < MAX)
    {
        int goal = 1;
        for (int i = used - 1; i >= goal; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[1] = 50;
        used ++;
    }
    else
    {
        cout << "The array is full!\n";
    }


    //display array
    for (int i = 0; i < used; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;





    //count how many even numbers
    for (int i = 0; i < used; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evens++;
        }
    }
    cout << "There are " << evens << " even numbers." << endl;




    //calculate average
    for (int i = 0; i < used; i++)
    {
        sum += arr[i];
    }
    cout << "The average is " << (double)sum / used << endl;
}