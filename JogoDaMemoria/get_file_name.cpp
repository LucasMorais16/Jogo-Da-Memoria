#include "get_file_name.hpp"

std::string get_file_name(ALLEGRO_DISPLAY* display) {
	std::string player_name;
	ALLEGRO_FILECHOOSER* dialog = al_create_native_file_dialog(".", "Load Game", "*.sav", ALLEGRO_FILECHOOSER_FILE_MUST_EXIST);
	
	if (al_show_native_file_dialog(display, dialog))
		player_name = al_get_native_file_dialog_path(dialog, 0);
	
	al_destroy_native_file_dialog(dialog);

	return player_name;
}

