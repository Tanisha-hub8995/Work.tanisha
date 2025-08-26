#include<stdio.h> //define header file
void mergeSort(int arr[],int p,int r);
void mergeSort(int arr[],int p,int r,int q);
void printArray(int arr[],int size);


int main()
{
    int arr[]={56,78,10,9,54,2,24};
    int n = size of (arr[])/size of (arr[0]);

    
     printf("Given array is\n");
     printArray(arr,arr_size);

     mergeSort(arr,0,arr_size);

     printf("\nSorted array is \n");
     printArray(arr,arr_size);

     return 0;

}
void mergeSort(int arr[],int q,int r,int p)
 {
     int i,j,k;
     int n1=q-p+1;
     int n2=r-q;
     int L[n1],R[n2];
     for (i=0;i<n1;i++)
     {
        L[i]=arr[p+i];
     }
     for (j=0;j<n2;j++)
     {
        R[j]=arr[q+1+j];

     }

     i=0;
     j=0;
     k=p;
     while(i<n1 && j<n2)
     {
        if(L[i]<=R[j]){
          arr[k]=L[i];

          i++;

        }
        else
        {
          arr[k]=R[j];
          j++;
        }
        k++;
     }
      while (i<n1)
     {
      arr[k]=L[i];
      i++;
      k++;
     }
     while(i<n2)++g
     {
      arr[k]=R[j];
      k++;
      j++;

     } 
     void mergeSort(int arr[],int p,int r){
     if(p<r)
     {
      int q=(p+r)/2;
      mergeSort(arr,p,q);
      mergeSort(arr,q+1,r);
      merge(arr,p,q,r);
     }
     }
     void printArray(int arr[],int size)
     {
      int i;
      for(i=0;i<size;i++)
      {
         printf("%d\t",arr[i]);
         
      }
      printf("\n");
     }

 } 
  






