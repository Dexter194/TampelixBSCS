#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int arrSize;
void getBasicinfo(string[],string[],int[],int[],string[],string[]);
void disPlayarray(string[],string[],int[],int[],string[],string[]);
int main()
{
    string fname[10];
    string lname[10];
    int age[10];
    int contact[10];
    string email[10];
    string address[10];
    getBasicinfo(fname,lname,age,contact,email,address);
    disPlayarray(fname,lname,age,contact,email,address);


    return 0;
}

int inputarrSize()
{
    int age [arrSize];

    cout <<" Enter Array Size:";
    cin >> arrSize;

    return arrSize;
}

void getBasicinfo(string fname[],string lname[],int age[],int contact[],string email[],string address[])
{
    inputarrSize();
    for (int i=0;i<arrSize;i++){
    cout <<" Firstname "<< ":";
    cin >> fname[i];
    }
    for (int i=0;i<arrSize;i++){
    cout <<" Lastname "<< ":";
    cin >> lname[i];
    }
    for (int i=0;i<arrSize;i++){
    cout <<" Age "<< ":";
    cin >> age[i];
    }
    for (int i=0;i<arrSize;i++){
    cout <<" Contact "<< ":";
    cin >> contact[i];
    }
    for (int i=0;i<arrSize;i++){
    cout <<" Email "<< ":";
    cin >> email[i];
    }
    for (int i=0;i<arrSize;i++){
    cout <<" Address "<< ":";
    cin >> address[i];
    }
}
void disPlayarray(string fname[], string lname[],int age[],int contact[],string email[],string address[])
{
    system ("CLS");
      for (int i=0;i<arrSize;i++){
    cout << "\tFirstname"<< setw(10)<< "Lastname"<< setw(10)<< "Age"<< setw(10)<< "Contact"<< setw(10)<<"E-mail"<<setw(10)<<"Address"<<setw(10)<<endl;
    cout <<fname[i]<<setw(10)<<"|"<<  lname[i]<<setw(10)<<"|"<<  age[i]<<setw(10)<<"|"<<contact[i]<<setw(10)<<"|"<< email[i]<<setw(10)<<"|"<< address[i]<<setw(10)<<endl;
      }
}
