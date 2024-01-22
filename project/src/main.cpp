#include "application_engine/application_engine.h"


int main(int argc, char **argv)
{
  auto slintApp = AppWindow::create();
  ApplicationEngine::init(slintApp);
  slintApp->run();
  return 0;
}
