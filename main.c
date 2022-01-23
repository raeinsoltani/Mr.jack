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


void map_printer(){
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


void map_initializer(){
    for (int x; x < 13; x++){
        for (int y; y< 9; y++){
            map[x][y].structures = 1;
        }
    }


    map[0][0].structures = map[0][1].structures = map[0][8].structures = 0;
    map[0][2].structures = 2;
    map[0][3].structures = 3;


    map[1][0].structures = map[1][8].structures = 0;
    map[1][3].structures = map[1][4].structures = 2;
    map[1][6].structures = 3;


    map[2][0].structures = map[2][1].structures = map[2][8].structures = 0;
    map[2][4].structures = 2;
    map[2][2].structures = 3;
    map[2][7].structures = 4;


    map[3][0].structures = map[3][1].structures = map[3][7].structures = map[3][8].structures =0;
    map[3][3].structures = map[3][5].structures = 2;


    map[4][0].structures = map[4][8].structures = 0;


    map[5][8].structures = 0;
    map[5][2].structures = map[5][4].structures = map[5][6].structures = 2;
    map[5][5].structures = 3;
    map[5][0].structures = map[0][3].structures = 4;



}


int main() {
    return 0;
}
