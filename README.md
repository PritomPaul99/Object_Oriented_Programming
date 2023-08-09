# Object Oriented Programming (OOP)

>● What is Object **Oriented Programming or OOP**?\
> ***Object-oriented programming (OOP)*** is a computer programming model that organizes software design around data, or objects, rather than functions and logic. An object can be defined as a data field that has unique attributes and behavior. [[Resource: Tech Target](https://www.techtarget.com/searchapparchitecture/definition/object-oriented-programming-OOP#:~:text=Object%2Doriented%20programming%20(OOP)%20is%20a%20computer%20programming%20model%20that%20organizes%20software%20design%20around%20data%2C%20or%20objects%2C%20rather%20than%20functions%20and%20logic.%20An%20object%20can%20be%20defined%20as%20a%20data%20field%20that%20has%20unique%20attributes%20and%20behavior.)]

The word 'Object Oriented' is combination of two word, `Object` and `Oriented`. The `Object` word means 'a entity that exists in real life'. And `Oriented` means 'interested in a particular thing'. So, basically, OOP means programming in a pattern that is build around a *object*.

---
Key difference between `Structured Programming` and `Object Oriented Programming`:

- **Abstraction:** `OOP` provides a higher level of abstraction through objects and classes, allowing you to model real-world entities more naturally. `Structured programming` relies on procedures/functions.
- **Data Encapsulation:** `OOP` enforces data encapsulation and access control through access specifiers (public, private, protected), preventing unauthorized access to data. Which can not be found in `Structured Programming`.
- **Code Reusability:** `OOP` promotes code reusability through inheritance and composition. Structured programming also supports reuse through function calls.
- **Real-World Modeling:** `OOP` aligns well with modeling real-world scenarios and relationships. `Structured programming` is often used for algorithms and tasks with clear step-by-step procedures.

---

## The building blocks of OOP

- **Classes:** A class is a blueprint for creating objects. It defines a structure that describes the attributes and behaviors that objects created from the class will have.
- **Attributes:** Attributes are the properties or data associated with a class. They define the characteristics of objects created from the class.
- **Methods:** Methods are functions defined within a class that can perform actions or provide behaviors for the objects created from the class.
- **Objects:** An object is an instance of a class. It is a concrete realization of the class's blueprint, containing specific values for its attributes.

![A simple example of OOP's building blocks](images\whatis-object_oriented_programming.png)

For example, here is simple OOP code in `Python`,

```python
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
```

here we define,

- `Person` as a `Class` using 'class' keyword.
- In this `Person` class `name` and `age` are the attributes that stores the name and the age of the person.
- There are two `methods` called `__init__` and `say_hello`.
  - The `__init__` method a special method called constructor. It initializes the object's attributes when an object is created. It takes self (a reference to the object) as its first parameter.
  - The `say_hello` method is a custom method that prints a message introducing the person using their name and age.
- `person1` and `person2` are objects created from the `Person` class. They have their own name and age attributes.

When you run the code, it creates two `Person` objects, `person1` and `person2`. Each object has its own `name` and `age` attributes, which are set when the object is created. The `say_hello` method is then called on each object, printing a message that introduces each person with their respective name and age.

Here is the output of the code,

```yml
Hello, my name is Alice and I'm 25 years old.
Hello, my name is Bob and I'm 30 years old.
```

---

## Principles of OOP

- **Encapsulation:** Child classes inherit data and behaviors from the parent class.
- **Abstraction:** Containing information in an object, exposing only selected information.
- **Inheritance:** Only exposing high-level public methods for accessing an object.
- **Polymorphism:** Many methods can do the same task.

Each of the topic have been discussed in this repository. We will mainly use `Python` & `C++` as our programming language. I hope I will also add `Java` & `JavaScript` in the future. Let me know if there are any mistakes, I will appreciate it. Contact me through `pritompaul1920@outlook.com`.

Happy coding! 👍
# Object_Oriented_Programming
