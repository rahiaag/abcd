1) Fabonacci Series 
why time Complexity O(2^n)
Because Every Level call function exponentially in power of 2

2) Reverse String

To initialize String with size n 
string result (n,' ')

3) Maximum and Minimum Element
Using In-Built Function

int mini = *min_element(arr.begin(), arr.end());
int maxi = *max_element(arr.begin(), arr.end());

4) Prime Number

why we use sqrt(n) in condition

We use sqrt(n) in the prime number check because:

- Factors come in pairs (e.g., for 36, pairs are 1×36, 2×18, 3×12, 4×9, 6×6).
- The smaller factor in each pair is always less than or equal to the square root of 𝑛

5) Merge Two Sorted Array

arr1=arr3 // Copying Element of arr3 in arr1

6) Count Number of Vowels and Consonent

unordered_set<char>vowels={'a','e','i','o','u'};


// end() refers to an iterator that points one past the last element of a container, such as a vector, set, or map.
// An iterator in C++ is an object (like a pointer) that allows you to traverse or navigate through the elements of a container

    for (int i=0;i<s.size();i++)
        if (vowels.find(s[i])!=vowels.end())


7) Second Largest Number in Array

// Creating a min-heap using priority_queue
    priority_queue<int, vector<int>, greater<int>> minHeap;

int: Type of the elements (you can replace this with other types like float, string, etc.).
vector<int>: The underlying container used to store the heap elements (you can use other containers like deque too).
greater<int>: The comparator that ensures the smallest element is treated as the "top" of the heap, making it a min-heap.

8) Permuation wala nahi hua

9) Matrix Transpose

vector<vector<int>> value(m, vector<int>(n, 0));
    /*
     The original matrix has n rows and m columns.
     The transposed matrix should have m rows and
     n columns (swap the dimensions).
     */

matrix[0] refers to the first row, and .size() on it gives the number of elements in that row, i.e., the number of columns.

10) Power of Number
- Recursive stack call


11)  ArmStrong Number

An Armstrong number is a number that is equal to the sum of its digits, each raised to the power of the number of digits.