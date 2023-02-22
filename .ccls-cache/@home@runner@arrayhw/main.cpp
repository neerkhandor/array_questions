#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int duplic(vector<int>nums){
  while(nums[0]!=nums[nums[0]]){
    swap(nums[0],nums[nums[0]]);
  }
  return nums[0];
}
int dup(int arr[],int n){
  sort(arr,arr+n);
  for(int i=0;i<n-1;i++){
    if(arr[i]==arr[i+1]){
      return arr[i];
    }
  }
  return -1;
}
int duplicate(int arr[],int n){
  int ans=0;
  for(int i=0;i<n;i++){
    ans=ans^arr[i];
  }
  for(int i=0;i<n;i++){
    ans=ans^i;
  }
  return ans;
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort0sAnd1s(int arr[],int n){
  int low=0;
  int high=n-1;
  while(low<high){
    if(arr[low]==0){
      low++;
    }
    else if(arr[high]==1){
      high--;
    }
    else{
      swap(arr[low],arr[high]);
    }
  }
}
void sortAllNegative(int arr[],int n){
  int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]<0){
            low++;
        }
        else if(arr[high]>0){
            high--;
        }
        else{
            swap(arr[low],arr[high]);
        }
    }
}
int main() {
  int arr[]={-1,2,3,-4,0,5,-2};
  int n=sizeof(arr)/sizeof(arr[0]);
  sortAllNegative(arr, n);
  printArray(arr,n);
  int arr1[]={1,0,1,0,0,0,1,0};
  int n1=sizeof(arr1)/sizeof(int);
  sort0sAnd1s(arr1, n1);
  printArray(arr1, n1);
  int arr2[]={1,2,3,4,4};
  int n2=sizeof(arr2)/sizeof(int);
  int ans=duplicate(arr2, n2);
  cout<<"Duplicate Element is "<<ans<<endl;
  int ans2=dup(arr2,n2);
  cout<<ans2<<endl;
  vector<int> a{3,1,2,4,2};
  int ans3=duplic(a);
  cout<<ans3<<endl;
	return 0;
}