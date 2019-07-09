#include"iostream.h"
#include"conio.h"

void merge(int arr[],low,mid,high){
	int n1,n2,k=0;
	n1=mid-low;
	n2=high-mid;
	int l[n1],r[n2];
	for(int i=0;i<n1;i++){
      l[i]=arr[low+i];
	}
	for(int i=0;i<n2;i++){
      r[i]=arr[mid+i];
	}
	for(int i)

}
void merge_sort(int arr[],int low,int high){
  int mid;
  if(low<high){
    mid=(high-low)/2;
    merge_sort(arr[],low,mid);
    merge_sort(arr[],mid+1,high);
    merge(arr[],low,mid,high);
  }
	
}