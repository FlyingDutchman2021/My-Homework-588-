#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string input1,input2;
    double rate1, rate2;
    cin>>input1>>input2;
    rate1 = stoi(input1)*0.01;
    rate2 = stoi(input2)*0.01;
    cout<<rate1<<" "<<rate2<<endl;
}
