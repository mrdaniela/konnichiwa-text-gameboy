#include <gb/gb.h>
#include "jpchar.c"

void main(){
	SPRITES_8x8;
	set_sprite_data(0, 105, jpchar);
	set_sprite_tile(0, 9);
	move_sprite(0, 72, 88);
        set_sprite_tile(1, 45);
	move_sprite(1, 80, 88);
        set_sprite_tile(2, 21);
	move_sprite(2, 88, 88);
        set_sprite_tile(3, 16);
	move_sprite(3, 96, 88);
        set_sprite_tile(4, 25);
	move_sprite(4, 104, 88);
        set_sprite_tile(5, 104);
	move_sprite(5, 112, 88);
	SHOW_SPRITES;
}