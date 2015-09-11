/*
 * MyWindow.hpp
 *
 *  Created on: 09-Sep-2015
 *      Author: monu
 */
#pragma once

#include <gtkmm.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glx.h>

class MyWindow : public Gtk::Window {
public:
    MyWindow();
    virtual ~MyWindow();

    GtkWidget *oga;

    Gtk::Widget* oga_cpp;



};

static gboolean render(GtkGLArea *area, GdkGLContext *context);
static void on_realize_widget(GtkGLArea *area);
