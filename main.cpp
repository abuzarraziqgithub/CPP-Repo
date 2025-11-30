#include<iostream>
// #include "Hero.cpp"
using namespace std;

class Hero {
    
    private:
    int health = 100;

    public:
    char level = 'A';

    // getters and setters
    // can read and manipulate the private data
    int getHealth() {
        return health;
    }

    void setHealth(int h){
        health = h;
    }
    
};

int main(){

    // static allocation
    Hero a;
    // Acessing the data
    cout << a.getHealth() << endl << a.level << endl;

    // dynamic allocation
    Hero *b = new Hero;
    // Derefrencing = fetching the actuall values of the adress
    cout << (*b).getHealth() << endl << (*b).level << endl;
    // we can also print/access the values using arrow key
    cout << b->getHealth() << endl << b->level << endl;


    Hero abuzar;
    abuzar.setHealth(100);
    abuzar.level = 'A';

    cout << "ABUZAR  - Health is: " << abuzar.getHealth() << endl;
    cout << "ABUZAR  - Level is: " << abuzar.level << endl;

    int *i = new int;
    string *str = new string;
    cout << sizeof(i) << endl;
    cout << str;

}