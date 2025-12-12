#include<bits/stdc++.h>
using namespace std;
vector<int> input()
{
    vector<int> data;
    int n;
    cin >> n;
    while(n--)
    {
        int d;
        cin >> d;
        data.push_back(d);
    }
    return data;
}
//vector<int> reverse(vector<int>data){
//    int ln = data.size();
//  vector<int> rdata;
//for(int i=ln-1;i>=0;i--){
//rdata.push_back(data[i]);
//}
//return rdata;

//}
vector<int> reverse(vector<int> data)
{
    vector<int> rdata;
    while(!data.empty())
    {
        int le = data.back();
        rdata.push_back(le);
        data.pop_back();

    }
    return rdata;
}
void output (vector<int>rdata)
{
    for(int d:rdata)
    {
        cout<<d << " ";
    }
    cout<<"\n";
}
int main()
{
    vector<int> data;
    data = input();
    data = reverse(data);
    output(data);

}
