#include<stdio.h>
int main(){
    int x,a,b,sum,subs,mul,div;
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Substract\n");
    printf("Enter 3 for Multy\n");
    printf("Enter 4 for Dvide\n");
    printf("Enter 5 for Exit\n");
    printf("Enter Your Choice: ");

    scanf("%d",&x);

    switch (x)
    {
    case 1:
        printf("Enter Two Number:");
        scanf("%d %d",&a,&b);
        sum=a+b;
        printf("Sum is %d",sum);
        break;
    case 2:
        printf("Enter Two Number:");
        scanf("%d %d",&a,&b);
        subs=a-b;
        printf("Subs is %d",subs);
        break;
    case 3:
        printf("Enter Two Number:");
        scanf("%d %d",&a,&b);
        mul=a*b;
        printf("Multy is %d",mul);
        break;
    case 4:
        printf("Enter Two Number:");
        scanf("%d %d",&a,&b);
        div=a/b;
        printf("Div is %d",div);
        break;
    case 5:
        break;
    }

}