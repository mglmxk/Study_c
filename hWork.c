#include <stdio.h>
typedef struct { 
    char Name [50];
    char Surname[50];
    unsigned int age;
} sFio;
void printMe(sFio* p){
    printf("%s %s %u", (*p).Name, (*p).Surname, (*p).age);
}

int main() {
sFio me = {
    "Daniil",
    "Stepanenkov",
    22
};
 printMe(&me);
return 0;
}
