#include <iostream>
using namespace std;


void timeInterval(int *smallerTime, int *largerTime){
    int tempHour=0, tempMinute=0, tempSecond=0;
    tempHour = *largerTime - *smallerTime;
    largerTime ++;
    smallerTime ++;

    tempMinute = *largerTime - *smallerTime;
    largerTime ++;
    smallerTime ++;

    tempSecond = *largerTime - *smallerTime;
    largerTime ++;
    smallerTime ++;

    cout<<tempSecond + tempMinute*60 + tempHour * 3600<<endl;
}


int main(){

    int time1[3], time2[3];

    while (1){
        cin>>time1[0];
        if (time1[0] == -1){
            break;
        }
        cin>>time1[1]>>time1[2]>>time2[0]>>time2[1]>>time2[2];

        if (time1[0] > time2[0]){
            //2 is smaller
            timeInterval(&time2[0], &time1[0]);
        }else
        if (time1[0] < time2[0]){
            //1 is smaller
            timeInterval(&time1[0], &time2[0]);
        }else{

            if (time1[1] > time2[1]){
                //2 is smaller
                timeInterval(&time2[0], &time1[0]);
             }else
             if (time1[1] < time2[1]){
                 //1 is smaller
                 timeInterval(&time1[0], &time2[0]);
             }else{
            
                 if (time1[2] > time2[2]){
                    //2 is smaller
                    timeInterval(&time2[0], &time1[0]);
                    }else
                    if (time1[2] < time2[2]){
                     //1 is smaller
                     timeInterval(&time1[0], &time2[0]);
                    }else{

                        cout<<"0"<<endl;
            
                    }




              }



        }
    }


    return 0;
}