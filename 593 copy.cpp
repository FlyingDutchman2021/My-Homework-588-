#include <iostream>
#include <iomanip>
using namespace std;


float minNumber(float num1, float num2, float num3){
    float output;
    if (num1 <= num2 && num1 <= num3){
        output = num1;
    }else
    if(num2 <= num1 && num2 <= num3){
        output = num2;
    }else
    if (num3 <= num1 && num3 <= num2){
        output = num3;
    }

    return output;
}




int main(){
    cout<<fixed<<showpoint<<setprecision(2);
    float inputNumbers[3]={0,0,0};

    while (1) {
        cin>>inputNumbers[0];
        if (inputNumbers[0] == -1){
            break;
        }
        cin>>inputNumbers[1]>>inputNumbers[2];

        cout<<minNumber(inputNumbers[0], inputNumbers[1], inputNumbers[2])<<endl;
        
    }


    return 0;
}