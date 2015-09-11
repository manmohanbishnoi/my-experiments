/*
 * MyWindow.cpp
 *
 *  Created on: 09-Sep-2015
 *      Author: monu
 */
#include "MyWindow.hpp"

MyWindow::MyWindow() {
    set_title("OpenGL Window");
    set_default_size(1024, 768);

    oga = gtk_gl_area_new();

	g_signal_connect(oga, "render", G_CALLBACK(render), NULL);
	g_signal_connect(oga, "realize", G_CALLBACK(on_realize_widget), NULL);

	oga_cpp = Glib::wrap(oga);

	add(*oga_cpp);


    show_all_children();
}

MyWindow::~MyWindow() {

}

static gboolean render(GtkGLArea *area, GdkGLContext *context) {
	glClearColor(0, 1, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);

	return TRUE;
}

static void on_realize_widget(GtkGLArea *area) {
	gtk_gl_area_make_current(area);
}
