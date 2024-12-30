#include<stdio.h>
int main(){
    int r;
    float c;
    printf("Enter radius: ");
    scanf("%d",&r);

    c=2*3.14*r;
    printf("Circumference is %f",c);
    getch ();
}