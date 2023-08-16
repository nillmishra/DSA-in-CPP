#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int target =4;
    vector<int>v{1,2,4,4,4,6,7};
    auto ans = lower_bound(v.begin(), v.end(), target);
    cout <<"ans is "<< ans - v.begin() << endl;
    return 0;

}
