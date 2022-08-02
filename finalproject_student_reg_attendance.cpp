#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void registeration();
void attendance();
void check();
int facualty();
int year();
void rename();
void add();
void edit();
void printfacualty_year(int a,int b);
struct student{
char firstname[100][20];
char lastname[100][20];
int count[100];
int phn_no[100];
}stu[10][10];
int main(){
int a;
printf("__________student Registeration/attendance_________\n\n\n");
printf("select option\n");
printf("1. Registeration\n");
printf("2. attendance\n");
printf("3. check attendance\n");
printf("4. edit\n");
printf("5. exit\n");

scanf("%d",&a);
switch(a){
case 1:
registeration();
break;
case 2:
attendance();
break;
case 3:
check();
break;
case 4:
edit();
break;
case 5:
printf("press enter  to exit\n");
break;

}
}

void edit(){
int a;
printf("     chose option\n");
	printf("1. rename\n");
	printf("2.add student\n");
	scanf("%d",&a);
	switch(a){
case 1:
rename();
break;
case 2:
add();
}
}
int facualty(){
system("cls");
int a;
printf(" select facualty\n");
printf("1. BEI\n");
printf("2. BEL\n");
printf("3. BCE\n");
printf("4. BCT\n");
printf("5. BGE\n");
printf("6. BME\n");
printf("7. BAME\n");
scanf("%d",&a);
return(a);
}
int year(){
int a;
printf(" select year\n");
printf("1. 1st\n");
printf("2. 2nd\n");
printf("3. 3rd\n");
printf("4. 4th\n");
scanf("%d",&a);
system("cls");
return(a);
}
void registeration(){
int a,b,c,l=0;
a=facualty();
b=year();

printf("enter no. of students: ");
scanf("%d",&c);
printf("\n\n");
printfacualty_year(a,b);

printf("|______________________________|\n");
for( int i=1;i<=c;i++){
printf("roll no %d\n",i);
printf("enter full name: ");
scanf("%s",stu[a][b].firstname[i]);
scanf("%s",stu[a][b].lastname[i]);
}
printf("registeration completed!!\n");
getch();
system("cls");
main();
}
void check(){
int a,b,c,i;
a=facualty();
b=year();
printfacualty_year(a,b);
printf("|______________________________|\n");
printf("roll no.   student's name            attendance\n");
for( int i =1;i<=48;i++){
if(stu[a][b].firstname[i][0]>=97 && stu[a][b].firstname[i][0]<=122 || stu[a][b].firstname[i][0]>=65 && stu[a][b].firstname[i][0]<=91){

printf("%d\t ",i);
printf("%s %s                          %d",stu[a][b].firstname[i],stu[a][b].lastname[i],stu[a][b].count[i]);
printf("\n");
printf("_____________________________________________________________________________________\n");
}
}
getch();
system("cls");
main();
}
void attendance(){
int a,b,rollno;
a=facualty();
b=year();
printfacualty_year(a,b);
printf("|______________________________|\n");
if(stu[a][b].firstname[1][0]>=97 && stu[a][b].firstname[1][0]<=122 || stu[a][b].firstname[1][0]>=65 && stu[a][b].firstname[1][0]<=96){
printf("enter roll no. of present students and press 0 to end attendance\n");
do{
scanf("%d",&rollno);
stu[a][b].count[rollno]++;
}


while(rollno!=0);
printf("attendance completed!!\n");
}
else {
printf("students not registered yet\n");
}
getch();
system("cls");
main();
}
void rename(){
	int a=facualty();
	int b=year();
	int rollno;
	printf("enter roll no. : ");
	scanf("%d",&rollno);
	if(stu[a][b].firstname[rollno][0]>=97 && stu[a][b].firstname[rollno][0]<=122 || stu[a][b].firstname[rollno][0]>=65 && stu[a][b].firstname[rollno][0]<=96){
	printf("roll no %d\n",rollno);
	printf("edit name to be changed : %s %s\n\n",stu[a][b].firstname[rollno],stu[a][b].lastname[rollno]);
printf(" enter new name: ");
scanf("%s",stu[a][b].firstname[rollno]);
scanf("%s",stu[a][b].lastname[rollno]);
printf("name changed successfully!\n");	
	}
	else {
	printf("student not registered yet\n");
	}
	getch();
	system("cls");
	main();
}
void add(){
	int a=facualty();
	int b=year();
	int rollno,i;
		if(stu[a][b].firstname[1][0]>=97 && stu[a][b].firstname[1][0]<=122 || stu[a][b].firstname[1][0]>=65 && stu[a][b].firstname[1][0]<=96){
	printf("enter roll no. : ");
	scanf("%d",&rollno);
	i=rollno;

	printf("enter name : ");
scanf("%s",stu[a][b].firstname[rollno]);
scanf("%s",stu[a][b].lastname[rollno]);
printf("student added\n");	
}
else {
	printf("students not registered yet\n");
}
	getch();
	system("cls");
	main();
}

void printfacualty_year(int a,int b){


printf("\n\n");
printf("_______________________________\n");
switch(a){
case 1:
printf("|   facualty=BEI               |\n");
break;
case 2:
printf("|   facualty=BEL               |\n");
break;
case 3:
printf("|   facualty=BCE               |\n");
break;
case 4:
printf("|   facualty=BCT               |\n");
break;
case 5:
printf("|   facualty=BGE               |\n");
break;
case 6:
printf("|   facualty=BME               |\n");
break;
case 7:
printf("|   facualty=BAME              |\n");
break;
}
switch(b){
case 1:
printf("|   year=1st                   |\n");
break;
case 2:
printf("|   year=2nd                   |\n");
break;
case 3:
printf("|   year=3rd                   |\n");
break;
case 4:
printf("|   year=4th                   |\n");
break;
default:
printf("invalid\n");
}
}

