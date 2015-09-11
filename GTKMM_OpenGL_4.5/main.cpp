#include "MyWindow.hpp"

int main(int argc, char* argv[]) {
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "com.renuilus.gtkmm_opengl_4_5");

    MyWindow window;

    return app->run(window);

    //return 0;
}
