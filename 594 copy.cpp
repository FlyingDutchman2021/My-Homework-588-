#include <iostream>
using namespace std;

void square( int side )
{
    for (int i = 0; i < side; i++)
    {
        for (int i = 0; i < side; i++){
            cout<<"*";
        }
        cout<<endl;
    }
    
} // end function square

int main()
{
   unsigned int side = 0; // input side length
   while (true)
   {
      cin>> side;
      if (side == 0)
         break;
      square( side ); // display solid square of asterisks
      cout << endl;
   }
} // end main