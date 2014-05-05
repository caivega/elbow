/*
 * Copyright (C) 2013 Ryuan Choi
 *
 * License LGPL-3, see COPYING file at project folder.
 */
#ifndef browser_h
#define browser_h

typedef struct _Application_Data Application_Data;

struct _Browser_Data
{
   Evas_Object *win;
   Evas_Object *layout;

   Application_Data *ad;

   Evas_Object *active_webview;
   Evas_Object *active_ewkview; /* Just for easy access */
   Eina_List *webviews;

   struct {
      Evas_Object *bar;
      Evas_Object *back_button;
      Evas_Object *forward_button;
      Evas_Object *entry;
      Evas_Object *refresh_button;
      Evas_Object *home_button;
      Eina_Bool activated;
   } urlbar;

   struct {
      Evas_Object *bar;
      Eina_Bool activated;
   } multiplebar;
};
typedef struct _Browser_Data Browser_Data;

Browser_Data *browser_add(Application_Data *ad, const char *url);
void browser_multiplebar_show(Browser_Data *bd);
void browser_urlbar_entry_focus_with_selection(Browser_Data *bd);
void browser_urlbar_hide(Browser_Data *bd);
void browser_urlbar_show(Browser_Data *bd);

void browser_multiplebar_hide(Browser_Data *bd);

Eina_Bool browser_keydown(Browser_Data *bd, const char *keyname, Eina_Bool ctrl, Eina_Bool alt, Eina_Bool shift);
//void browser_keyup(Browser_Data *bd, void *ev);

#endif // browser_h
