/*
Sum of Even Digits Using While Loop and Modulus Operator
Write a program that calculates the sum of even digits in a given number using a while loop.
•	Input: A positive integer.
•	Output: Sum of its even digits.
Example:
o	Input: 2468
o	Output: 20
*/
#include <stdio.h>
int main(){
    
    int num, newnum, tot = 0;
    
    printf("Input the number : ");
    scanf("%d",&num);
    
    if (num > 0){
        
        while(num > 0){
            
            newnum = num%10;
            
            if (newnum%2==0){
                tot += newnum;
            
            }
            
            num=num/10;
            
        }
        
    printf("The sum of even digit is %d",tot);  
    
    }
    
    else 
    
    {
        
        printf("Invaild number.Input must be a positive number.");
        
    }
    
    return 0;
    
}
