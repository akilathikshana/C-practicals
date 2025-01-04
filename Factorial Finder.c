#include<stdio.h>

int fact(int n){
        
        if(n = 0 || n =1)
        {
            return 1;
        }
        else
        {
           return n * fact(n-1);
        }

}

int main(){
    
    int num,result=0;
    
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num>0){
        result=fact(num);
        printf("The factorial of %d number is %d",num,result);

    }
            
    else{
        printf("Enter positive value");   
    }
        
    return 0;
    
}
