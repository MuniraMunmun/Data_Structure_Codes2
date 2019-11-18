#include <iostream>
#define N 11
using namespace std;
int Partition(int A[],int p,int r);
int Arr[N+1];
int QuickSort(int A[],int p, int r)
{
if (p<r)
{
int q = Partition(A,p,r);
QuickSort(A,p,q-1);
QuickSort(A,q+1,r);
}
else
return 0;
}
int Partition(int A[],int p,int r)
{
int x = A[r];
int i = p-1;
for(int j = p;j<r;j++)
{
if(A[j]<=x)
{
i = i+1;
int temp = A[i];
A[i] = A[j];
A[j] = temp;
}
}
int temp = A[i+1];
A[i+1] = A[r];
A[r] = temp;
return i+1;
}
int main()
{
for(int i=1;i<=N;i++)
cin >> Arr[i];
QuickSort(Arr,1,11);
for(int i=1;i<=N;i++)
cout << Arr[i] << " ";
}
