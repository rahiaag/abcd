/*
Padding and Alignment in OOP (with Example)

Definition:
    - Alignment ensures that data is arranged in memory efficiently, allowing the CPU to access it quickly.
    - Padding refers to the extra space added between data members to maintain alignment.

Example:
For a 32-bit processor (word size = 4 bytes), consider this class:  (for 64-bit word size= 8 bytes)

class Example {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
};

Without Padding:
- `char a`: 1 byte
- `int b`: 4 bytes
- `char c`: 1 byte
- Expected size: 6 bytes (1 + 4 + 1)

With Alignment and Padding:
- To align `int b` on a 4-byte boundary, padding is added:
  1. `char a`: 1 byte at address 0
  2. Padding: 3 bytes after `a`
  3. `int b`: 4 bytes at address 4
  4. `char c`: 1 byte at address 8
  5. Padding: 3 bytes after `c` (to align structure size)

Memory Layout:
| a (1 byte) | padding (3 bytes) | b (4 bytes) | c (1 byte) | padding (3 bytes) |

Final Size: 12 bytes (1 + 3 + 4 + 1 + 3)

Why Padding and Alignment Matter:
- Alignment ensures efficient CPU data access.
- Padding adds the extra bytes needed to achieve alignment.
- This improves performance but may increase memory usage.

Faster Data Access:

- The CPU reads memory in chunks (4 bytes, 8 bytes, etc., depending on the system).
  If data is not aligned to these boundaries, the CPU has to do extra work (read multiple memory chunks) to fetch the data.
  Prevents Errors:

- Some systems or CPUs require data to be aligned properly. Misaligned data can cause program crashes or errors.
  Optimized Memory Usage:

- Proper alignment reduces the overhead of padding while ensuring smooth data access, balancing performance and memory.
  Real-Life Example: Think of alignment like parking a car in a garage:

- If the car (data) is parked perfectly (aligned), you can park other cars efficiently.
- If the car is parked awkwardly (misaligned), you waste space and take more time to adjust (CPU needs extra steps).

alignment often uses padding, which might seem like wasted space. However, the trade-off is better performance

*/

#include <iostream>
using namespace std;

class BadAlignment // Demonstrates inefficient alignment
{
public:
    double x; // 8 bytes (aligned to 8 bytes)
    int z;    // 4 bytes
    char a;   // 1 byte
    int b;    // 4 bytes
    char c;   // 1 byte
};

class GoodAlignment // Demonstrates efficient alignment
{
public: 
    int a;    // 4 bytes
    int b;    // 4 bytes
    double q; // 8 bytes (aligned to 8 bytes)
};

int main()
{
    BadAlignment obj1;
    cout << "Size of BadAlignment: " << sizeof(obj1) << " bytes" << endl;

    GoodAlignment obj2;
    cout << "Size of GoodAlignment: " << sizeof(obj2) << " bytes" << endl;

    return 0;
}
