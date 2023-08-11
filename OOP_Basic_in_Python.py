class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    def say_hello(self):
        print(f"Hello, my name is {self.name} and I'm {self.age} years old.")

# Creating objects of the Person class
person1 = Person("Alice", 25)
person2 = Person("Bob", 30)

# Calling methods on objects
person1.say_hello()
person2.say_hello()