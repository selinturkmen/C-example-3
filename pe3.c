#include <stdio.h>
#define TBITNO (int) sizeof(int)*8
int trailing_zeros(int num);
int number_of_setbits(int);
int leading_zeros(int num);
void printbitsofInteger(int x);
int main(void)
{
    /* Declare variables to get user input */
    int num, ones, count=0;

    /* Get user input from the keyboard. */
    printf("Enter any integer: ");
    scanf("%d", &num);
    /* Print bits of the stored integer */
    printbitsofInteger(num);
    /* Compute number of set bits in num */
    ones = number_of_setbits(num);
    printf("In %d, total number of set bits(1s) is = %d, and unset bits (0s) is = %d\n", num, ones, TBITNO-ones);

    printf("Total number of leading zeros in %d is =  %d.\n", num, leading_zeros(num));
    printf("Total number of trailing zeros in %d is = %d.\n",num, trailing_zeros(num));

    return 0;
}

void printbitsofInteger(int x)
{
    int i;
    for(i=TBITNO-1; i>=0; i--) {
        (x & (1 << i)) ? putchar('1') : putchar('0');
    }
    printf("\n");
}

int number_of_setbits(int num)
{
    //Write a function to return the number of leading zeros in integer num.
    /* YOUR CODE GOES HERE */
    
    return  0; // Don't forget to update the return value
}


int leading_zeros(int num){
    int msb = 1 << (TBITNO - 1);
    int count = 0;
    /* Iterate over each bit */
    for(int i=0; i<TBITNO; i++)
    {
        /* If leading set bit is found */
        if((num << i) & msb)
        {
            /* Terminate the loop */
            break;
        }
        count++;
    }
    return count;
}

int trailing_zeros(int num){
    //Write a function to return the number of trailing zeros in integer num.
    /* YOUR CODE GOES HERE */
    
    return  0; // Don't forget to update the return value
}



