#include "get_file_name.hpp"

std::string get_file_name(ALLEGRO_DISPLAY* display) {
	std::string player_name;
	ALLEGRO_FILECHOOSER* dialog = al_create_native_file_dialog(".", "Load Game", "*.dad", ALLEGRO_FILECHOOSER_FILE_MUST_EXIST);
	
	if (al_show_native_file_dialog(display, dialog))
		player_name = al_get_native_file_dialog_path(dialog, 0);

	std::string filepath = player_name;
	std::string filename;

	size_t pos = filepath.find_last_of("\\");

	if (pos == std::string::npos) 
		filename = filepath;
	else 
		filename = filepath.substr(pos + 1);
	
	al_destroy_native_file_dialog(dialog);

	return filename;
}
