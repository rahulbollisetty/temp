#include <cs50.h>
#include <stdio.h>
const int COUNT = 3;
void chart(int COUNT , int scores[]);
int main(void)
{
    int scores[COUNT];
    for (int i = 0; i < COUNT; i++)
        {
            scores[i] = get_int("enter score  %d  ", i + 1);
        }
    
            chart(COUNT , scores);
        
}
void chart(int COUNT , int scores[])
    {
    for (int i = 0; i < COUNT; i++)
        {
            printf(" score %d ", i + 1);
            for (int j = 0; j < scores[i]; j++)
            {
            printf("%d", j + 1);
            }
            printf("\n");
        }
        
    }
