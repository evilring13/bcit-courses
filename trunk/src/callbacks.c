/*
 * callbacks.c
 * Copyright (C) 2009 Doug Penner <darwinsurvivor@gmail.com>
 *                    Brendan Neva <bneva1@my.bcit.ca>
 *                    Steffen L. Norgren <ironix@trollop.org>
 *                    Eddie Zhang <edisonhammer@gmail.com>
 * 
 * callbacks.c is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * callbacks.c is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include "callbacks.h"

/**
 * destroy:
 * @widget: The widget that called the function
 * @data: Any additional data passed to the function
 *
 * Closes the program when the window is closed.
 **/
void
destroy (GtkWidget* widget, gpointer data)
{
	gtk_main_quit ();
}

/**
 * destroy:
 * @widget: The widget that called the function
 * @data: Any additional data passed to the function
 *
 * Handles a double-click (soon to be bound to the context menu)
 **/
void
double_click (GtkWidget* widget, gpointer data)
{
	g_print("test");
}
