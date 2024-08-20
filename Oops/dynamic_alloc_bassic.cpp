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
    void setWeight(int weight){
        this->weight = weight;
    }

};
int main(int argc, char const *argv[])
{
    // //Dynamic Memory Alloctaion

    Animal* nill = new Animal;
    (*nill).age = 50;
    cout << "Age is: "<< (*nill).age <<endl;

    nill-> name = "Mishra ji";
    cout << "Namee is: " << nill->name <<endl;

    nill->eat(); 
    return 0;
}
