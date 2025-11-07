#include<stdio.h>
#include <math.h>
int main()
{
    int a,b;
    double op;
    int choice;
    printf("\nENTER THE a,b VALUES :");
    scanf("%d %d",&a,&b);
    
    printf("\n MENU ");
    printf("\n 1.additon");
    printf("\n 2.subtraction");
    printf("\n 3.multiplication");
    printf("\n 4.division");
    printf("\n 5.modulo ");
    printf("\n\n ENTER YOUR CHOICE:");
    scanf("%d",&choice);
    
    switch(choice)
           {
           case 1:
                op=a+b;
                printf("\naddition:%d",op);
                break;
           case 2:
                 op=a-b;
                printf("\nsubtraction:%d",op);
                break;
           case 3:
                op=a*b;
                printf("\n multiplication:%d",op);
                break;
           case 4:
                if(b!=0){
                op= (double)a/ (double)b;
                printf ("\n divison= %.100lf",op);
                }
                else{
                      printf("\n denominator shouldn't be zero");
                      }
                break;
                
           case 5:
                if(b!=0){
                op= fmod((double)a,(double)b);
                printf ("\n modulo= %lf",op);
                }
                else{
                      printf("\n denominator shouldn't be zero");
                      }
                break;
               
                default :
                     printf("\n INVALID ENTRY");
           }          
                     
    return 0;
}