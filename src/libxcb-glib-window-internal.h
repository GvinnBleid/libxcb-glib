/*
 * libxcb-glib - Library to integrate XCB nicely with GLib
 *
 * Copyright © 2012 Quentin "Sardem FF7" Glidic
 *
 * This file is part of libxcb-glib.
 *
 * libxcb-glib is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libxcb-glib is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libxcb-glib. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __LIBXCB_GLIB_WINDOW_INTERNAL_H__
#define __LIBXCB_GLIB_WINDOW_INTERNAL_H__

G_BEGIN_DECLS

void g_xcb_window_expose_event(GXcbWindow *window, xcb_expose_event_t *event);
void g_xcb_window_button_press_event(GXcbWindow *window, xcb_button_press_event_t *event);
void g_xcb_window_button_release_event(GXcbWindow *window, xcb_button_release_event_t *event);

G_END_DECLS

#endif /* __LIBXCB_GLIB_WINDOW_INTERNAL_H__ */