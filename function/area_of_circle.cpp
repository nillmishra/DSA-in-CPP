#include<iostream>
using namespace std;
float areaofCIrcle(float r){
    float area= 3.14 * r * r;
    return area;
}
int main (){
    float r;
    cin >>r;
    float area = areaofCIrcle(r);
    cout <<area;
}