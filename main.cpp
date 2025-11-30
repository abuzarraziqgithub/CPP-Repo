#include<iostream>
// #include "Hero.cpp"
using namespace std;

class Hero {
    
    private:
    int health;

    public:
    char level;

    // getters and setters
    // can read and manipulate the private data
    int getHealth() {
        return health;
    }
    void setHealth(int h){
        health = h;
    }

    void print(){
        cout<< level << endl;
    }

    // Constructor: Default constructor initialized when/during creation of instance, with no input paras, no return type { Hero abuzar ---> abuzar.Hero()-> This is default constructor called automatically}
    
    Hero(){
        // cout << "Contructor Called!";
    }
    
    // Parametarized Constructor
    Hero(int health) {
        // this is a pointer to the current object
        // cout << "this -> " << this << endl;
        this->health = health;
    }

    Hero(int health, char level) {
        this-> level = level;
        this-> health = health;
    }
};

int main(){

    // static allocation
    Hero a(10);
    // Accessing the address of the instance
    // cout << "Address of a: " << &a << endl;
    a.print();

    // Dynamic allocation
    Hero *c = new  Hero(20);
    c->print();



    cout<< "\n";

    // Acessing the data
    a.setHealth(70);
    a.level = 'A';

    cout << "A - Health: " << a.getHealth() << "\t" << "A - Level: " << a.level << endl;

    // dynamic allocation
    Hero *b = new Hero;

    // Accessing the data
    b->setHealth(40);
    b->level = 'B';
    
    // Derefrencing = fetching the actuall values of the adress
    cout <<"B - Health: " << (*b).getHealth() << "\t" << "B - Level: " << (*b).level << endl;
    // we can also print/access the values using arrow key
    cout <<"B - Health(Arrow way): " << b->getHealth() << "\t" << "B - Health(Arrow way):    " << b->level << endl;

    // int *i = new int;
    // string *str = new string;
    // cout << sizeof(i) << endl;
    // cout << str;

}