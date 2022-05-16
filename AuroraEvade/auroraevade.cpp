#include "auroraevade.h"

namespace auroraevade
{
	TreeTab* main_tab;

	struct spells_to_dodge
	{
		geometry::polygon polygon;
		float start_time;
		float end_time;
		game_object_script sender;
		spellslot spellslot;
		bool is_missile;
		game_object_script missile;
	};

	void on_update()
	{

	}

	void on_process_spell_cast(game_object_script sender, spell_instance_script spell)
	{
		auto spell_data = spell->get_spell_data();
		console->print(spell_data->get_name_cstr());
	}

	void create_menu()
	{
		main_tab = menu->create_tab("auroraevade", "AuroraEvade");
		
	}

	void load()
	{
		create_menu();

		event_handler< events::on_update >::add_callback(on_update);
		event_handler< events::on_process_spell_cast >::add_callback(on_process_spell_cast);
	}

	void unload()
	{
	}
}