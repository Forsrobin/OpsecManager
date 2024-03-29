import NetworkManager;

#include "app_window.h"
#include "slint.h"

class ApplicationEngine
{

public:
  ApplicationEngine(const slint::ComponentHandle<AppWindow> &appWindow);
  ~ApplicationEngine();

  ApplicationEngine(const ApplicationEngine &) = delete;
  ApplicationEngine &operator=(const ApplicationEngine &) = delete;
  static ApplicationEngine &init(const slint::ComponentHandle<AppWindow> &appWindow);

  static std::string getUsername() { return "Hello"; }

private:
  NetworkManager networkManager;
  std::string username;
  static void LoginLogic(const slint::ComponentHandle<AppWindow> &appWindow);
};
