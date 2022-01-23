#include <stdio.h>
#include <stdlib.h>


/*This is Mr-Jack by Raein Soltani __ Cracking-X
 * for initial documents on how to start the game please refer to game manual*/


struct map_struct{
    int character; //each character will be associated with a certain number.
    int structures; //used to show which structures are in place.
};


struct map_struct* map[13][9];


int map_initialization(){
    for (int i=0; i<6; i++){
        printf("  ______        ");
    }
    printf("  ______  \n");

    for (int i=0; i<6; i++){
        printf(" /      \\       ");
    }
    printf(" /      \\ \n");

    for (int i=0; i<6; i++){
        printf("/   ch   \\______");
    }
    printf("/   ch   \\\n");

    for (int i=0; i<6; i++){
        printf("\\   tp   /      ");
    }
    printf("\\   tp   /\n");

    for (int i=0; i<6; i++){
        printf(" \\______/   ch  ");
    }
    printf(" \\______/ \n");

    printf("        ");
    for (int i=0; i<6; i++){
        printf("\\   tp   /      ");
    }

    printf("\n        ");
    for (int i=0; i<6; i++){
        printf(" \\______/       ");
    }
}


int main() {
    map_initialization();
    return 0;
}
