/*
 * Copyright (C) 2013 Ryuan Choi
 */
#include <Elementary.h>
#include "app.h"

void
application_remove_browser(Application_Data *ad, Browser_Data *bd)
{
   ad->browsers = eina_list_remove(ad->browsers, bd);

   if (!ad->browsers)
     elm_exit();
}

const char *
application_default_url(Application_Data *ad)
{
   return "http://bunhere.tistory.com";
}
