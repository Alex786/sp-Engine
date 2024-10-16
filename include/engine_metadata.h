// Engine Metadata

#ifndef ENGINE_METADATA_H
#define ENGINE_METADATA_H
class ENGINE_METADATA {
	public:
		/*The human-readable name of the application, like "My Game 2: Bad Guy's Revenge!". This will show up anywhere the OS shows the name of the application separately from window titles, such as volume control applets, etc. This defaults to "SDL Application".*/
		const char* nameOfApp = "sp Engine";

		/*The version of the app that is running; there are no rules on format, so "1.0.3beta2" and "April 22nd, 2024" and a git hash are all valid options. This has no default.*/
		const char* verOfApp = "1.0.0";

		/*A unique string that identifies this app. This must be in reverse-domain format, like "com.example.mygame2". This string is used by desktop compositors to identify and group windows together, as well as match applications with associated desktop settings and icons. If you plan to package your application in a container such as Flatpak, the app ID should match the name of your Flatpak container as well. This has no default.*/
		const char* identityOfApp = "com.alexander_brown.sp_engine1";

		/*The human-readable name of the creator/developer/maker of this app, like "MojoWorkshop, LLC"*/
		const char* creatorOfApp = "Alexander Brown";

		/*The human-readable copyright notice, like "Copyright (c) 2024 MojoWorkshop, LLC" or whatnot. Keep this to one line, don't paste a copy of a whole software license in here. This has no default.*/
		const char* copyrightOfApp = "Copyright (c) 2024 Alexander Brown";

		/*A URL to the app on the web. Maybe a product page, or a storefront, or even a GitHub repository, for user's further information This has no default.*/
		const char* urlOfApp = "www.google.com";

		/*The type of application this is. Currently this string can be "game" for a video game, "mediaplayer" for a media player, or generically "application" if nothing else applies. Future versions of SDL might add new types. This defaults to "application".*/
		const char* typeOfApp = "application";
};

#endif // ENGINE_METADATA_H
