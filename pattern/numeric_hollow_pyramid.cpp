 #include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int r =0; r < n; r++){
         //space
           for (int c =0; c < n -r -1;c++){ //n - r-  1 = n - (r + 1) 
                cout << " ";
             }

             
             int start =1;
            for (int c =0; c < 2*r + 1; c++){ // row  + 1
                if(r==0 || r==n-1){
                    if(c%2 == 0){
                        cout<<start;
                        start = start + 1;
                    }
                    else{
                        cout <<" ";
                    }
                }
                else{
                    if(c == 0){
                        cout << 1;
                    }
                    else if(c ==2*r+1 -1){
                        cout << r + 1;
                    }
                    else{
                        cout << " ";
                    }
                }
            }
            cout<<endl;
        }   
    }