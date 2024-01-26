#include "application_engine/application_engine.h"


int main(int argc, char **argv)
{

  std::cout << "[Starting] - Starting opsec_manager" << std::endl;

  auto slintApp = AppWindow::create();
  ApplicationEngine::init(slintApp);
  slintApp->run();
  return 0;
}
