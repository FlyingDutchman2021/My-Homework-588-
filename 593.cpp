#include <iostream>
#include <iomanip>
using namespace std;


void minNumber(double *num1, double *num2, double *num3){

    if (*num1 <= *num2 && *num1 <= *num3){
        cout<< *num1<<endl;
    }else
    if(*num2 <= *num1 && *num2 <= *num3){
        cout<< *num2<<endl;
    }else
    if (*num3 <= *num1 && *num3 <= *num2){
        cout<< *num3<<endl;
    }
}




int main(){
    cout<<fixed<<showpoint<<setprecision(2);
    double inputNumbers[3]={0,0,0};

    while (1) {
        cin>>inputNumbers[0];
        if (inputNumbers[0] == -1){
            break;
        }
        cin>>inputNumbers[1]>>inputNumbers[2];

        minNumber(&inputNumbers[0], &inputNumbers[1], &inputNumbers[2]);
        
    }


    return 0;
}