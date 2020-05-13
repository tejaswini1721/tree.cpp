#include<iostream>
using namespace std;

int main ()
{
    int arr[20], n, i, maximum_num, minimum_num;
    cout << "Enter size of array ";
    cin >> n;
    cout << "Enter elements array ";
    
    for (i = 0; i < n; i++)
        cin >> arr[i];
        
       
	    maximum_num = arr[0];
        for (i = 0; i < n; i++)
    {
        if (maximum_num < arr[i])
            maximum_num = arr[i];
    }
    
    minimum_num = arr[0];
    for (i = 0; i < n; i++)
    {
        if (minimum_num > arr[i])
            minimum_num = arr[i];
    }
    
    cout << "\n Largest number " << maximum_num;
    cout << "\n Smallest number " << minimum_num;
    
    return 0;
}
