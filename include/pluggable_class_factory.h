#ifndef INCLUDE_PLUGGABLE_CLASS_FACTORY_H_
#define INCLUDE_PLUGGABLE_CLASS_FACTORY_H_

#include "defines_for_plugin_api.h"
#include "pluggable_class.h"

#include <string>
#include <map>

///
/// A factory object in the Core API
///
class CORE_API PluggableClassFactory 
{
public:
	typedef IPluggableClass *(*CreateCallback)();

	static void RegisterPluggableClass(const std::string &type,
								 CreateCallback cb);
	static void UnregisterPluggableClass(const std::string &type);

	static IPluggableClass *CreatePluggableClass(const std::string &type);

private:
	typedef std::map<std::string, CreateCallback> CallbackMap;
	static CallbackMap mPluggableClasss;
};

#endif // INCLUDE_PLUGGABLE_CLASS_FACTORY_H_
