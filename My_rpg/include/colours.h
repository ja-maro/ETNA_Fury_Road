/*
** ETNA PROJECT, 15/04/2022 by charda_p, maro_j, pondav_j
** File description:
**      colours header
*/

#ifndef COLOURS
#define COLOURS
char *cs_light[] = {
      "\x1b[30m",    /*black*/
      "\x1b[31m",    /*red*/
      "\x1b[32m",    /*green*/
      "\x1b[33m",    /*yellow*/
      "\x1b[34m",    /*blue*/
      "\x1b[35m",    /*magenta*/
      "\x1b[36m",    /*cyan*/
      "\x1b[37m",    /*white*/
      "\x1b[38m",    /*crimson*/
      };
char *cs[] = {
      "\x1b[40m",    /*black*/   
      "\x1b[41m",    /*red*/
      "\x1b[42m",    /*green*/
      "\x1b[43m",    /*yellow*/
      "\x1b[44m",    /*blue*/
      "\x1b[45m",    /*magenta*/
      "\x1b[46m",    /*cyan*/
      "\x1b[47m",    /*white*/
      "\x1b[48m",    /*crimson*/
   };
char *cs_cmd[] = {
    "\x1b[0m",  /*reset*/
    "\x1b[1m",  /*bright*/
    "\x1b[2m",  /*dim*/
    "\x1b[4m",  /*underscore*/
    "\x1b[5m",  /*blink*/
    "\x1b[7m",  /*reverse*/
    "\x1b[8m",  /*hidden*/
    "\033[H\033[J", /*clean terminal*/
};
#endif /* !COLOURS */
