// sp.cpp : Defines the entry point for the application.
//

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <SDL3/SDL_init.h>
#include "include/sp.h"

int main(int argc, char* argv[]) {
	// Set App Metadata
	const char* nameOfApp = "sp Engine";
	const char* verOfApp = "1.0.0";
	const char* identityOfApp = "com.alexander_brown.sp_engine1";
	const char* creatorOfApp = "Alexander Brown";
	const char* copyrightOfApp = "Copyright (c) 2024 Alexander Brown";
	const char* urlOfApp = "www.google.com";
	const char* typeOfApp = "application";

	

	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_NAME_STRING, nameOfApp);
	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_VERSION_STRING, verOfApp);
	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_IDENTIFIER_STRING, identityOfApp);
	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_CREATOR_STRING, nameOfApp);
	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_NAME_STRING, nameOfApp);
	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_NAME_STRING, nameOfApp);
	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_NAME_STRING, nameOfApp);

	// Init
	SDL_Init(SDL_INIT_VIDEO);
	char d[] = "Super long message about some stuff! This is an SDL3 Window message!";
	int sdlver = SDL_VERSION;
	const char* sdlvertext = "";
	SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "title", d, NULL);
	SDL_Quit;
	return 0;
}
