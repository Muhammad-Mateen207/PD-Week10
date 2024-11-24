#include <iostream>
using namespace std;

bool Check_Array(int arr[], int n);

int main() 
{
    int num;
    cout << "Enter the number of elements to store in the array: ";
    cin >> num;
    int arr[num];
    cout << "Enter the elements of the array one by one: ";
    for (int i = 0; i < num; i++) 
    {
        cin >> arr[i];
    }
    if (Check_Array(arr, num)) {
        cout << "True";
    } 
    else 
    {
        cout << "False";
    }
}
bool Check_Array(int arr[], int num) 
{
    if (num == 0 || num ==1) 
    {
        return true; 
    }
    for (int i = 0; i < num - 1; i++) 
    {
        for (int j = 0; j < num - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 1; i < num; i++) 
    {
        if (arr[i] == arr[i - 1]) 
        {
            return false; 
        }
        if (arr[i] - arr[i - 1] != 1) 
        {
            return false; 
        }
    }
    return true; 
}
