#include "application_engine/application_engine.h"
#include <string>

#include <openssl/rsa.h>

int main(int argc, char **argv)
{
  
  auto slintApp = AppWindow::create();
  ApplicationEngine::init(slintApp);
  slintApp->run();

  return 0;
}
