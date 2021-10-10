#include <iostream>
using namespace std;

int main(){

    string input;
    double rate=0,numberOfUsers=1;
    int counter=0;

    while (1){
        counter =0;
        numberOfUsers=1;
        cin>>input;
        if (input == "-1"){
            break;
        }
        rate = stoi(input)*0.01;

        while (numberOfUsers < 2.5){
            numberOfUsers *= (1 + rate);
            counter += 1;
        }
        cout<<counter<<endl;

    }



    return 0;
}