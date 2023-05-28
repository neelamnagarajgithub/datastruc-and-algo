// a cpp program on all operations over arrays.
#include <iostream>
using namespace std;
class op_on_arrays
{
public:
    int key;
    int ind;
     ;int t;

public:
    void traverse(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
    }
    void insert(int arr[], int n)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[ind] = key;
    }
    void deletion(int arr[], int n)
    {
        for (int i = ind; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    void bub_sort(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    t = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = t;
                }
            }
        }
    }
    int lin_ser(int arr[], int n, int ser)
    {
        int flag = 0, index;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == ser)
            {
                flag = 1;
                index = i;
                break;
            }
        }
        if (flag == 0)
            return -1;
        if (flag == 1)
            return index;
    }

} p1;
int main()
{
    int n, key, ind, ser, y;
    int arr[100];
    cout << "enter the number of elements of the array";
    cin >> n;
    cout << "the elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "insertion of key element started";
    cout << endl;
    cout << "enter the key element:";
    cin >> p1.key;
    cout << "enter the index where it shoud be entered";
    cin >> p1.ind;
    p1.insert(arr, n);
    n = n + 1;
    cout << "the array after insertion:";
    p1.traverse(arr, n);
    cout << " deletion of element started";
    p1.deletion(arr, n);
    n = n - 1;
    p1.traverse(arr, n);
    cout << "the element at index given in time of insertion is deleted successfully:" << endl;
    cout << "sorting of elements started";
    p1.bub_sort(arr, n);
    p1.traverse(arr, n);
    cout << "elements are sorted successfully" << endl;
    cout << "linear search process started" << endl;
    cout << "enter the element to be searched" << endl;
    cin >> ser;
    y = p1.lin_ser(arr, n, ser);
    if (y != -1)
    {
        cout << "element found at" << y << endl;
    }
    else
    {
        cout << "element not found";
    }
    return 0;
}