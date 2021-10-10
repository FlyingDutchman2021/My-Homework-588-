#include <iostream>
#include <vector>
using namespace std;



int main(){

    vector<int> series{0,1};

    int layerLevel=0, num1=0, num2=0;

    while (1){
        cin>>layerLevel;
        if (layerLevel == -1){
            break;
        }

        if (layerLevel >2){
            layerLevel -= 2;
            for (int i = 0; i < layerLevel; i++)
            {
                num1=series[series.size()-2];
                num2=series[series.size()-1];
                series.push_back(num1+num2);
            }
            layerLevel += 2;
            
        }

        for (int i = 0; i < layerLevel; i++)
        {
            cout<<series[i];
            if (i != layerLevel -1){
                cout<<",";
            }
        }
        cout<<endl;
        


    }



    return 0;
}