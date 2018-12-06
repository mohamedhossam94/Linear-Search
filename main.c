//  Auth: Mohamed Hossam
//  Date: 26/11/2018
//  info: Linear Search with EXC

#include <stdio.h> //lib for malloc & calloc & realloc & free
#include <conio.h> // lib for input output consol printf() scanf()
#include <string.h> // lib has string fun
#include <math.h> // lib for math fun

#include "linear_search.h"


int main ()

{
    short len = 0;
    short * arr_p ;
    char cnt = 0;
    short num = 0;

    printf("enter array length: ");
    scanf("%hi", &len);

    arr_p = ( short *) malloc (len * sizeof(short));

    for(cnt = 0; cnt < len; cnt++)
    {
        printf("Enter element: ");
        scanf("%hi", arr_p + cnt);
    }

    printf("Enter Element to search: ");
    scanf("%hi", &num);

    printf("Number %hi is at %hi index", num, linear_Search(arr_p, 0, len-1, num));






}





