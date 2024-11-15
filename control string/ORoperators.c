#include <stdio.h>
int main(void) {
int sunny = 0;
int vacation = 0;
int sunORvacation = sunny || vacation;
if(sunORvacation){
printf("Going well: it is sunny OR I am on vacation OR both!\n");
}else{
printf("Not going well: it is NEITHER sunny NOR am I on vacation!\n");

}
return 0;
}