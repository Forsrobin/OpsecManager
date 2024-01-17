#include "application_engine.h"

ApplicationEngine &ApplicationEngine::init(const slint::ComponentHandle<AppWindow> &appWindow)
{
  static ApplicationEngine s_instance(appWindow);
  return s_instance;
}

ApplicationEngine::ApplicationEngine(const slint::ComponentHandle<AppWindow> &appWindow)
{
  const auto &appSingleton = appWindow->global<AppSingleton>();
  LoginLogic(appWindow);
}

ApplicationEngine::~ApplicationEngine() {}

void ApplicationEngine::LoginLogic(const slint::ComponentHandle<AppWindow> &appWindow)
{

  const auto &appSingleton = appWindow->global<AppSingleton>();
  const auto &loginSingelton = appWindow->global<LoginSingleton>();

  static auto loginFunction = [&](slint::SharedString username, slint::SharedString password)
  {
    appSingleton.set_selectedScreen(1);
    std::cout << "Login successful" << std::endl;
  };

  loginSingelton.on_request_login(loginFunction);

}
