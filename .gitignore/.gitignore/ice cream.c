#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct ic
{
	int id;
	char name[20];
	char type[20];
	float pr;
}s[30];
int add();
int disp();
int search();
int update();
int del();
int bill();
main()
{
	int i,n,j,a[100],m,ele;
	char un[100];    
	char pwd[9];
	char ch;
	printf("USERNAME :\n");
	gets(un);
	printf("PASSWORD :\n");
	gets(pwd);
	if(strcmp(un,"harsh")==0&&strcmp(pwd,"harsh@123")==0)
	{
		printf("\t\twelcome in ice-cream. parlor management system.\nyou are successfully logged in!\n ");
	}
	else
	{
		printf("invalid user or passward");
	}
	A:
	printf("\n1 Add ice-cream\n2 Display all ice-cream\n3 Search Available ice-cream\n4 Update the ice-cream price\n5 Delete ice-cream data\n6 Generate bill\n8 Exit");
	printf("\nchoose any option");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			add();
			printf("Enter Y to continue\n");
			ch=getch();
			if(ch=='y')
			{
				goto A;
			}
			else
			break;
		case 2:
			disp();
			printf("Enter Y to continue\n");
			ch=getch();
			if(ch=='y')
			{
				goto A;
			}
			else
			break;
		case 3:
			search();
			printf("Enter Y to continue\n");
			ch=getch();
			if(ch=='y')
			{
				goto A;
			}
			else
			break;
		case 4:
			update();
			printf("Enter Y to continue\n");
			ch=getch();
			if(ch=='y')
			{
				goto A;
			}
			else
			break;
		case 5:
			del();
			printf("Enter Y to continue\n");
			ch=getch();
			if(ch=='y')
			{
				goto A;
			}
			else
			break;
	    case 6:
			bill();
			printf("Enter Y to continue\n");
			ch=getch();
			if(ch=='y')
			{
				goto A;
			}
			else
			break;
	}
}
int add()
{
	int n,i;
	printf("Enter the amount of icecream\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\tEnter the id\n");
		scanf("%d",&s[i].id);
		printf("\tEnter the name\n");
		scanf("%s",&s[i].name);
		printf("\tEnter the type\n");
		scanf("%s",&s[i].type);
		printf("\tEnter the price\n");
		scanf("%f",&s[i].pr);
	}
}
int disp()
{
	int n,i;
	printf("Enter the total icecreams\n");
	scanf("%d",&n);
	printf("id   name   type   price\n");
	for(i=0;i<n;i++)
	{
		printf("%d   %s   %s   %f\n",s[i].id,s[i].name,s[i].type,s[i].pr);
	}
}
int search()
{
	int n,i,f;
	printf("Enter the total icecreams\n");
	scanf("%d",&n);
	printf("Enter the id to search\n");
	scanf("%d",&f);
	for(i=0;i<n;i++)
	{
		if(s[i].id==f)
		{
			break;
		}
	}
		if(s[i].id==f)
		{
		printf("id   name   type   price\n");
		printf("%d   %s   %s   %f\n",s[i].id,s[i].name,s[i].type,s[i].pr);
        }
}
int update()
{
	int n,i,f;
	printf("Enter the total icecreams\n");
	scanf("%d",&n);
	printf("id   name   type   price\n");
	for(i=0;i<n;i++)
	{
		printf("%d   %s   %s   %f\n",s[i].id,s[i].name,s[i].type,s[i].pr);
	}
	printf("Enter the id to search\n");
	scanf("%d",&f);
	for(i=0;i<n;i++)
	{
		if(s[i].id==f)
		{
			break;
		}
	}
		if(s[i].id==f)
		{
		printf("Enter price\n");
		scanf("%f",&s[i].pr);
		printf("NEW DETAILS ARE\n\nid   name   type   price\n");
		printf("%d   %s   %s   %f\n",s[i].id,s[i].name,s[i].type,s[i].pr);
        }
}
int del()
{
	int n,i,f;
	printf("Enter the total icecreams\n");
	scanf("%d",&n);
	printf("id   name   type   price\n");
	for(i=0;i<n;i++)
	{
		printf("%d   %s   %s   %f\n",s[i].id,s[i].name,s[i].type,s[i].pr);
	}

	printf("Enter the id to delete\n");
	scanf("%d",&f);
	for(i=0;i<n;i++)
	{
		if(s[i].id==f)
		{
		 s[i]=s[i+1];
		}
	}
		for(i=0;i<n-1;i++)
		{
		printf("NEW DETAILS ARE\n\nid   name   type   price\n");
		printf("%d   %s   %s   %f\n",s[i].id,s[i].name,s[i].type,s[i].pr);
        }	
}
int bill()
{
	int n,i,f,j,c;
	float sum=0;
	printf("Enter the total icecreams\n");
	scanf("%d",&n);
	printf("id   name   type   price\n");
	for(i=0;i<n;i++)
	{
		printf("%d   %s   %s   %f\n",s[i].id,s[i].name,s[i].type,s[i].pr);
	}

	printf("Enter the id of icecream u want to buy\n");
	scanf("%d",&f);
	printf("Enter the no.of icecream u want to buy\n");
	scanf("%d",&j);
	for(i=0;i<n;i++)
	{
		if(s[i].id==f)
		{
	for(c=0;c<j;c++)
	{
			sum=sum+s[i].pr;
	}
	}
    }
		printf("\t\tThe BILL is == %f\n",sum);
}
