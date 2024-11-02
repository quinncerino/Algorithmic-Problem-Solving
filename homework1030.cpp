#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    const int MAX = 100;
    int arr[MAX], used = 0;

    srand(time(0));


    //30 random elements
    for(int i = 0; i < 30; i++)
    {
        arr[i] = rand() % 100 + 1;
        used++;
    }


    //display elements
    for(int i = 0; i < used; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;




    //insert 120 to end
    if (used < MAX)
    {
        arr[used] = 120;
        used ++;
    }
    else
    {
        cout << "The array is full!\n";
    }


    //display all elements
    for (int i = 0; i < used; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;





    //insert 150 as the new 2nd element
    if (used < MAX)
    {
        int goal = 1;
        for (int i = used - 1; i >= goal; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[goal] = 150;
        used++;
    }
    else
    {
        cout << "The array is full!\n";
    }



    //display all elements
    for (int i = 0; i < used; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;





    //delete 3rd element
    int goal = 2;
    for(int i = goal + 1; i < used; i ++)
    {
        arr[i - 1] = arr[i];
    }
    used --;


    //display all elements
    for (int i = 0; i < used; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


}