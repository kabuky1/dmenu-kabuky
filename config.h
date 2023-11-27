/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar              = 1;         /* -b  option; if 0, dmenu appears at bottom     */
static int centered            = 1;         /* -c option; centers dmenu on screen */
static int min_width           = 50;       /* minimum width when centered */
static int max_width           = 50;
static const unsigned int alpha = 0;     /* Amount of opacity. 0xff is opaque

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"DejaVu:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     		fg         bg       */
	[SchemeNorm] = { "#4169e1", "#030303" },
	[SchemeSel]  = { "#FFFFFF", "#FF0000" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
       [SchemeNorm] = { OPAQUE, alpha },
       [SchemeSel]  = { OPAQUE, alpha },
       [SchemeOut]  = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
