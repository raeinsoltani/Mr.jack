//
// Created by raeen on 1/25/2022.
//

#ifndef MR_JACK_DEFINITION_H
#define MR_JACK_DEFINITION_H
struct map_struct{
    int character; //each character will be associated with a certain number.
    char character_str[3];//Used to interpret each character number meaning.
    int structures; //used to show which structures are in place.
};
struct map_struct map[13][9];


struct node{
    int playable_character;
    struct node* next;
};
struct node* even_hand, odd_hand;
#endif //MR_JACK_DEFINITION_H
