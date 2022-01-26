//
// Created by raeen on 1/25/2022.
//

#include "game_functions.h"
#include "definition.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void randomize ()
{
    srand ( time(NULL) );
    int n = 8;
    for (int i = 1; i <= 8; i++){
        hand_array[i-1] = i;
    }
    for (int i = n-1; i > 0; i--)
    {
        int j = rand() % (i+1);

        swap(&hand_array[i], &hand_array[j]);
    }
}


void hand_linked_list_maker(){
    for (int i=0; i < 4; i++){
        struct character_struct* new_node = (struct character_struct*)malloc(sizeof(struct character_struct));
        new_node->playable_character = hand_array[i];
        new_node->next = odd_hand;
        odd_hand = new_node;
        free(new_node);
    }
    for (int i=4; i < 8;i++){
        struct character_struct* new_node = (struct character_struct*)malloc(sizeof(struct character_struct));
        new_node->playable_character = hand_array[i];
        new_node->next = even_hand;
        even_hand = new_node;
        free(new_node);
    }
}


void set_jack(){
    randomize();
    jack = hand_array[0];
    if (jack == 0){
        strcpy(jack_name, "SH");
    }
    else if (jack == 1){
        strcpy(jack_name, "JW");
    }
    else if (jack == 2){
        strcpy(jack_name, "JS");
    }
    else if (jack == 3){
        strcpy(jack_name, "JL");
    }
    else if (jack == 4){
        strcpy(jack_name, "MS");
    }
    else if (jack == 5){
        strcpy(jack_name, "SG");
    }
    else if (jack == 6){
        strcpy(jack_name, "WG");
    }
    else if (jack == 7){
        strcpy(jack_name, "JB");
    }
    printf("Jack is set to Character %s\n", jack_name);
}


void show_jack(){
    printf("Jack is %s", jack_name);
}

void play_character(){
    static int number_of_hand = 1;
    if (number_of_hand % 2 == 1){
        round_player_int = even_hand->playable_character;
        even_hand = even_hand->next;
        number_of_hand += 1;
    }
    else {
        round_player_int = odd_hand->playable_character;
        odd_hand = odd_hand->next;
        number_of_hand += 1;
    }
    if (round_player_int == 1){
        strcpy(round_player_name, "SH");
    }
    else if (round_player_int == 2){
        strcpy(round_player_name, "JW");
    }
    else if (round_player_int == 3){
        strcpy(round_player_name, "JS");
    }
    else if (round_player_int == 4){
        strcpy(round_player_name, "JL");
    }
    else if (round_player_int == 5){
        strcpy(round_player_name, "MS");
    }
    else if (round_player_int == 6){
        strcpy(round_player_name, "SG");
    }
    else if (round_player_int == 7){
        strcpy(round_player_name, "WG");
    }
    else if (round_player_int == 8){
        strcpy(round_player_name, "JB");
    }
    printf("This round player is %s\n", round_player_name);
}
