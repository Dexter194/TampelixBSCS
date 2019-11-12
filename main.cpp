#include <iostream>
#include <stdlib.h>
using namespace std;

int inputArraysize();
void inputArray(int[]);
void displayArray(int[]);
void choosearray(int[]);
int arrSize;

int main()
{
     int age[arrSize];
     inputArray(age);
     displayArray(age);

    return 0;
}

int inputArraySize()
{
    int age [arrSize];

    cout << "Enter Array Size 3 or 4: ";
    cin >> arrSize;

return arrSize;

}

void inputArray(int age[])
{
    inputArraySize();
    for (int i=0; i<=arrSize-1;i++){
    cout << "Enter value for position " << i + 1 << " : ";
    cin >> age[i];
    }
}


void displayArray (int age [])
{
system("CLS");

    for (int i=0; i<=arrSize-1;i++)
    {
     cout << "The value at position " << i + 1 << " is " << age[i] << endl;
    }

choosearray(age);

}

void choosearray (int age[])
{
    int choice;
    cout << "\n Choose an array that you want to display : ";
     cin >> choice;

     if (choice == 1){
         cout << "The value at position 1 is "<< age [0] << endl;
     }
     if (choice == 2){
         cout << "The value at position 2 is "<< age [1] << endl;
     }
     if (choice == 3){
         cout << "The value at position 3 is "<< age [2] << endl;
     }
     if (choice == 4){
         cout << "The value at position 4 is "<< age [3] << endl;
     }
}


