# Data Types
seperti yang di jelaskan dalam variable , variable dalam C++ harus memiliki data type yang spesifik:
contoh

```cpp
#include <iostream>
#include <string>

int main() {
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99f;    // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    std::string myText = "Hello"; // String

    std::cout << "Nilai myNum (integer): " << myNum << std::endl;
    std::cout << "Nilai myFloatNum (float): " << myFloatNum << std::endl;
    std::cout << "Nilai myDoubleNum (double): " << myDoubleNum << std::endl;
    std::cout << "Nilai myLetter (char): " << myLetter << std::endl;
    std::cout << "Nilai myBoolean (bool): " << myBoolean << std::endl;
    std::cout << "Nilai myText (string): " << myText << std::endl;

    return 0;
}

```

Basic Data Types


tipe data akan disimpan dengan informasi ukuran dan format yang spesifik :

| Data Type | Size       | Description                                                |
|-----------|------------|------------------------------------------------------------|
| boolean   | 1 byte     | Stores true or false values                                |
| char      | 1 byte     | Stores a single character/letter/number, or ASCII values  |
| int       | 2 or 4 bytes | Stores whole numbers, without decimals                     |
| float     | 4 bytes    | Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits |
| double    | 8 bytes    | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits |
```
