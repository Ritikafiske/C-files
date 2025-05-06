#include <iostream>
using namespace std;


class Animal {
private:
    string species_name;

public:

    
    Animal(const string& name) : species_name(name) {
        cout << "Animal constructor called" << endl;
    }

    void show_species() const {
        cout << "This animal belongs to the species: " << species_name << endl;
    }
};


class WingedAnimal : virtual public Animal {
public:
    
    WingedAnimal(const string& name) : Animal(name) {
        cout << "WingedAnimal constructor called" << endl;
    }
};


class Mammal : virtual public Animal {
public:
    
    Mammal(const string& name) : Animal(name) {
        cout << "Mammals constructor called" << endl;
    }
};


class Bat : public WingedAnimal, public Mammal {
public:
   
    Bat() : Animal("Bat"), WingedAnimal("Bat"), Mammal("Bat") {
    }

    void show_info() {
        cout << endl << "It's a unique animal! Here are some details:" << endl;
        
         
        show_species();
    }
};

int main() {
    Bat my_bat;
    my_bat.show_info();
    return 0;
}
