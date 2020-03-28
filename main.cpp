#include <iostream>

using namespace std;

int max(int *iptr[], int n);

int main(){
    int n, i;
    int array[100];
    int *iptr[100];
    cin >> n;
    for (i = 0; i < n; i++){
        cin >> array[(i + 3) % n];
        iptr[i] = &(array[(i + 3) % n]);
    }
    cout << endl;
    cout << max(iptr, n);

    return 0;
}

int max(int *iptr[], int n)
{
    int max = *iptr[0];
    for(int i=1; i<n; i++)
    {
        if(max < *iptr[i])
            max = *iptr[i];
    }
    return max;
}