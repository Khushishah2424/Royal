
// Input: nums = [1,5,0,3,5]
// Output: 3
// Explanation:
// In the first operation, choose x = 1. Now, nums = [0,4,0,2,4].
// In the second operation, choose x = 2. Now, nums = [0,2,0,0,2].
// In the third operation, choose x = 2. Now, nums = [0,0,0,0,0].


// Input: nums = [1,5,0,3,5] { when u subtract u have to subtract with all but not if its zero }

// 1 5 0 3 5 
// -1 .
// 0 4 0 2 4 
// -2 
// 0 2 0 0 2 
// -2 
// 0 0 0 0  0
// #include<stdio.h>

// int main(){
//     int SIZE ;
//     printf("Enter SIZE :");
//     scanf("%d",&SIZE);

//     int a[SIZE];
//     for(int i = 0 ; i < SIZE ; i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i = 0 ; i < SIZE ; i++){
//         printf("%d",a[i]);
//     }

//     int min = a[0]; //1
//     for(int i = 0 ; i < SIZE ; i++){
//         if(a[i] == 0){
//             continue;
//         }
//         if(min == 0 || min>a[i]){
//             min = a[i];
//         }
//     }
//     printf("\nmin = %d",min);
// }
#include <stdio.h>

void subtract(int arr[], int n, int min)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[i] -= min;
        }
    }
}

int allZero(int arr[], int n)
{
    int i, flag = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            flag = 1;
            return flag;
            break;
        }
    }

    return flag;
}
int mini(int arr[] , int n){
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != 0 && (min == 0 || min > arr[i]))
        {
            min = arr[i];
        }
    }
}

int main()
{
    int SIZE,min;
    printf("Enter the number of values you want to enter:\n");
    scanf("%d", &SIZE);
    int arr[SIZE];

    printf("Enter the values:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    int flag,count=0;
    while (1)
    {
        flag = allZero(arr, SIZE);
        if (flag == 1)
        {
            count++;
            min = mini(arr,SIZE);
            printf("The minimum element is %d\n", min);

            subtract(arr, SIZE, min);

            printf("After subtraction:\n");
            for (int i = 0; i < SIZE; i++)
            {
                printf("%d\n", arr[i]);
            }
        }
        else
        {
            printf("\ntotal subtraction : %d\n", count);
            break;

        }
}
    return 0;
}

