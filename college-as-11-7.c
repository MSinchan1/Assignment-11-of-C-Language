#include<stdio.h>
//Sum of even digits          sed(23145)=2+4=6
int Sum_Even(int);//Declare the secondary function
        /*  Main Function */
void main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);//Enter the number 23145
    printf("Sum of even digits: %d",Sum_Even(num)); //print the secondary function's return value
}
int Sum_Even(int x)
{
    int sum=0;
    while(x>0)//23145....2314.....231.....23.....2
    {
        if((x%10)%2==0)//4.....2
        {
            sum=sum+(x%10);//0+4........4+2
        }
        x/=10;//2314.....231......23.....2.....0
    }
    return sum;//Returning the result sum=6
}