#include "definition.h"
#include "map_functions.h"

/*This is Mr-Jack by Raein Soltani __ Cracking-X
 * for initial documents on how to start the game please refer to game manual*/


int main() {
    map_initializer();
    for(int x = 0; x<13; x++){
        for (int y = 0; y<9; y++){
            map[x][y].character = 0;
        }
    }
    map_printer();
    return 0;
}
