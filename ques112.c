//this question no 112 level from srm elab c programming
#include <stdio.h>
int main()
{
    int amtreq;
    float iniamt;
    scanf("%d %f",&amtreq,&iniamt);
    if((amtreq <= (iniamt - 0.5)) && (amtreq % 5 == 0) && amtreq>=17500 && amtreq<=31300 && iniamt>=19600 && iniamt<=85000)
    printf("Current Balance : %.2f\nInitial Balance : %.2f",iniamt-amtreq-0.5,iniamt);
    else{
        printf("Invalid input");
    }
    

	return 0;
}
