#include <bits/stdc++.h>
using namespace std;

void print(vector<int> data){
    cout << data.size() << "\n";
    for(int datam : data){
        cout << datam << " ";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // create vector
    // vector<int> data(5);
    //vector<int> data = {1,2,5};
    // data.push_back(3);
    // data.push_back(4);
    //data.insert(data.begin(),8);
    //data.insert(data.end(),9);
    //data.insert(data.begin() + 2,10);
    //data.insert(data.begin()+1,2,9);
    //print(data);
    vector<int> data1 = {1,2,3,4,5,6};
    //for(int dat:data1){
     //   cout << dat;
    //}
        data1.erase(data1.begin()+2 , data1.begin()+3);
     print(data1);

}
