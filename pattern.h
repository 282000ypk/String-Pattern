#include<stdio.h>
int n,i;
void full();
void midfill();
void midempty();
void empty();
void frontfull();
void lastfull();
void full()
{
	int x;
	for(i=0;i<n*3;i++)
	printf("%c",42);
	for(i=0;i<n;i++)
	printf(" ");
}
void full1()
{
	int x;
	for(i=0;i<n*3-1;i++)
	printf("%c",42);
	for(i=0;i<n+1;i++)
	printf(" ");
}
void midemptyn2()
{
	int x;
	for(i=0;i<n;i++)
	printf("*");
    for(i=0;i<n/2-1;i++)
	printf(" ");
    if(n%2!=0 && n!=1)
    printf(" ");
    
    for(i=0;i<n/2+1;i++)
	printf("\\");
    for(i=0;i<n;i++)
	printf("\\");
	for(i=0;i<n+1;i++)
	printf(" ");
}
void midemptyn1()
{
	int x;
	for(i=0;i<n;i++)
	printf("\\");
    for(i=0;i<n/2+1;i++)
	printf("\\");
    if(n%2!=0 && n!=1)
    printf(" ");
    for(i=0;i<n/2-1;i++)
	printf(" ");
    for(i=0;i<n;i++)
	printf("%c",42);
	for(i=0;i<n+1;i++)
	printf(" ");
}
void midemptyn22()
{
	int x;
	for(i=0;i<n;i++)
	printf("*");
    for(i=0;i<n/2;i++)
	printf(" ");
    if(n%2!=0 && n!=0)
    printf(" ");
    
    for(i=0;i<n/2;i++)
	printf("\\");
    for(i=0;i<n;i++)
	printf("\\");
	for(i=0;i<n+1;i++)
	printf(" ");
}
void midemptyn11()
{
	int x;
	for(i=0;i<n;i++)
	printf("\\");
    for(i=0;i<n/2;i++)
	printf("\\");
    if(n%2!=0 && n!=0)
    printf(" ");
    for(i=0;i<n/2;i++)
	printf(" ");
    for(i=0;i<n;i++)
	printf("%c",42);
	for(i=0;i<n+1;i++)
	printf(" ");
}
void empty()
{
	int x;
	for(i=0;i<n*3;i++)
	printf(" ");
	for(i=0;i<n;i++)
	printf(" ");
}
void leftfill()
{
	int x;
	for(i=0;i<n;i++)
	printf("%c",42);
	for(i=0;i<n;i++)
	printf("%c",42);	
	for(i=0;i<n;i++)
	printf(" ");
	for(i=0;i<n;i++)
	printf(" ");
}
void rightfill()
{
	int x;
	for(i=0;i<n;i++)
	printf(" ");
	for(i=0;i<n;i++)
	printf("%c",42);	
	for(i=0;i<n;i++)
	printf("%c",42);
	for(i=0;i<n;i++)
	printf(" ");
}
void midfill()
{
	int x;
	for(i=0;i<n;i++)
	printf(" ");
	for(i=0;i<n;i++)
	printf("%c",42);	
	for(i=0;i<n;i++)
	printf(" ");
	for(i=0;i<n;i++)
	printf(" ");
}
void midfillw()
{
	int x;
	for(i=0;i<n;i++)
	printf(" ");
	for(i=0;i<n;i++)
	printf("%c",42);	
}
void midempty()
{
	int x;
	for(i=0;i<n;i++)
	printf("%c",42);
	for(i=0;i<n;i++)
	printf(" ");	
	for(i=0;i<n;i++)
	printf("%c",42);
	for(i=0;i<n;i++)
	printf(" ");
}
void midempty1()
{
	int x;
	for(i=0;i<n;i++)
	printf("%c",42);
    if(n==1)
	for(i=0;i<n;i++)
	printf("V");	
    else if(n%2==0)
    {
    for(i=0;i<n/2;i++)
    printf("\\");
        for(i=0;i<n-n/2;i++)
        printf("/");
        }
    else
    {
        for(i=0;i<n/2;i++)
    printf("\\");
        printf(" ");
        for(i=0;i<n/2;i++)
        printf("/");
    }
	for(i=0;i<n;i++)
	printf("%c",42);
	for(i=0;i<n;i++)
	printf(" ");
}
void midempty2()
{
	int x;
	for(i=0;i<n;i++)
	printf("%c",42);
    if(n==1)
	for(i=0;i<n;i++)
	printf("V");	
    else if(n%2==0)
    {
    for(i=0;i<n/2;i++)
    printf("\\");
        for(i=0;i<n-n/2;i++)
        printf("/");
        }
    else
    {
        for(i=0;i<n/2;i++)
    printf(" ");
        printf("V");
        for(i=0;i<n/2;i++)
        printf(" ");
    }
	for(i=0;i<n;i++)
	printf("%c",42);
	for(i=0;i<n;i++)
	printf(" ");
}
void midemptyw()
{
	for(i=0;i<n;i++)
	printf("%c",42);
	for(i=0;i<n;i++)
	printf(" ");	
}
void midfill1()
{
	int x;
	for(i=0;i<n;i++)
	printf("%c",42);
    if(n==1)
	for(i=0;i<n;i++)
	printf("v");	
    if(n%2==0)
    {
    for(i=0;i<n/2;i++)
    printf("\\");
        for(i=0;i<n-n/2;i++)
        printf("/");
        }
    else
    {
        for(i=0;i<n/2;i++)
    printf(" ");
        printf("V");
        for(i=0;i<n/2;i++)
        printf(" ");
    }
	for(i=0;i<n;i++)
	printf("%c",42);
	for(i=0;i<n;i++)
	printf(" ");
}
void frontfull()
{
	int x;
	for(i=0;i<n;i++)
	printf("%c",42);
	for(i=0;i<n;i++)
	printf(" ");	
	for(i=0;i<n;i++)
	printf(" ");
	for(i=0;i<n;i++)
	printf(" ");
}
void frontfull1()
{
	int x;
	for(i=0;i<n;i++)
	printf("%c",42);
	for(i=0;i<n;i++)
	printf(" ");	
}
void lastfull()
{
	int x;
	for(i=0;i<n;i++)
	printf(" ");
	for(i=0;i<n;i++)
	printf(" ");	
	for(i=0;i<n;i++)
	printf("%c",42);
	for(i=0;i<n;i++)
	printf(" ");
}
