#include<bits/stdc++.h>
using namespace std;

int *Merge(int *A, int *B, int n, int m)
{
    int i = 0, j = 0, k = 0;
    int s;
    int* C = new int[n + m];

    while (i <= n - 1 && j <= m - 1)
        {

        if (A[i] > B[j])
         {
            C[k++] = B[j++];
         }
     else
        {
            C[k++] = A[i++];
        }

        }

    while (i <= n - 1)
        {
        C[k++] = A[i++];
        }

    while (j <= m - 1)
        {
        C[k++] = B[j++];
        }


  return C;
}

void printarray(int *C,int s)
{
    cout<< "merged array:"<<endl;
    for(int x=0;x<s;x++)
    {
        cout<<C[x]<< " ";
    }
}

int main()
{
    int A[]={55,60,65,70,75,80};
    int B[]={20,25,30,35,45,50};

    int n=sizeof(A)/sizeof(A[0]);
    int m=sizeof(B)/sizeof(B[0]);

  int *p = Merge(A, B, n, m);
  printarray(p,m+n);

}
