#include "../h/Window_mgr.h"

void Window_mgr::clear(int i){
 Screens.push_back(Screen());
 for(auto& i:Screens){
  i.setContents(" ");
 }
}

