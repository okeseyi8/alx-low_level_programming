int main(void)
{
	n = rand() - RAND_MAX / 2;
        if (n > 0)
        {
                printf("%d is positive \n", n);
                printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero \n", n);
                printf("%d is zero\n", n);
        }
        else if (n < 0)
        {
                printf("%d is negative \n", n);
                printf("%d is negative\n", n);
        }
        return (0);
}
