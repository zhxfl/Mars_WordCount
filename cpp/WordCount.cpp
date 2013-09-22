#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <cstdlib>
#include <map>
using namespace std;

int main( int argc, char** argv) 
{
    map<string,int>Map;
    
    //printf("%s \n %s\n", argv[0],argv[1]);
    float start = clock();
    freopen(argv[1],"r",stdin);
    char str[25];
    while( scanf("%s",str) != EOF )
    {
        Map[string(str)]++;
    }
    float end = clock();
    printf("time = %f\n", (end -start) / CLOCKS_PER_SEC);
    map<string,int>::iterator it = Map.begin();
    int num = 0;
    for(;it!=Map.end();it++)
    {
        if(num > 10)break;
        else num++;
        printf("%s %d\n",(*it).first.c_str(),(*it).second);
    
    }

    return 0;
}
