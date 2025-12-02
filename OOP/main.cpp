#include<iostream>
#include <cstring>
// #include "Hero.cpp"
using namespace std;

class Hero {
    
    private:
    int health;

    public:
    char *name;
    char level;


    // Constructor: Default constructor initialized when/during creation of instance, with no input paras, no return type { Hero abuzar ---> abuzar.Hero()-> This is default constructor called automatically}
    // Hero(){
    //     cout << "Simple/default constructor called" << endl;
    //     name = new char[100];
    // }

    // getters and setters
    // can read and manipulate the private data
    int getHealth() {
        return health;
    }
    void setHealth(int h){
        health = h;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    void print(){
        cout << "Health" << "\t" << this->health << endl;
        cout<<"Level" << "\t" << this->level << endl;
        cout<<"Name" << "\t" << this->name << endl;
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


    // Copy constructor
    Hero(Hero& /*Pass by reference so it can pass the exact object*/ temp) {

        char *ch =  new char[strlen(temp.name) + 1]; // ?
        strcpy(ch, temp.name);

        cout << "Copy constructor called"<< endl;
        this->health = temp.health;
        this->level = temp.level;
        this->name = temp.name;
    }

};

int main(){

    Hero hero1;
    hero1.setHealth(60);
    hero1.level = 'H';
    char name[7] = "Abuzar";
    hero1.setName(name);

    hero1.print();

    Hero hero2(hero1);
    hero2.print();

    hero1.name[3] = 'b';
    hero1.setHealth(50);
    hero1.print();
    hero2.print();
    // It will result in the same, because we are copying the address of the name(*name pointer) and when we change the first char of the name, the name pointer in the 2nd object also pointing to that same memory address.
    // Shallow copy(default copy constructor): same memory access






    // Hero shafqat;
    // shafqat.setHealth(40);
    // shafqat.level = 'S';
    // shafqat.print();

    // // Copy Constructor
    // Hero essa(shafqat);
    // essa.print();
    // // essa.setHealth = shafqat.setHealth;
    // // essa.level = shafqat.level;



    // // static allocation
    // Hero a(10);
    // // Accessing the address of the instance
    // // cout << "Address of a: " << &a << endl;
    // a.print();

    // // Dynamic allocation
    // Hero *c = new  Hero(20);
    // c->print();



    // cout<< "\n";

    // // Acessing the data
    // a.setHealth(70);
    // a.level = 'A';

    // cout << "A - Health: " << a.getHealth() << "\t" << "A - Level: " << a.level << endl;

    // // dynamic allocation
    // Hero *b = new Hero;

    // // Accessing the data
    // b->setHealth(40);
    // b->level = 'B';
    
    // // Derefrencing = fetching the actuall values of the adress
    // cout <<"B - Health: " << (*b).getHealth() << "\t" << "B - Level: " << (*b).level << endl;
    // // we can also print/access the values using arrow key
    // cout <<"B - Health(Arrow way): " << b->getHealth() << "\t" << "B - Health(Arrow way):    " << b->level << endl;

    // // int *i = new int;
    // // string *str = new string;
    // // cout << sizeof(i) << endl;
    // // cout << str;

}