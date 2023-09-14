#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossibleSolution(vector<int> cooksRank, int nP, int mid) {
    int currP = 0;
    for (int i = 0; i < cooksRank.size(); i++) {
       int R = cooksRank[i], j=1;
       int timeTaken =0;
       while(true){
        if(timeTaken + j * R<= mid){
            ++currP;
            timeTaken += j*R;
            ++j;
        }
        else{
            break;
        }
       }
       if(currP >= nP){
            return true;
       }
    }
    return false;
}

int minTimeToCompleteOrder(vector<int>cooksRank, int nP){
    int start =0;
    int highestRank = *max_element(cooksRank.begin(), cooksRank.end());
    int  end = highestRank * (nP*(nP+1)/2);
    int ans = -1;

    while (start <= end) {
        long long int mid = (start + end) / 2;
        if (isPossibleSolution(cooksRank, nP, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int T; cin >>T; //test case
    while(T--){
        int nP, nC;
        cin >> nP >> nC;
        vector<int>cookRank;
        while(nC--){
            int R;
            cin >> R;
            cookRank.push_back(R);
        }
    cout << minTimeToCompleteOrder(cookRank,nP)<<endl;

    }
    return 0;
}