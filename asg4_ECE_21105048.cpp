// PRANZAL SHARMA
// 21105048
// ECE

// In-place Sorting: Sorting that takes place without allocating any extra memory, typically within the same array/list. Typically done by swapping values around in the same array.

// Out-of-place Sorting: Sorting Algorithms that need extra memory while sorting. They typically create a new array/list into which the output is sorted.




#include <iostream>
using namespace std;

// IN PLACE
void insertionSortIP(int arr[],int n){
    //Initialising variables i and j
    int i=0,j=i+1;
    while(j<=n-1){
        int temp=arr[j];
        while(i>=0){
            if(arr[i]>temp){
                arr[i+1]=arr[i];
                i--;
            }
            if(i==-1){arr[0]=temp;break;}
            if(arr[i]<=temp){arr[i+1]=temp;break;}
        }
        j++;
        i=j-1;
    }
    return;
}

// OUT PLACE
void insertionSortOP(int arr[],int s,int e){
    //s=starting index
    //e=ending index
    if(s==e){return;}
    int temp=arr[s+1];
    while(s>=0){
        if(arr[s]>temp){
            arr[s+1]=arr[s];
            s--;
        }
        if(s==-1){arr[0]=temp;break;}
        if(arr[s]<=temp){arr[s+1]=temp;break;}
    }
    insertionSortOP(arr,s+1,e);
}



/*
In-place techniques have lesser space complexity but are difficult to 
apply in algorithm whereas out-place techniques are easy to aplly but 
increases the space complexity of algorithm.*/

// IN-PLACE algorithm are used in Bubble sort, Selection Sort etc.

// OUT-PLACE algorithm is used in Merge Sort, Because merge sort requires O(n) extra space.
