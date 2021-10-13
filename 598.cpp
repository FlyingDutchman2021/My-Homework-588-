#include <iostream>
using namespace std;

int main(){

    int input1, input2;
    int result=1;

    while(1){

        input1=0,input2=0,result=1;



        cin>>input1;

        if (input1 == 0){
            break;
        }

        cin>>input2;

        for (int i = 0; i < input2; i++)
        {
            result = result * input1;
        }

        cout<<result<<endl;
        
    }


    return 0;
}