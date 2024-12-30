#include <stdio.h>
int main(){
    int num,i,j,count;
    printf ("Enter a Number: ");
    scanf ("%d", &num);

    for (i=num+1; i<=2*num; i++){
            count=0;
        for (j=2; j<=i/2; j++){

            if (i % j==0){
                count++;
                break;
            }
        }
        if (count == 0 && i !=1){
            printf ("%d",i);
            break;
        }
        
    }
    return 0;
}
