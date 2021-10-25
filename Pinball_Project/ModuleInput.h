#pragma once
#include "Module.h"
#include "Globals.h"

#define MAX_MOUSE_BUTTONS 5
#define MAX_KEYS 300
enum KEY_STATE
{
	KEY_IDLE = 0,
	KEY_DOWN,
	KEY_REPEAT,
	KEY_UP,
	KEY_ERROR
};

class ModuleInput : public Module
{
public:
	
	ModuleInput(Application* app, bool start_enabled = true);
	~ModuleInput();

	bool Init();
	update_status PreUpdate();
	bool CleanUp();

	KEY_STATE GetKey(int id) const
	{
		return (id< MAX_KEYS)? keyboard[id] : KEY_ERROR;
	}

	KEY_STATE GetMouseButton(uint id) const
	{
		return (id < MAX_MOUSE_BUTTONS) ? mouse_buttons[id] : KEY_ERROR;
	}
	float GetMouseX() const
	{
		return mouse_x * SCREEN_SIZE;
	}

	float GetMouseY() const
	{
		return mouse_y * SCREEN_SIZE;
	}

private:
	KEY_STATE mouse_buttons[MAX_MOUSE_BUTTONS];
	//KEY_STATE* mouse_buttons;
	KEY_STATE* keyboard;
	int mouse_x;
	int mouse_y;
};