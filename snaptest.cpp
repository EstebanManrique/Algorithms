#include <iostream>
#include <Snap.h>

using namespace std;

int main()
{
    TVec<TInt> A;
    A.Add(10);
    A.Add(20);
    A.Add(30);
    printf("Length %d", A.Len());
}