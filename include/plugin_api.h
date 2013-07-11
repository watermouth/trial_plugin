#ifndef INCLUDE_PLUGIN_API_H_
#define INCLUDE_PLUGIN_API_H_

#include "defines_for_plugin_api.h"
#include "pluggable_class.h"

#define PLUGIN_API_VERSION  1

#define CORE_FUNC     extern "C" CORE_API
#define PLUGIN_FUNC   extern "C" PLUGIN_API

/// declare the initialization routine for a plugin
#define PLUGIN_INIT() \
	const int PluginVersion = PLUGIN_API_VERSION; \
	PLUGIN_FUNC int PluginInit()

/// declare the cleanup routine for a plugin
#define PLUGIN_FREE() \
	PLUGIN_FUNC int PluginFree()

/// declare the display name a plugin
#define PLUGIN_DISPLAY_NAME(name) \
	PLUGIN_API const char * PluginDisplayName = name

/// declare the minimum required Plugin API version for a plugin
#define PLUGIN_MIN_VERSION(version) \
	PLUGIN_API const char * PluginMinVersion = version

/// declare the maximum supported Plugin API version for a plugin
#define PLUGIN_MAX_VERSION(version) \
	PLUGIN_API const char * PluginMaxVersion = version


/// The function signature for a routine that creates a pluggable_class 
typedef IPluggableClass *(*PluggableClassInitFunc)();
/// The function signature for a routine that destroys a pluggable_class 
typedef void (*PluggableClassFreeFunc)(IPluggableClass *);

/// A routine to let a plugin register a new pluggable class type
CORE_FUNC void RegisterPluggableClass(const char *type,
								PluggableClassInitFunc init_call_back,
								PluggableClassFreeFunc free_call_back);


#endif // INCLUDE_PLUGIN_API_H_


