/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

// static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */

// static int centered = 1;                    /* -c option; centers dmenu on screen */
// static int deltaw = 300;
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	/*
         [SchemeNorm] = { "#bbbbbb", "#222222" },
	 [SchemeSel] = { "#eeeeee", "#005577" },
	 [SchemeOut] = { "#000000", "#00ffff" },
         */

        [SchemeNorm] = { "#eceff4", "#4c566a" },
        [SchemeSel] = { "#4c566a", "#8fbcbb" },
        [SchemeOut] = { "#eceff4", "#4c566a" },

/*
    [SchemeNorm]          = { "#b7b8b9", "#0c0d15" },
    [SchemeSel]           = { "#756bb1", "#0c0d15" },
    [SchemeOut]           = { "#fcfdfe", "#0c0d15" },
    [SchemeSelHighlight]  = { "#dca060", "#0c0d12" },
    [SchemeNormHighlight] = { "#dca060", "#0c0d12" },
    */
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
// static unsigned int lineheight = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
