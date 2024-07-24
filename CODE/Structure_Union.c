#include<stdio.h>
struct student{
    int id;
    int marks;
    char fav_char;
} Rakib, rajesh; //It is also valid (Gloabally declearded)

union s
{
    int id;
    int marks;
    char fav_char;
}rakib;
int main ()
{
    // union s rakib;
    rakib.marks = 95;
    // rakib.id = 5;
    printf("%d\n",rakib.marks);
    struct student r,m,v; //Locally decleared
    /*
     r.id = 1;
     m.id = 2;
     v.id = 3;
     r.marks = 4;
     m.marks = 5;
     v.marks = 10;
     r.fav_char = 'r';
     m.fav_char = 'm';
     v.fav_char = 'v';
     printf("%d",r.marks);
    */
   Rakib.fav_char = 'R';
   rajesh.fav_char = 'J';
   printf("%c\n",rajesh.fav_char);
   printf("%c",Rakib.fav_char);
    return 0;
}