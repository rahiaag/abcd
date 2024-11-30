/*
Padding and Alignment in OOP (with Example)

Alignment refers to the way of data arrangement in organized way.alignment ensures that the CPU accessed data efficiently
 **Padding** is the extra space added to ensure this alignment.

padding refers to the extra bytes that are inserted between data members of a class to ensure that they align properly in memory

Example:
Let's consider a `class` in C++:
! all these cases are for 32 bit processor (it might happen that your computer will be of 64 bit so size of word will be 8 byte)

class Example {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
};


Without Padding:
- `char a`: 1 byte
- `int b`: 4 bytes
- `char c`: 1 byte
- Total expected size: 6 bytes (1 + 4 + 1)

With Alignment and Padding:
To align `int b` on a 4-byte boundary, the compiler adds padding:

1. `char a`: 1 byte at address 0
2.  Padding : 3 bytes added after `a` (to align `int b`)
3. `int b`: 4 bytes at address 4
4. `char c`: 1 byte at address 8
5.  Padding: 3 bytes added after `c` (to align the structure size)

Memory Layout:
```
| a (1 byte) | padding (3 bytes) | b (4 bytes) | c (1 byte) | padding (3 bytes) |
```

Final Size:
- Total size with padding: 12 bytes (1 + 3 + 4 + 1 + 3)

Why Padding and Alignment Matter:
- Alignment ensures that the CPU accesses data efficiently by placing it at memory addresses that match its size (e.g., `int` at a multiple of 4).
- Padding adds the necessary extra bytes to achieve this alignment, which may increase the overall memory usage of a structure or class.

This balance between alignment (for speed) and padding (extra memory usage) is crucial in optimizing both performance and memory efficiency.

*/

// Memory alignment is usually based on powers of two, such as 1-byte, 2-byte, 4-byte, 8-byte, etc., because this aligns well with how most CPUs access memory efficiently.

// We take size according to the processor. 32 bit processor means 4 byte and 64 bit means 8 byte size of word

// Padding is always done but we need to ensure that no extra spaces should be there that's why alignment is important

#include <bits/stdc++.h>
using namespace std;

class Example // Bad Alignment and Padding
{
public:
    double x;
    int z;
    char a;
    int b;
    char c;
};

class Example2 // Good Alignment and Padding
{
public: // 64 bit processor so 8 byte
    int a;
    int b;
    double q;
};

int main()
{
    Example obj1;
    cout << sizeof(obj1) << endl;
    Example2 obj2;
    cout << sizeof(obj2) << endl;
    return 0;
}
