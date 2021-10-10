#include <iostream>
#include <vector>
using namespace std;

int main(){

    int inputNumber=0, numbers[1050],iter2=0;
    for (int i = 0; i < 1050; i++)
    {
        numbers[i]=0;
    }

    vector<int> numbersInOrder;


    while (1){
        //initialize
        inputNumber=0;
        iter2=0;
        numbersInOrder.clear();

        //judge exit
        cin>>inputNumber;
        if(inputNumber == -1){
            break;
        }else{

            //input all numbers
            for (int i = 0; i < inputNumber; i++)
            {
                cin>>numbers[i];
            }

            //take 2 numbers in the group
            numbersInOrder.push_back(numbers[0]);
            if (numbers[1]>numbers[0]){
                numbersInOrder.push_back(numbers[1]);
            }else{
                numbersInOrder.insert(numbersInOrder.begin(),numbers[1]);
            }

            for (int i = 2; i < inputNumber; i++)
            {
                //place in order for 1 onumber
                
                    vector<int>::iterator iter=numbersInOrder.begin();
                    
                    if ( numbers[i] >= numbersInOrder.back()){
                        numbersInOrder.push_back(numbers[i]);
                    }else{
                        for (iter2 = 0 ; iter2 < numbersInOrder.size();iter++, iter2++){
                            if ( numbers[i] < numbersInOrder[iter2]){
                                numbersInOrder.insert(iter, numbers[i]);
                                break;
                            }
                        }
                    }
                    
            }
            
            

            for (int outputNumber : numbersInOrder){
                cout<<outputNumber<<" ";
            }
            cout<<endl;

        }
    }

    return 0;
}