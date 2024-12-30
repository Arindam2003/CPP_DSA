#include<stdio.h>
int main(){
    int cp,sp;
    float p,q;
    printf("Enter Cost Price:");
    scanf("%d",&cp);
    printf("Enter Selling Price:");
    scanf("%d",&sp);
    p=(sp-cp);
    q=p/cp*100;
    if(p>0){
        printf("Profit percent is %f",q);
    }
    else if(p<0){
        printf("Loss Percent is %f",q);
    }
    else if (p==0){
        printf("NO Profit No Loss");
    }
    return 0;;
}