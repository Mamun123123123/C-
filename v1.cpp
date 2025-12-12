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
    vector<int> data = {1,2,5};
    // data.push_back(3);
    // data.push_back(4);
    data.insert(data.begin(),8);
    data.insert(data.end(),9);
    print(data);
}
