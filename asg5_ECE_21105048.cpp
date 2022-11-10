// NAME: PRANZAL SHARMA
// SID: 21105048
// BRANCH: ECE  


#include <iostream>
using namespace std;


// BUBBLE SORT
pair<int,int> bubbleSort(int *input, int size)
{
    int swaps = 0;
    int comparisons = 0;
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - 1 - j; i++)
        {
            if (input[i] > input[i + 1])
            {
                int temp = input[i];
                input[i] = input[i + 1];
                input[i + 1] = temp;
                swaps++;
            }
            comparisons++;
        }
    }
    pair<int,int> ans;
    ans.first = swaps;//number of swaps.
    ans.second = comparisons;//number of comparisons.
    return ans;
}



//SELECTION SORT
pair<int,int> SelectionSort(int *input,int size)
{
    int min_index;
    int swaps = 0;
    int comparisons = 0;
    for(int i=0;i<size;i++)
    {
        min_index = i;
        for(int j=i+1;j<size;j++)
        {
            if(input[j]<input[min_index])
            {
                min_index = j;
                swaps++;
            }
            comparisons++;
        }
        int temp = input[i];
        input[i] = input[min_index];
        input[min_index] = temp;
    }
    pair<int,int> ans;
    ans.first = swaps;
    ans.second = comparisons;
    return ans;
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    pair<int,int> bubble = bubbleSort(arr,n);
    pair<int,int> selection = SelectionSort(arr,n);

    cout << "COMPARISON BETWEEN SELECTION AND BUBBLE SORT. " << endl;
    cout << endl;

    cout << "1. ON THE BASIS OF NUMBER OF COMPARISONS : ";
    if(bubble.second > selection.second)
    {
        cout << "MORE COMPARSIONS ARE REQUIRED FOR BUBBLE SORT." << endl;
    }
    else if(bubble.second < selection.second)
    {
        cout << "MORE COMPARISONS ARE REQUIRED FOR SELECTION SORT." << endl;
    }
    else
    {
        cout << "BOTH REQUIRE EQUAL NUMBER OF COMPARISONS." << endl;
    }
    cout << endl;

    //second comparison

    cout << "2. ON THE BASIS OF NUMBE ROF SWAPS : ";
    if(bubble.first > selection.first)
    {
        cout << "MORE SWAPS ARE REQUIRED FOR BUBBLE SORT." << endl;
    }
    else if(bubble.first < selection.first)
    {
        cout << "MORE SWAPS ARE REQUIRED FOR SELECTION SORT." << endl;
    }
    else
    {
        cout << "BOTH REQUIRE EQUAL NUMBER OF SWAPS." << endl;
    }
    cout << endl;

    cout << "3 . Both BubbleSort and SelectionSort are In-place algorithms" << endl;

}
