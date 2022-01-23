#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*This is Mr-Jack by Raein Soltani __ Cracking-X
 * for initial documents on how to start the game please refer to game manual*/


struct map_struct{
    int character; //each character will be associated with a certain number.
    char character_str[3];//Used to interpret each character number meaning.
    int structures; //used to show which structures are in place.
};


struct map_struct map[13][9];


int map_printer(){
    for (int x=0; x<13; x++){
        for (int y=0; y<9; y++){
            if (map[x][y].character == 0){
                strcpy(map[x][y].character_str, "  ");
            }
            else if (map[x][y].character == 1){ //Sherlock Holmes
                strcpy(map[x][y].character_str, "SH");
            }
            else if (map[x][y].character == 2){ //John H. Watson
                strcpy(map[x][y].character_str, "JW");
            }
            else if (map[x][y].character == 3){ //John Smith
                strcpy(map[x][y].character_str, "JS");
            }
            else if (map[x][y].character == 4){ //Inspector Lestrade
                strcpy(map[x][y].character_str, "JL");
            }
            else if (map[x][y].character == 5){ //Miss Stealthy
                strcpy(map[x][y].character_str, "MS");
            }
            else if (map[x][y].character == 6){ //Sergent Goodley
                strcpy(map[x][y].character_str, "SG");
            }
            else if (map[x][y].character == 7){ //Sir WIlliam Gull
                strcpy(map[x][y].character_str, "WG");
            }
            else if (map[x][y].character == 8){ //Jeremy Bert
                strcpy(map[x][y].character_str, "JB");
            }
        }
    }
    for (int y=0; y<9; y++){
        for (int i=0; i<6; i++){
            printf("  ______        ");
        }
        printf("  ______  \n");

        for (int i=0; i<6; i++){
            printf(" /      \\       ");
        }
        printf(" /      \\ \n");

        for (int i=0; i<6; i++){
            printf("/   %s   \\______", map[2 * i][y].character_str);
        }
        printf("/   %s   \\\n", map[12][y].character_str);

        for (int i=0; i<6; i++){
            printf("\\   %d    /      ", map[2 * i][y].structures);
        }
        printf("\\   %d    /\n", map[12][y].structures);

        for (int i=0; i<6; i++){
            printf(" \\______/   %s  ", map[2 * i + 1][y].character_str);
        }
        printf(" \\______/ \n");

        printf("        ");
        for (int i=0; i<6; i++){
            printf("\\   %d    /      ", map[2 * i + 1][y].structures);
        }

        printf("\n        ");
        for (int i=0; i<6; i++){
            printf(" \\______/       ");
        }
    }
}


int main() {

    return 0;
}
