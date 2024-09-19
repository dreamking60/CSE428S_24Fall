# Cpp Note

## Template
type parameter 
nontype parameter (like unsigned)

### Fucntion Templates
Function Templates is something like Java Generics, it allows us to write a function satisfying several kinds of data types such as int, float and double.

```C++
#include <iostream>

// Define a function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Use the function template with different data types
    std::cout << "Integers: " << add(3, 4) << std::endl;        // Uses add<int>
    std::cout << "Floats: " << add(3.5, 4.2) << std::endl;      // Uses add<float>
    std::cout << "Doubles: " << add(5.6, 7.8) << std::endl;     // Uses add<double>

    return 0;
}
```


## Class Templates
Class Templates is similar to Java Generics. But compiler's ability to deduce parameter types of class templates is often less than for function templates, which means that we should directly write down the detail type of parameter when we use it.

```c++
#include <iostream>

// Define a class template
template <typename T>
class Box {
private:
    T value;  // Member variable of type T
public:
    Box(T val) : value(val) {}  // Constructor

    void setValue(T val) { value = val; }  // Set the value
    T getValue() const { return value; }  // Get the value

    void printValue() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Box<int> intBox(123);       // Instantiate a Box for int
    intBox.printValue();        // Output: Value: 123

    Box<double> doubleBox(456.78);  // Instantiate a Box for double
    doubleBox.printValue();        // Output: Value: 456.78

    return 0;
}
```


## Pointer & reference
0x0070 7 i
0x0078 4 j

int *p = &i;
0x007c 0x0070 p

baz:
p = &j
0x007c 0x0078 p

return *p


