#ifndef HIDROMETROWINDOW_H
#define HIDROMETROWINDOW_H

#include <gtkmm.h>
#include <cairomm/cairomm.h>
#include <thread>
#include <atomic>
#include <mutex>
#include "Hidrometro.h"

class HidrometroWindow : public Gtk::Window {
public:
    HidrometroWindow(const std::string& image_path);
    virtual ~HidrometroWindow();

private:
    // desenho
    bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr);

    // eventos
    void on_vazao_changed();
    void on_start();
    void on_stop();
    void on_reset();

    // simulação
    void start_simulation_thread();
    void stop_simulation_thread();
    void on_update_from_thread();

    Gtk::Overlay overlay_;
    Gtk::Image image_widget_;
    Glib::RefPtr<Gdk::Pixbuf> pixbuf_;
    Gtk::DrawingArea drawing_area_;

    Gtk::Box control_box_;
    Gtk::Button start_button_;
    Gtk::Button stop_button_;
    Gtk::Button reset_button_;
    Glib::RefPtr<Gtk::Adjustment> vazao_adj_;
    Gtk::Scale vazao_scale_;

    std::shared_ptr<Hidrometro> hidrometro_;
    std::mutex data_mutex_;

    Glib::Dispatcher dispatcher_update_;
    std::thread simulation_thread_;
    std::atomic<bool> running_;
};

#endif
