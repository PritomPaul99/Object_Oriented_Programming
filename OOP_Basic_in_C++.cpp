#include<bits/stdc++.h>

using namespace std;

class Person {
public:
    Person(const string& name, int age) : name(name), age(age) {}
    
    void say_hello() {
        cout << "Hello, my name is " << name << " and I'm " << age << " years old." << endl;
    }

private:
    string name;
    int age;
};

int main() {
    // Creating objects of the Person class
    Person person1("Alice", 25);
    Person person2("Bob", 30);

    // Calling methods on objects
    person1.say_hello();
    person2.say_hello();

    return 0;
}
