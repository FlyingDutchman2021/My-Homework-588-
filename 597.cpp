#include<iostream>
#include <iomanip> // parameterized stream manipulators
using namespace std;

void Fill_array(double [], int);
void Show_array(double [], int);
void Reverse_array(double [], int);


void Fill_array (double inputArray[], int capacity){

    for (int i = 0; i < capacity; i++)
    {
        cin>>inputArray[i];
    }
    
}

void Show_array(double inputArray[], int capacity){

    for (int i = 0; i < capacity; i++)
    {
        cout<<inputArray[i]<<" ";
    }
    cout<<endl;
}

void Reverse_array(double inputArray[], int capacity){
    double temp=0;
    for (int i = 0; i < capacity/2; i++)
    {
        temp = inputArray[9-i];
        inputArray[9-i] = inputArray[i];
        inputArray[i] = temp;
        temp = 0;
    }
    
}


int main(){
    cout << fixed << setprecision( 2 );
    double a[10];
    Fill_array(a, 10);
    Show_array(a, 10);
    Reverse_array(a, 10);
    Show_array(a, 10);
    return 0;
}