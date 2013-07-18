#include "gtest/gtest.h"
#include "pluginmanager.h"
#include "pluggable_class_factory.h"

#include <vector>
#include <iostream>

using namespace std;

TEST(Main, GetAllPlugins){
  vector<PluginInstance*> plugins = PluginManager::GetInstance().GetAllPlugins();
  for(vector<PluginInstance*>::iterator it = plugins.begin();
    it != plugins.end(); ++it) {
    cout << (**it).GetFileName() << endl;
    cout << "--- --- ---" << endl;
  } 
}

