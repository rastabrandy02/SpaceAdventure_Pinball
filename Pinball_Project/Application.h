#pragma once

#include "p2List.h"
#include "Globals.h"

class Module;
class ModuleRender;
class ModuleWindow;
class ModuleTextures;
class ModuleInput;
class ModuleAudio;
class ModulePlayer;
class ModuleSceneIntro;
class ModulePhysics;
class ModuleFonts;

class Application
{
public:
	ModuleRender* renderer;
	ModuleWindow* window;
	ModuleTextures* textures;
	ModuleInput* input;
	ModuleAudio* audio;
	ModulePlayer* player;
	ModuleSceneIntro* scene_intro;
	ModulePhysics* physics;
	ModuleFonts* fonts;

	//float limitFrames = 60;
	
	bool checkPaused() const
	{
		return gamePaused;
	}

	float checkFPS() const
	{
		return currentFPS;
	}

private:

	p2List<Module*> list_modules;

	bool gamePaused = false;
	float limitFrames = 60;
	float init;
	float end;
	float currentFPS;

public:

	Application();
	~Application();

	bool Init();
	update_status Update();
	bool CleanUp();

private:

	void AddModule(Module* mod);
};