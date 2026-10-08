#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int sum = 0;

    for(int i = 0; i < n; i++)
        sum += arr[i];

    float average = (float)sum / n;

    printf("Average = %.2f\n", average);

    return 0;
}
