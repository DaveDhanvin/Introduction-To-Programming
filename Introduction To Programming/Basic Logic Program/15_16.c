#include<stdio.h>
int main()
{
    char cname[20];
    char name[25];
    printf("\nenter country name:");
    scanf("%s",&cname);
    printf("\nenter school name:");
    scanf("%s",&name);
    printf("\ncountry’s name in abbreviated form:%c%c%c",cname[0],cname[5],cname[12]);
    printf("\nschool’s name in abbreviated form:%c%c%c",name[0],name[5],name[10]);

}