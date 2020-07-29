#include <stdio.h>

int main()
{
    int n1, n2, f, s, remainder1, remainder2, sum = 0, temp = 0, count = 0;

    printf("Enter First Integer:\n");
    scanf("%d", &n1);

    printf("Enter Second Integer:\n");
    scanf("%d", &n2);

    f=n1;
    s=n2;

    while ( n1!=0 || n2!=0)
    {
        remainder1 = n1 % 10;
        remainder2 = n2 % 10;

        temp = remainder1 + remainder2;

        if(count==0)
        {
            sum=temp;
            count++;
        }

        else
        {
            if(sum<10)
            {
                sum = (temp*10) + sum;
            }
            else if(sum>=10 && sum<100)
            {
                sum = (temp*100) + sum;
            }
            else if(sum>=100 && sum<1000)
            {
                sum = (temp*1000) + sum;
            }
            else if(sum>=1000 && sum<10000)
            {
                sum = (temp*10000) + sum;
            }
            else if(sum>=10000 && sum<100000)
            {
                sum = (temp*100000) + sum;
            }
            else if(sum>=100000 && sum<1000000)
            {
                sum = (temp*1000000) + sum;
            }
        }

        n1 = n1 / 10;
        n2 = n2 / 10;
    }
    printf("\n\nOutput: %d + %d = %d\n\n", f, s, sum);

    return 0;
}
