/* demo-app-window.c
 *
 * Copyright 2026 Clayton Castro
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "config.h"

#include "demo-app-window.h"

struct _DemoAppWindow
{
	AdwApplicationWindow  parent_instance;

	/* Template widgets */
	GtkLabel            *label;
};

G_DEFINE_FINAL_TYPE (DemoAppWindow, demo_app_window, ADW_TYPE_APPLICATION_WINDOW)

static void
demo_app_window_class_init (DemoAppWindowClass *klass)
{
	GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

	gtk_widget_class_set_template_from_resource (widget_class, "/org/castro/demo/demo-app-window.ui");
	gtk_widget_class_bind_template_child (widget_class, DemoAppWindow, label);
}

static void
demo_app_window_init (DemoAppWindow *self)
{
	gtk_widget_init_template (GTK_WIDGET (self));
}
