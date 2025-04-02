#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std; 


int findLargest(int a, int b, int c)
{
    int largest;
    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > a && b > c)
    {
        largest = b;
    }
    else if (c > a && c > b)
    {
        largest = c;
    }
    cout << largest << " is the largest.";
    return largest;
}




int main()
{
    const int MAX = 100;
    int used = 0;

    srand(time(0));

    //declare array
    int arr[MAX];


    //initialize array (partially filled, 30 elements out of max 100)
    for (int i = 0; i < 30; i++)
    {
        arr[i] = rand() % 51;    //range 0 to 50
        used ++;
    }

    //display array
    for (int i = 0; i < used; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;





    //insert 40 at the end
    if (used < MAX)
    {
        arr[used] = 40;
        used++;
    }


    //display array
    for (int i = 0; i < used; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;




    //insert 25 as the new 4th element
    if (used < MAX)
    {
        int goal = 3;
        for (int i = used - 1; i >= goal; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[goal] = 25;
        used++;
    }


    //display array
    for (int i = 0; i < used; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    





    //delete the last element
    used--;

    //display array
    for (int i = 0; i < used; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;




    //delete the 2nd element
    int goal = 1;
    for (int i = goal + 1; i < used; i++)
    {
        arr[i - 1] = arr[i];
    }
    used--;


    //display array
    for (int i = 0; i < used; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    int a, b, c;
    cout << "Function time! Enter 3 integers: ";
    cin >> a >> b >> c;

    findLargest(a, b, c);


}