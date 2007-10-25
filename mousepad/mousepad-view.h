/* $Id$ */
/*
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __MOUSEPAD_VIEW_H__
#define __MOUSEPAD_VIEW_H__

G_BEGIN_DECLS

#define MOUSEPAD_TYPE_VIEW            (mousepad_view_get_type ())
#define MOUSEPAD_VIEW(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), MOUSEPAD_TYPE_VIEW, MousepadView))
#define MOUSEPAD_VIEW_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), MOUSEPAD_TYPE_VIEW, MousepadViewClass))
#define MOUSEPAD_IS_VIEW(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MOUSEPAD_TYPE_VIEW))
#define MOUSEPAD_IS_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MOUSEPADL_TYPE_VIEW))
#define MOUSEPAD_VIEW_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), MOUSEPAD_TYPE_VIEW, MousepadViewClass))

typedef struct _MousepadViewClass MousepadViewClass;
typedef struct _MousepadView      MousepadView;
typedef enum   _MousepadViewFlags MousepadViewFlags;

GType           mousepad_view_get_type                  (void) G_GNUC_CONST;

void            mousepad_view_put_cursor_on_screen      (MousepadView      *view);

void            mousepad_view_clipboard_cut             (MousepadView      *view);

void            mousepad_view_clipboard_copy            (MousepadView      *view);

void            mousepad_view_clipboard_paste           (MousepadView      *view,
                                                         gboolean           paste_as_column);

void            mousepad_view_delete_selection          (MousepadView      *view);

void            mousepad_view_select_all                (MousepadView      *view);

void            mousepad_view_set_line_numbers          (MousepadView      *view,
                                                         gboolean           line_numbers);

void            mousepad_view_set_auto_indent           (MousepadView      *view,
                                                         gboolean           auto_indent);

void            mousepad_view_set_tab_size              (MousepadView      *view,
                                                         gint               tab_size);

void            mousepad_view_set_insert_spaces         (MousepadView      *view,
                                                         gboolean           insert_spaces);

gboolean        mousepad_view_get_has_selection         (MousepadView      *view);

gboolean        mousepad_view_get_line_numbers          (MousepadView      *view);

gboolean        mousepad_view_get_auto_indent           (MousepadView      *view);

gint            mousepad_view_get_tab_size              (MousepadView      *view);

gboolean        mousepad_view_get_insert_spaces         (MousepadView      *view);

G_END_DECLS

#endif /* !__MOUSEPAD_VIEW_H__ */
