#include<stdio.h>
int main(){
    int num;
    printf("Enter Month Number:");
    scanf("%d",&num);
    switch(num){
        case 1:{
            printf("January 31 Days");
            break;
        }
        case 2:{
            printf("February 28 Days");
            break;
        }
        case 3:{
            printf("March 31 Days");
            break;
        }
        case 4:{
            printf("April 30 Days");
            break;
        }
        case 5:{
            printf("May 31 Days");
            break;
        }
        case 6:{
            printf("June 30 Days");
            break;
        }
        case 7:{
            printf("July 31 Days");
            break;
        }
        case 8:{
            printf("August 31 Days");
            break;
        }
        case 9:{
            printf("Septembar 30 Days");
            break;
        }
        case 10:{
            printf("Octobar 31 Days");
            break;
        }
        case 11:{
            printf("Novembar 30 Days");
            break;
        }
        case 12:{
            printf("Decembar 31 Days");
        }
    }
    return 0;
}