#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int *T, int low, int high, int z)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (z== T[mid])
    {
        return mid;
    }
    else if (z < T[mid])
    {
        return BinarySearch(T, low, mid - 1, z);
    }
    else
    {
        return BinarySearch(T, mid + 1, high, z);
    }
}

int main()
{
    int T[] = {100,200,300,400,500,600,700};
    int n = sizeof(T) / sizeof(T[0]);
    int Z = 30;

    int result = BinarySearch(T, 0, n - 1, Z);

    if (result == -1)
    {
        cout << "Not found in the array." << endl;
    }
    else
    {
        cout << "Value found at index " << result << endl;
    }


}
