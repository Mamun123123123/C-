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
    vector<int> data(5); 
    print(data);
}
