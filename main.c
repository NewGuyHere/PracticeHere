#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Man
{
    int age;
    char name[20];
    char job [20];
}worker, father;

int main()
{
    //worker1; THis code is garbage
   strcpy(worker.name, "jon");
   strcpy(father.name, "jack");


    printf("you are %s\n",worker.name);
      printf("you are %s\n",father.name);
   // printf("you are %s\n",Man.name);
    return 1;
}
