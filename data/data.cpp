#include <iostream>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
using namespace std;
int num = 1000000;
int base = 3;
int main()
{
    freopen("input_1","w",stdout);
    for(int i = 0; i < num; i++)
    {
        int len = rand() % base + 8;
        for(int j = 0; j < len; j++)
        {
            printf("%c", 'a'+rand()%2);
        }printf("\n");
    }
    return 0;
}
