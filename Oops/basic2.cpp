#include <iostream>
using namespace std;
class Animal{
    //state of properties 
    private:
    int weight;
    public:
    int age;
    string type;
    //default constructor

    Animal(){
        this -> weight = 0;
        this -> age =0;
        this -> type = "";
        cout << "Constructor Called" << endl;
    }

    //parameterisied constructor
    Animal(int age){
        this->age = age;
        cout << "Parametrised Constructor called" <<endl;

    }
    Animal(int age, int  weight){
        this->age = age;
        this ->weight = weight; 
        cout << "Parametrised Constructor 2 called" <<endl;
    }

    //copy constructor 
    Animal(Animal &obj){
        this -> age = obj.age;
        this -> weight = obj.weight;
        this -> type = obj.type;
        cout << "I am inside copy constructor" <<endl;
    }


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
    void setWeight(int weight){
        this->weight = weight;
    }

    void print(){
        cout << this->age << " " << this->weight << " " << this->type << endl;
    }

};
int main(int argc, char const *argv[])
{
    Animal a;
    a.age = 10;
    a.setWeight(101);
    a.type ="nill";


    Animal b = a;
    cout << "a->";
    a.print();
    cout << "b->";
    b.print();

    a.type[0] = 'G';
    cout << "a->" ;
    a.print();
    return 0;
}
