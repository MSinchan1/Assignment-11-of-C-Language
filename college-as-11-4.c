#include<stdio.h>
//Third digit                    td(23145)=1     td(314)=3
int Third_digit(int); //declare the secondary function
        /*    Main function   */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);//Enter the number: 21345
    printf("Third digit is: %d",Third_digit(num)); //print the returned value from the declared function
}
int Third_digit(int x)
{
    int d;
    for(int i=1;i<=3;i++)
    {
        d=x%10; //5....4....1
        x/=10; //2314......231.....23
    }
    return d;//returing the result
}