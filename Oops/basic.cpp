#include <iostream>
using namespace std;
class Animal{
    //state of properties 
    private:
    int weight;
    public:
    int age;
    string name;

    //behaviour 

    void eat()
    {
        cout << "Eating" <<endl;
    }
    void sleep(){
        cout << "Sleeping " <<endl;
    }

    int getWeight(){
        return weight;
    }
    void setWeight(int w){
        weight = w;
    }

};
int main(int argc, char const *argv[])
{
    //cout << "Size of Empty Class is: "<< sizeof(Animal) << endl;
    // Object Creation

    //Static Memory Alloction
    Animal nill;
    nill.age = 20;
    nill.name = "Lion";
    cout << "Age of nill is: " << nill.age << endl;
    cout << "Age of ramesh: "<<nill.name << endl;


    nill.eat();

    nill.sleep();
    nill.setWeight(101);
    cout << "weight: " <<nill.getWeight() << endl;
    
    return 0;
}
