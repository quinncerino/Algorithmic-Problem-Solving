#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

const int MAX = 100;

//this function displays the menu of operation choices to the user
void menu();

//this function returns the largest number in the array
int largestNumber(int arr[], int used);

//this function returns the smallest number in the array
int smallestNumber(int arr[], int used);

//this function calculates and returns the median number of the array
double medianNumber(int arr[], int used);

//this function calculates and returns the average of the numbers in the array
double average(int arr[], int used);

//this function sorts the array elements from least to greatest value
void selectionSort(int arr[], int used);

//this function displays all the elements in the array
void display(int arr[], int used);

//this function allows the user to enter new data values to the array
void insertNewNum(int arr[], int & used);

//this function terminates the program
void quit();

//this function swaps two variables, changing their values in main memory
void swap(int & n1, int & n2);

//this function is used and called in selectionSort to find the index of the next smallest number in the sorting process
int smallestIndex(int arr[], int i, int used);


int main()
{
    int arr[MAX];
    int used = 0;
    int operation;

    while(true)
    {
        menu();

        cin >> operation;
        switch(operation)
        {
            case 1:
                insertNewNum(arr, used);
                break;
            
            case 2:
                cout << "The largest number is " << largestNumber(arr, used);
                cout << endl;
                break;
            
            case 3:
                cout << "The smallest number is " << smallestNumber(arr, used);
                cout << endl;
                break;
            
            case 4:
                cout << "The median is " << medianNumber(arr, used);
                cout << endl;
                break;

            case 5:
                cout << "The average is " << average(arr, used);
                cout << endl;
                break;

            case 6:
                selectionSort(arr, used);
                display(arr, used);
                break;
            
            case 7:
                quit();
            
            default:
                cout << "This is not a valid operation!" << endl;
                break;
        }
        cout << endl;
    }
    
}

void menu()
{
    cout << "Choose from the following operations:\n";
    cout << "1. Enter a number\n";
    cout << "2. Display largest\n";
    cout << "3. Display smallest\n";
    cout << "4. Display median\n";
    cout << "5. Display average\n";
    cout << "6. Display all the numbers in ascending order\n";
    cout << "7. Quit\n";
    cout << endl;
}



int largestNumber(int arr[], int used)
{
    int largest = arr[0];
    for (int i = 1; i < used; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

int smallestNumber(int arr[], int used)
{
    int smallest = arr[0];
    for (int i = 1; i < used; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    
    return smallest;
}



double medianNumber(int arr[], int used)
{
    double median;

    if (used % 2 == 1)
    {
        int medianIndex = used / 2;
        
        median = arr[medianIndex];
    }

    else
    {
        int medianIndex1 = used / 2;
        int medianIndex2 = used / 2 - 1;

        median = (arr[medianIndex1] + arr[medianIndex2]) / (double)2;
    }

    return median;
}


double average(int arr[], int used)
{
    double sum = 0, average;

    for (int i = 0; i < used; i++)
    {
        sum += arr[i];
    }

    average = sum / used;
    return average;
}


void display(int arr[], int used)
{
    for(int i = 0; i < used; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertNewNum(int arr[], int & used)
{
    char enter = 'Y';

    int newElement;

    if (used < MAX)
    {
        while (enter == 'Y' || enter == 'y')
        {
            cout << "Enter new value: ";
            cin >> newElement;
            arr[used] = newElement;
            used ++;
            selectionSort(arr, used);

            cout << "Do you want to enter another value? (Y / N): ";
            cin >> enter;
        }
    }
    else
    {
        cout << "The array is full!" << endl;
    }

    selectionSort(arr, used);
    
}

void quit()
{
    exit(0);
}


void swap(int & n1, int & n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void selectionSort(int arr[], int used)
{
    for (int i = 0; i < used - 1; i++)
    {
        int smallest = smallestIndex(arr, i, used);
        swap(arr[i], arr[smallest]);
    }
}

int smallestIndex(int arr[], int i, int used)
{
    int s = i;
    for (int j = i; j < used; j++)
    {
        if (arr[j] < arr[s])
        {
            s = j;
        }
    }
    return s;
}
