#include<iostream>

using namespace std;


void reorder (int & num1, int & num2);
void enter(int & num1, int & num2);
void display(int num1, int num2);
void swap(int & n1, int & n2);


int main()
{
    int n1, n2;
    enter(n1, n2);
    cout << "The numbers you entered: ";
    display(n1, n2);

    reorder(n1, n2);
    cout << "The numbers in order greatest to least: ";
    display(n1, n2);


}


//swaps two numbers (by calling the swap function) if the first number hold the largest value, and changes their value in main memory
void reorder(int & num1, int & num2) //& because may need to change the value, if greater
{
    if (num2 > num1)
    {
        swap(num1, num2);
    }

}

//allows user to enter two variables' values and store their new values in main memory
void enter(int & num1, int & num2) //& bc changing the value
{
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;
}

//displays two numbers
void display(int num1, int num2)
{
    cout << num1 << " " << num2;
    cout << endl;
}


//swaps two values a and b, and changes their value in main memory because using call by reference
void swap(int & num1, int & num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;

}
