#include <iostream>
#include<string.h>
using namespace std;
int getLength(char name[]){
    int length =0;
    int i =0;
    while(name[i] != '\0'){
    length++;
    i++;
}
return length;
}
int main(){
    char name[100];
    cin >> name;

    // cout << name <<endl;

//     for(int i =0; i < 10; i++){
//         cout <<"index is : " << i <<" value : "<<name[i]<<endl;
//     }

    
// int value = (int)name[9];
// cout <<"value is : "<< value <<endl;

//cin.getline(name, 100);
cout << name<< endl;
cout << "length of string: "<< getLength(name) <<endl;
cout << "length of string: "<< strlen(name) <<endl;
}

