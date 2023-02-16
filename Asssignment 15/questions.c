
// //1. Write a function to find the greatest number from the given array of any size. (TSRS)
// #include <stdio.h>
// int greatestNum(int b[], int n)
// {
//     int max = 0;
//     printf("Enter %d Numbers", n);
//     for (int i = 0; i <= 9; i++)
//     {
//         scanf("%d", &b[i]);
//         if (b[i] > max)
//             max = b[i];
//     }
//     return max;
// }
// int main()
// {
//     int s, a[10];
//     s = greatestNum(a, 10);
//     printf("%d is highest ", s);

//     return 0;
// }

// // // 2. Write a function to find the small number from the given array of any size. (TSRS)
// #include <stdio.h>
// int smallest(int b[], int a)
// {
//     int small = 0;
//     printf("Enter %d Numbers", a);
//     for (int i = 0; i < a; i++)
//     {

//         scanf("%d", &b[i]);
//         if (i == 0)
//             small = b[i];
//         if (b[i] < small)
//             small = b[i];
//     }
//     return small;
// }
// int main()
// {
//     int ar[5];
//     printf("%d is smallest", smallest(ar, 5));

//     return 0;
// }

// // 3. Write a function to sort an array of any size. (TSRS)
// #include <stdio.h>
// void sort(int b[], int n)
// {
//     printf("Enter %d Numbers", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             if (b[i] < b[j])
//             {
//                 int temp;
//                 temp = b[i];
//                 b[i] = b[j];
//                 b[j] = temp;
//             }

//     for (int i = 0; i < n;i++)
//         printf("%d ", b[i]);
// }
// int main()
// {
//     int a[10];
//     sort(a, 10);
// }

// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

// #include <stdio.h>
// void rotateArr(int b[], int n)
// {
//     int i, j;
//     int rotation;
//     int temp, position;
//     int m = n;
//     printf("Enter %d Numbers", n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &b[i]);
//     printf("Enter rotation :\n press 1 for left rotation \n press 2 for right rotation\n");
//     scanf("%d", &rotation);
//     printf("Enter Position");
//     scanf("%d", &position);
//     if (rotation == 1)
//     {

//         for (i = 0; i < position; i++)
//         {
//             temp = b[0];
//             for (j = 0; j < n; j++)
//             {
//                 b[j] = b[j + 1];
//             }
//             b[n - 1] = temp;
//         }
//         for (int i = 0; i < n; i++)
//             printf("%d ", b[i]);
//     }
//     if (rotation == 2)
//     {

//         for (i = 0; i < position; i++)
//         {
//             temp = b[n - 1];
//             for (j = n - 1; j >= 0; j--)
//             {
//                 b[j] = b[j - 1];
//             }
//             b[0] = temp;
//         }
//         for (int j = 0; j < n; j++)
//             printf("%d ", b[j]);
//     }
// }

// int main()

// {
//     int arr[5];
//     rotateArr(arr, 5);

//     return 0;
// }



// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.

// #include <stdio.h>
// int AdjacentDuplicate(int b[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (b[i] == b[i + 1])
//             return b[i];
//     }
//     return 0;
// }
// int main()
// {
//     int a;
//     printf("Enter the size of an array");
//     scanf("%d", &a);
//     int array[a];
//     printf("Enter the Element in array");
//     for (int i = 0; i < a; i++)
//         scanf("%d", &array[i]);
//     int s = AdjacentDuplicate(array, a);
//     if (s == 0)
//         printf("There is no duplicate adjacent value");
//     else
//         printf("%d is duplicate",s);
//     return 0;
// }

// // 6. Write a function in C to read n number of values in an array and display it in reverse
// // order.
// #include <stdio.h>
// void ReverseArray(int b[], int a)
// {

//     printf("Enter %d Numbers", a);
//     for (int i = 0; i < a; i++)
//         scanf("%d", &b[i]);
//     for (int i = a - 1; i >= 0; i--)
//         printf("%d ", b[i]);
// }
// int main()
// {
//     int ar[5];
//     ReverseArray(ar, 5);

//     return 0;
// }

// // 7. Write a function in C to count a total number of duplicate elements in an array.

// #include <stdio.h>
// void ReverseArray(int b[], int a)
// {

//     printf("Enter %d Numbers", a);
//     for (int i = 0; i < a; i++)
//         scanf("%d", &b[i]);
//     for (int i = a - 1; i >= 0; i--)
//         printf("%d ", b[i]);
// }
// int main()
// {
//     int ar[5];
//     ReverseArray(ar, 5);

//     return 0;
// }

// 8. Write a function in C to print all unique elements in an array.

// #include <stdio.h>
// void uniqueNum(int ar[], int n)
// {
//     printf("Enter %d Numbers \n", n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &ar[i]);
//     printf("Unique Number :");
//     for (int i = 0; i < n; i++)
//     {
//         int flag = 0;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (ar[i] == ar[j])
//                 flag++;
//         }
//         if (flag == 0)
//             printf(" %d ", ar[i]);
//         if (flag == 1)
//             i = i + 1;
//     }
// }

// int main()
// {
//     int size;
//     printf("Enter the size of array");
//     scanf("%d", &size);
//     int b[size];

//     uniqueNum(b, size);

//     return 0;
// }

// // 9. Write a function in C to merge two arrays of the same size sorted in descending

// // order.#include <stdio.h>
// void mergeArray(int a[], int b[], int first, int second)
// {
//     int third = first + second, k = 0;
//     int c[k], i = 0, j = 0, x;
//     for (k = 0; k < third; k++)
//     {
//         if (i >= 5)
//         {
//             while (k < third)
//             {
//                 c[k] = b[j];
//                 k++;
//                 j++;
//                 if (k == third)
//                     break;
//             }
//         }
//         else if (a[i] < b[j])
//         {
//             c[k] = a[i];
//             i++;
//         }
//         else if (j >= 5)
//         {
//             while (k < third)
//             {
//                 c[k] = a[i];
//                 k++;
//                 i++;
//                 if (k == third)
//                     break;
//             }
//         }
//         else
//         {
//             c[k] = b[j];
//             j++;
//         }
//     }

//     printf("Here's the Array : ");
//     for (int k = 0; k < third; k++)
//         printf("%d ", c[k]);
// }
// int main()
// {
//     int first, second;
//     printf("Enter size of first array");
//     scanf("%d", &first);
//     int a[first];
//     printf("Enter element in first arrary");
//     for (int i = 0; i < first; i++)
//         scanf("%d", &a[i]);

//     printf("Enter size of second array");
//     scanf("%d", &second);
//     int b[second];
//     printf("Enter Element in second array");
//     for (int j = 0; j < second; j++)
//         scanf("%d", &b[j]);

//     printf("\n \n");
//     mergeArray(a, b, first, second);
// }

// // 10. Write a function in C to count the frequency of each element of an array.
// #include <stdio.h>
// int maxNum(int b[], int n)
// {
//     int max = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (max < b[i])
//             max = b[i];
//     }
//     return max;
// }
// void frequency(int b[], int size)
// {
//     int hash[10] = {0};
//     for (int i = 0; i < size; i++)
//     {
//         hash[b[i]] += 1;
//     }
//     for (int i = 0; i < size; i++)
//         printf("%d is %d times \n", b[i], hash[b[i]]);
// }
// int main()
// {
//     int n;
//     printf("Enter size of an array");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter Element in array");
//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     // lets assume greatest number in array is 10
//     frequency(arr, n);
//     return 0;
// }