/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka Slab Medium:pixelsize=13:antialias=true:autohint=true",
	"Symbola:pixelsize=13:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char col_nord0[]   = "#2e3440";
static const char col_nord1[]   = "#3b4252";
static const char col_nord2[]   = "#434c5e";
static const char col_nord3[]   = "#4c566a";
static const char col_nord4[]   = "#d8dee9";
static const char col_nord5[]   = "#e5e9f0";
static const char col_nord6[]   = "#eceff4";
static const char col_nord7[]   = "#8fbcbb";
static const char col_nord8[]   = "#88c0d0";
static const char col_nord9[]   = "#81a1c1";
static const char col_nord10[]  = "#5e81ac";
static const char col_nord11[]  = "#bf616a";
static const char col_nord12[]  = "#d08770";
static const char col_nord13[]  = "#ebcb8b";
static const char col_nord14[]  = "#a3be8c";
static const char col_nord15[]  = "#b48ead";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
    [SchemeNorm]            = { col_nord7,  col_nord0},
    [SchemeSel]             = { col_nord5,  col_nord3},
    [SchemeSelHighlight]    = { col_nord13, col_nord3},
    [SchemeNormHighlight]   = { col_nord12, col_nord0},
    [SchemeOut]             = { col_nord0,  col_nord9}
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 27;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 1;
