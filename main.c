#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Man
{
    int age;
    char name[20];
    char job [20];
}worker, father;

struct Job{
    char firstName[10];
    char lastName[10];
    int age;
    float pay;
    };

   void WorkerInfo(struct Job* shw);
   // (*entry_level).age = 33;
    //entry_level->age=22;


int main()
{

    struct Job Engineer;
    strcpy(Engineer.firstName, "jon");
    strcpy(Engineer.lastName, "jack");
    struct Job* entry_level;
    entry_level = &Engineer;
    //worker1; THis code is garbage
    int *p;
    int a;
    a = 6;
    p = &a;
    *p = 7;
   // p = a;
   char shitraw[20];
   strcpy(shitraw, "FILL IN THE BLANK");
   puts(shitraw);
    memset(shitraw, '2', 5);
     puts(shitraw);
    printf("P points to %d\n",p);
    printf("a points to %d\n",a);
     printf("Engineer is at %x\n", &Engineer);
    WorkerInfo(entry_level);


   // printf("you are %s\n",Man.name);
    return 1;
}
void WorkerInfo(struct Job* shw)
{
    printf("your first name is %s\n",shw-> firstName);
      printf("your last name is %s\n",shw-> lastName);
     }
