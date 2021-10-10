#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    const double price1=2.98, price2=4.50, price3=9.98, price4=4.49, price5=6.87;
    double total1=0, total2=0, total3=0, total4=0, total5=0;
    int code=0, itemNumbers=0;
    bool continueOrNot = true;

    while (continueOrNot == true){
        cin>>code;

        switch (code){
            case 1:
                cin>>itemNumbers;
                total1 += price1 * itemNumbers;
                break;
            case 2:
                cin>>itemNumbers;
                total2 += price2 * itemNumbers;
                break;
            case 3:
                cin>>itemNumbers;
                total3 += price3 * itemNumbers;
                break;
            case 4:
                cin>>itemNumbers;
                total4 += price4 * itemNumbers;
                break;
            case 5:
                cin>>itemNumbers;
                total5 += price5 * itemNumbers;
                break;
            default:
                cout<<fixed<<showpoint<<setprecision(2);
                cout<<"Product 1: $"<<total1<<endl;
                cout<<"Product 2: $"<<total2<<endl;
                cout<<"Product 3: $"<<total3<<endl;
                cout<<"Product 4: $"<<total4<<endl;
                cout<<"Product 5: $"<<total5<<endl;
                cout<<"total: $"<<total1+total2+total3+total4+total5<<endl;
                continueOrNot = false;
            
        }
    }



    return 0;
}