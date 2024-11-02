#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()
{
    const int MAX = 100;
    int grades[MAX], used = 0;

    srand(time(0)); 

    for (int i = 0; i < 15; i++)
    {
        grades[i] = rand() % 101;
        used++;
    }


    for (int i = 0; i < used; i++)
    {
        cout << grades[i] << " ";
    }
    cout << endl;







    //add 80 to the end of the array
    if (used < MAX)
    {
        grades[used] = 80;
        used++;
    }
    else
    {
        cout << "The array is full!\n";
    }

    for (int i = 0; i < used; i++)
    {
        cout << grades[i] << " ";
    }
    cout << endl;










    //insert 20 as the new 2nd element
    if (used < MAX)
    {
        int goal = 1;
        for (int i = used - 1; i >= goal; i--)
        {
            grades[i + 1] = grades[i];
        }
        
        grades[goal] = 20;
        used++;
    }
    else
    {
        cout << "The array is full!\n";
    }

    for (int i = 0; i < used; i++)
    {
        cout << grades[i] << " ";
    }
    cout << endl;






    //delete the last element

    if (used < MAX)
    {
        if (used > 0)
        {
            used--;
        }
        else
        {
            "The array is empty!\n";
        }

    }

    for (int i = 0; i < used; i++)
    {
        cout << grades[i] << " ";
    }
    cout << endl;










    //delete the third element

    if (used >= 3)
    {
        int goal = 2;
        for (int i = goal + 1; i < used; i++)
        {
            grades[i - 1] = grades[i];
        }
        
        used--;
    }


    for (int i = 0; i < used; i++)
    {
        cout << grades[i] << " ";
    }
    cout << endl;

}