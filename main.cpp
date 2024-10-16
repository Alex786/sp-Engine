// sp.cpp : Defines the entry point for the application.
//

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <SDL3/SDL_init.h>
#include "include/engine_metadata.h"
#include <stdio.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

int main(int argc, char* argv[]) {
	// Set App Metadata

	// class description
	ENGINE_METADATA metadata;

	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_NAME_STRING, metadata.nameOfApp);
	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_VERSION_STRING, metadata.verOfApp);
	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_IDENTIFIER_STRING, metadata.identityOfApp);
	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_CREATOR_STRING, metadata.creatorOfApp);
	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_COPYRIGHT_STRING, metadata.copyrightOfApp);
	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_URL_STRING, metadata.urlOfApp);
	SDL_SetAppMetadataProperty(SDL_PROP_APP_METADATA_TYPE_STRING, metadata.typeOfApp);

	// Init
	// Initialize SDL
	SDL_Init(SDL_INIT_VIDEO);
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		printf("SDL_Init Error: %s\n", SDL_GetError());
		return 1;
	}

	// Create a window
	SDL_Window* window = SDL_CreateWindow(
		"My SDL3 Window",
		800,
		640,
		SDL_WINDOW_RESIZABLE
	);

	if (window == NULL) {
		printf("Error creating window: %s\n", SDL_GetError());
		SDL_Quit();
		return 1;
	}

	// Wait for 10 seconds
	SDL_Delay(10000);

	// Clean up and close
	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
