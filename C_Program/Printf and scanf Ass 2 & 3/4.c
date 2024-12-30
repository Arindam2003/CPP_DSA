#include<stdio.h>
int main(){
    int a,b,c,v;
    printf("Enter three side: ");
    scanf("%d%d%d",&a,&b,&c);

    v=a*b*c;
    printf("Volume of cuboide is: %d",v);
    getch();
}