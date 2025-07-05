#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &arr, int left, int right, int mid)
{
    vector<int> temp;
    int i = left;
    int j = mid + 1;
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= right)
    {
        temp.push_back(arr[j++]);
    }
    for (int k = 0; k < temp.size(); k++)
    {
        arr[k + left] = temp[k];
    }
}

void Sort(vector<int> &brr, int left, int right)
{

    if (left >= right)
        return;
    int mid = (left + right) / 2;
    Sort(brr, left, mid);
    Sort(brr, mid + 1, right);
    Merge(brr, left, right, mid);
}
int main()
{
    vector<int> arr = {2, 1, 4, 3, 5, 6};
    Sort(arr, 0, arr.size() - 1);
    cout << "the sorted array is : ";
    for (int m : arr)
    {
        cout << m << " ";
    }
}
