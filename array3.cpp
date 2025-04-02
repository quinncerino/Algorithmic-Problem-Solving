#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

int main()
{
    int arr[10];

    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100 + 1;
    }


    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    

    int j = 9;
 
    for (int i = 0; i < 5; i++)
    {
        int value;

        value = arr[j];

        arr[j] = arr[i];
        arr[i] = value;
 
        j--;
    }


    


    cout << endl;




   for (int j = 0; j < 10; j++)
   {
        cout << arr[j] << " ";
   }
}