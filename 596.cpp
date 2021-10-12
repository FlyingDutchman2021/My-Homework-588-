#include <iostream>
using namespace std;

bool isPerfect( unsigned int ); // function prototype
void printSum( unsigned int ); // function prototype


bool isPerfect( unsigned int input ){

    unsigned int counter = 0;
    unsigned int factors [1000];
    unsigned int sumOfFactors = 0;

    for (unsigned int i=1; i< input; i++){
        if ( input % i == 0){
            factors[counter] = i;
            counter ++;
        }
    }

    for (int i = 0; i < counter; i++)
    {
        sumOfFactors += factors[i];
    }

    if (sumOfFactors == input){
        return true;
    }else{
        return false;
    }
    
}




void printSum (unsigned int input){

    unsigned int counter = 0;
    unsigned int factors [1000];

    for (int i=0; i<1000; i++){
        factors[i]=0;
    }


    for (unsigned int i=1; i< input; i++){
        if ( input % i == 0){
            factors[counter] = i;
            counter ++;
        }
    }

    cout<<input<<" = ";
    for (unsigned int i=0; i<counter - 1; i++){
        cout<<factors[i]<<" + ";
    }
    cout<<factors[counter-1]<<endl;
}


int main()
{
   // cout << "Perfect integers between 1 and 1000:" << endl;
   int maxnum = 0;
   while(true){
      cin>>maxnum;
      if (maxnum == -1)
         break;
      // loop from 2 to maxnum
      for ( unsigned int j = 2; j <= maxnum; ++j )
      {
         // if current integer is perfect 
         if ( isPerfect( j ) ) 
            printSum( j ); // print it as sum of factors
      } // end for
      cout << endl;
   }

} // end main