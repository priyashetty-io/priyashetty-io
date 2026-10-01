#include<stdio.h>
int main(){
    int n, category,Regular=0,Premium=0,Recliner=0,i,Bill=0;

    printf("Enter number of ticket: ");
    scanf("%d", &n);
    
     for (i=1; i<=n; i++){
    printf("Enter category for ticket %d (1/2/3): ", i);
     scanf("%d", &category);

      if (category==1){
        Regular++;
        Bill+= 150;
      }
      else if (category=2){
        Premium++;
        Bill+= 250;
      }
      else if (category=3){
        Recliner++;
        Bill+=400;
      }
    }
    printf("---------------Final Bill---------------\n");
    printf("Regular tickets: %d\n",Regular);
    printf("Premium tickets: %d\n",Premium);
    printf("Recliner tickets: %d\n",Recliner);
    printf("Total (before discount): %d\n",Bill);
    

    if(n>=5){
      printf("Discount applied: Yes\n");
      printf("Final Amount: %d\n",(Bill*90)/100);
    }else {
      printf("Discount applied: No\n");
      printf("Final Amount: %d\n",Bill);
      
    }
    return 0;
    }

