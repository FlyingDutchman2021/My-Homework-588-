#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec {1,2,3,4,5,6};
    vector<int> :: iterator iter;

    iter=vec.end();
    iter--;
    vec.insert(iter,99);






    return 0;
}