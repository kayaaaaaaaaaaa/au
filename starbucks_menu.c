#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int coffee;

    printf("                                                S T A R B U C K S ✪\n\n\n");
    for(int i=1;i<115;i++){
        printf("_");
    }
    printf("   H A N D C R A F T E D   E S P R E S S O\n");
      for(int i=1;i<115;i++){
        printf("_");
    }
    printf("\n\n");
    printf("ESPRESSO & CLASSIC\n");
    printf("Enjoy hot or Iced\n");
    printf("Add Kenya Espresso 25/-\n\n\n");
    printf("                                                SHORT        TALL        GRANDE\n");
    printf("  1) Flat White                                  250         280          310\n");
     for(int i=1;i<115;i++){
        printf("_");
     }
     printf("\n");
    printf("  2) Caramel Macchiato                           250         275          300\n");

    printf("  3) Caffe Mocha / White Mocha                   230         260          285\n");
     for(int i=1;i<115;i++){
        printf("_");
     }
    printf("\n");
    printf("  4) Caffe Latte                                 200         225          250\n");
    printf("  5) Make your own latte\n (Caramel, Hazelnut or Vanilla)                  245         270          295 \n ");
     for(int i=1;i<115;i++){
        printf("_");
     }
     printf("\n");
     printf("  6) Cappuccino                                  200         225          250\n");
     printf("  7) Chocolate Cappuccino                        260         285          310\n");
      for(int i=1;i<115;i++){
        printf("_");
    }
    
    printf("\n\n\n");
    printf("Enter your coffee number : ");
    scanf("%d",&coffee);
    
    int cup;
    printf("Enter 1 for SHORT / 2 for TALL / 3 for GRANDE : ");
    scanf("%d",&cup);
    
    int price=0;
    
    switch(coffee){
        
        case 1 :

        if(cup==1){
            price=250;}
            else if(cup==2){
                price=280;}
                else if(cup==3){
                    price=310;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        case 2 :
      
        if(cup==1){
            price=250;}
            else if(cup==2){
                price=275;}
                else if(cup==3){
                    price=300;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        case 3 :
     
        if(cup==1){
            price=230;}
            else if(cup==2){
                price=260;}
                else if(cup==3){
                    price=285;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        case 4 :
       
        if(cup==1){
            price=200;}
            else if(cup==2){
                price=225;}
                else if(cup==3){
                    price=250;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        case 5 :
    
        if(cup==1){
            price=245;}
            else if(cup==2){
                price=270;}
                else if(cup==3){
                    price=295;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        case 6 :
     
        if(cup==1){
            price=200;}
            else if(cup==2){
                price=225;}
                else if(cup==3){
                    price=250;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        case 7 :
      
        if(cup==1){
            price=260;}
            else if(cup==2){
                price=285;}
                else if(cup==3){
                    price=310;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        default :
        printf("INVALID CHOICE!!!");
        break;
    }
    
    int quantity,i,caf;
    printf("Enter your quantity : ");
    scanf("%d",&quantity);
    
    for(int i=1;i<=quantity;i++){
        caf=price*i;
    }
    
   
    
    int a,cof,p,q;
    printf("Do you want to enter another coffee? 10 if yes / 20 if no.  \n");
    scanf("%d",&a);
    
    switch(a){
        case 10 : 
        printf("Enter your coffee number : ");
        scanf("%d",&cof);
          int cup;
    printf("Enter 1 for SHORT / 2 for TALL / 3 for GRANDE : ");
    scanf("%d",&cup);
        
         switch(cof){
        
        case 1 :
        
        if(cup==1){
            p=250;}
            else if(cup==2){
                p=280;}
                else if(cup==3){
                    p=310;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        case 2 :
        
        if(cup==1){
            p=250;}
            else if(cup==2){
                p=275;}
                else if(cup==3){
                    p=300;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        case 3 :
        
        if(cup==1){
            p=230;}
            else if(cup==2){
                p=260;}
                else if(cup==3){
                    p=285;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        case 4 :
        
        if(cup==1){
            p=200;}
            else if(cup==2){
                p=225;}
                else if(cup==3){
                    p=250;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        case 5 :
        
        if(cup==1){
            p=245;}
            else if(cup==2){
                p=270;}
                else if(cup==3){
                    p=295;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        case 6 :
        
        if(cup==1){
            p=200;}
            else if(cup==2){
                p=225;}
                else if(cup==3){
                    p=250;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        case 7 :
        
        if(cup==1){
            p=260;}
            else if(cup==2){
                p=285;}
                else if(cup==3){
                    p=310;}
                    else{
                        printf("INVALID CUP CHOICE!!!");
                    }
                    
        break;
        
        default :
        printf("INVALID CHOICE!!!");
        break;
    }
    break;
    case 20 :
    break;
    }
    
    int cafe=0;
     printf("Enter your quantity : ");
    scanf("%d",&q);
    
    for(int i=1;i<=q;i++){
        cafe=p*i;
    }
    
    int total=0;
    total=caf+cafe;
    
    printf("\n\n\n");
    printf("                                         B I L L\n ");
    for(int i=1;i<=115;i++){
        printf("_");
    }
    printf("\n  ITEM NO.                         PRICE                         QUANTITY  \n");
    for(int i=1;i<=115;i++){
        printf("_");
    } 
    printf("\n\n   %d                                 %d                             %d \n",coffee,price,quantity);
    for(int i=1;i<=115;i++){
        printf("_");
    }
    printf("\n\n   %d                                 %d                             %d \n",cof,p,q);
    for(int i=1;i<=115;i++){
        printf("_");
    }
    printf("\n\n                                                                 TOTAL = %d\n",total);
    for(int i=1;i<=115;i++){
        printf("_");
    }
    }
