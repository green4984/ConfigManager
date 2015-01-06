#include "ConfigManager.h"

namespace config {
	void ConfigManager::ConfigManager(string filePath)
	{
		this -> _configFilePath = filePath;
		if (!g_file_test(filePath.c_str(), G_FILE_TEST_IS_REGULAR))
			g_error ("ConfigManager: file %s not a regular file, check it!\n", filePath.c_str());
	}
	void ConfigManager::get()
	{
	}
} // namespace config
