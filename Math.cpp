#include<stdio.h>
#include<conio.h>
main()
{
	int menu, n1, n2, n3, n4, total;
	printf("Enter two numbers -- ");
	scanf("%d %d %d %d",&n1, &n2,&n3, &n4);
	printf("Enter your choice \n");
	printf("1= Addion \n");
	printf("2=Subtraction \n");
	scanf("%d", & menu);
	switch(menu){
		case 1: total= n1+n2+n3+n4;break;
		case 2: total=(n1-(n2+n3+n4));break;
		default: printf("Invaid option selected \n");
		
	}
	if(menu==1)
	printf("%d plus %d plus %d plus %d is %d \n",n1,n2,n3,n4, total);
	else if(menu==2)
	printf("%d minus %d plus %d plus %d is %d\n",n1,n2,n3,n4, total);
	getch();
}
