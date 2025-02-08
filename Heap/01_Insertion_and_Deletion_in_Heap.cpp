#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int> arr;

    MaxHeap()
    {
        arr.push_back(-1); // Dummy value at index 0 for 1-based indexing
    }

    void insertion(int val)
    {
        arr.push_back(val);

        // arr.size() - 1 gives the index of the last inserted element in the heap
        int index = arr.size() - 1;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void deletion()
    { // we always delete from the top

        if (arr.size() == 1)
        {
            cout << "Nothing to Delete" << endl;
            return;
        }
        int n = arr.size();
        arr[1] = arr[n];
        arr.pop_back();

        // Take root node to the correct Position

        int index = 1;

        while (index < n)
        {
            int leftIndex = 2 * index;
            int rightIndex = (2 * index) + 1;

            if (leftIndex < n && arr[leftIndex] > arr[index])
            {
                swap(arr[leftIndex], arr[index]);
                index = leftIndex;
            }
            else if (rightIndex < n && arr[rightIndex] > arr[index])
            {
                swap(arr[rightIndex], arr[index]);
                index = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
    void printArray()
    {
        for (int i = 1; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    MaxHeap obj;
    obj.insertion(1);
    obj.insertion(10);
    obj.insertion(32);
    obj.insertion(5);
    obj.insertion(12);
    obj.insertion(78);
    obj.insertion(13);
    obj.insertion(19);
    obj.printArray();
    cout << endl;
    obj.deletion();
    obj.printArray();

    return 0;
}