//
// Created by raeen on 1/25/2022.
//

#ifndef MR_JACK_DEFINITION_H
#define MR_JACK_DEFINITION_H
struct map_struct{
    int character; //each character will be associated with a certain number.
    char character_str[3];//Used to interpret each character number meaning.
    int structures; //used to show which structures are in place.
    char structures_condition; //used to determine if object is currently active or not;
};
struct map_struct map[13][9];


struct character_struct{
    int playable_character;
    struct character_struct* next;
};
struct character_struct* even_hand;
struct character_struct* odd_hand;


int hand_array[8];
int jack;
char jack_name[3];

#endif //MR_JACK_DEFINITION_H
