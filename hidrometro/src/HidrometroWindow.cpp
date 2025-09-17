#include <gtkmm.h>
#include <filesystem>
#include "HidrometroWindow.h"

namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.exemplo.hidrometro");

    // localizar imagem hidrometro1.png
    std::string exe_dir;
    try {
        fs::path exe_path = fs::canonical(argv[0]);
        exe_dir = exe_path.parent_path().string();
    } catch (...) {
        exe_dir = ".";
    }

    std::string img_path = (fs::path(exe_dir) / "assets" / "hidrometro1.png").string();

    HidrometroWindow window(img_path);
    return app->run(window);
}
