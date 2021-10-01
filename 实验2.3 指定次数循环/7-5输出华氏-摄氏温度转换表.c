#include <stdio.h>
int main()
{
    int lower,upper,fahr;
    double celsius;
    scanf("%d %d",&lower,&upper);
    fahr=lower;
    if(lower>100||upper>100||lower>upper){printf("Invalid.");}
    else{printf("fahr celsius\n");
  
    while(lower<=upper){
    
    celsius=5*(fahr-32.0)/9;

    printf("%d%6.1f\n",fahr,celsius);
    
    fahr=fahr+2;
    lower=fahr;

    }
    }
    return 0;
      
}