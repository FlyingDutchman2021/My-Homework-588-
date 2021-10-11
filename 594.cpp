#include <iostream>
using namespace std;

int main(){

    int inputLevel = 0;

    while(1){
        //initialize
        inputLevel = 0;
        cin>>inputLevel;
        if (inputLevel == 0){
            break;
        }
        for (int i=0; i<inputLevel; i++){
            for (int i=0; i<inputLevel; i++){
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
    }


    return 0;
}