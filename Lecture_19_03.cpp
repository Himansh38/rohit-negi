#include <iostream>
using namespace std;

// printing the character 
int main()
{
    char arr[100];
    int n;
    cout << "Enter the number of characters";
    cin >> n;
    cout << "Enter the charaters";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 1; i++)
    {
        int index;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // return 0 ;
}
