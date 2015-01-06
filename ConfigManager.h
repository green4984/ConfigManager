#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include <glib.h>

namespace config {

class ConfigManager {

public :
	/* initialize config manager with config file path*/
	ConfigManager(string configFile);
	~ConfigManager()
	{
		if (config != NULL)
			g_key_file_free(config);
	}

private:
	string _configFilePath;
	GKeyFile *config;

}; // class ConfigManager


} // namespace config

#endif
