#include "pluggable_class_factory.h"

using std::string;
using std::map;

/// initialize Callback map 
PluggableClassFactory::CallbackMap PluggableClassFactory::mPluggableClasss;

void PluggableClassFactory::RegisterPluggableClass(const string &type,
  CreateCallback cb)
{
  mPluggableClasss[type] = cb;
} 

void PluggableClassFactory::UnregisterPluggableClass(const string &type)
{
  mPluggableClasss.erase(type);
}

IPluggableClass *PluggableClassFactory::CreatePluggableClass(const string &type)
{
  CallbackMap::iterator it = mPluggableClasss.find(type);
  if(it != mPluggableClasss.end()) {
    return (it->second());
  }
  return NULL;
}

