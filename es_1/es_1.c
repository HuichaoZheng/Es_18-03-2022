#include <stdio.h>
int main(int argc, char *argv[])
{
    int dim, i = 0;
    printf("Inserisci la lungezza: ");
    scanf("%d", &dim);
    int num[dim];
    int sum = 0;
    do
    {
        printf("Inserisci numero: ");
        scanf("%d", &num[i]);
        i++;
    } while (num[i-1]!=0);
    for (i = 0; i < dim; i++)
    {
        sum += num[i];
    }
    for (i = dim - 1; i >= 0 && num[i] > sum / dim; i--)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}