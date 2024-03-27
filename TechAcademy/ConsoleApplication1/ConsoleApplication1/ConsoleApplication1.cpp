#include <iostream>
#include <string>

using namespace std;

class Dog {
private:
    string breed;
    string color;
    int height;
    int weight;

public:

    Dog(string _breed, string _color, int _height, int _weight) :
        breed(_breed), color(_color), height(_height), weight(_weight) {}

    // Behaviors
    void shake() {
        cout << "Dog can shake hands." << endl;
    }

    void sit() {
        cout << "Dog can sit." << endl;
    }

    void laydown() {
        cout << "Dog can lay down." << endl;
    }

    void setBreed(string _breed) {
        breed = _breed;
    }

    void setColor(string _color) {
        color = _color;
    }

    void setHeight(int _height) {
        height = _height;
    }

    void setWeight(int _weight) {
        weight = _weight;
    }

    string getBreed() const {
        return breed;
    }

    string getColor() const {
        return color;
    }

    double getHeight() const {
        return height;
    }

    double getWeight() const {
        return weight;
    }
};

int main() {
    // Dog object
    Dog myDog("Hound", "Brown", 24, 60);

    // Display state
    cout << "Atributtes of dog:" << endl;
    cout << "Breed: " << myDog.getBreed() << endl;
    cout << "Color: " << myDog.getColor() << endl;
    cout << "Height: " << myDog.getHeight() << " inches" << endl;
    cout << "Weight: " << myDog.getWeight() << " lbs" << endl;

    // Executes Behavior
    myDog.shake();
    myDog.sit();
    myDog.laydown();

    return 0;
}
