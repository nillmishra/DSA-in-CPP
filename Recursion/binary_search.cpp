#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int>&v , int&   key, int s, int e){
    if(s>e){
        return -1;
    }
    int mid = (s+e)/2;
    if(v[mid]== key)
        return mid;
    if(v[mid]< key){
        return binarySearch(v, key, mid+1, e);
    }
    else{
        return binarySearch(v, key, s, mid-1);
    }
}

int main(int argc, char const *argv[])
{
    vector<int>v{10, 20, 30, 40, 50, 60, 90,99};
    int n = v.size();
    int target = 40;
    int s = 0;
    int e = n-1;
    
    int ans = binarySearch(v, target, s, e);

    cout << "Answer is: "<<ans << endl;
    
    return 0;
}

