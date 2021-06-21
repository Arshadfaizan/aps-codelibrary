#include<stdio.h>
#include<conio.h>
int main()
{
int number, remainder_number, reverse_number= 0, i, temp_number;
printf("Enter a number to check palindrome value:"); 
scanf("%d", &number); 
temp_number = number; 
for(i = number; i >0; )
{
remainder_number= i % 10;
reverse_number = remainder_number + reverse_number * 10;
i = i/ 10;
}
if(temp_number == reverse_number)
{
printf("Given number is palindrome"); 
}
else
{
printf("Given number is not palindrome"); 
return 0;
}
