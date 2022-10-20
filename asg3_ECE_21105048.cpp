// PRANZAL SHARMA
// 21105048
// ECE





#include <iostream>                     
using namespace std;         

// We assume that the array given is SORTED

// In case we don't know the size of array:
//   we will find "Key's" upper and lower bounds using binary expansion


int binary_search(int arr[],int i,int j,int key){
    int mid=(i+j)/2; 
    while(i<=j){   //i=starting index j=ending index
    if(arr[mid]==key){return mid;}
    else{
        if(arr[mid]<key){i=mid+1;}
        else{j=mid-1;}
    }
    mid=(i+j)/2;
    }
    return -1;  // when element is not present we will return -1
}

int find_Limit_and_binaryS(int arr[],int key){
    //Initializing i as 0 and j as 1.
    int i=0,j=1;
    //We will increase j until arr[j] exceeds key to be searched.
    while(arr[j]<key){
        i=j; // Lower limit
        j=2*j;  // Upper limit
    }
    //Now calling Simple Binary Search on range i to j.
    return binary_search(arr,i,j,key);
}

int main(){
  int arr[] = { 10, 20, 30, 40};
  int key,index;
  cin>>key;
  index=find_Limit_and_binary(arr,key);
  cout<<index;
}
