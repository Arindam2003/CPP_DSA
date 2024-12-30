#include <stdio.h>
int main(){

    int a,b,orgn_max,orgn_min,max,min,rem;

    printf ("Enter a Number: ");
    scanf ("%d", &a);
    printf ("Enter another Number: ");
    scanf ("%d", &b);

    max = a > b ? a : b;
    min = a < b ? a : b;

    orgn_max = max;
    orgn_min =  min;
    int count = 0;
    int flag = 0;
    while ( max % min >= 0){
        rem = max % min;
        if (rem == 0){
            count++;
            break;
        }
        else if (rem == 1){
            flag++;
            break;
        }
        max = min;
        min = rem ;
        
        
    }
    printf("%d",flag);
    if (count == 1){
        printf ("Not co-prime");
    }
    else if (flag>=1){
        printf ("%d and %d is co prime",orgn_max,orgn_min);

    }

    
}