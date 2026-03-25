static int topbar = 0;

static const char *fonts[] = {
    "Maple Mono NF:weight=bold:size=20:antialias=true:autohint=true"
};

static const char *prompt      = NULL;
static const char *colors[SchemeLast][2] = {
        //                fg         bg
        [SchemeNorm] = { "#F0EBE7", "#2B1D2B" },
        [SchemeSel]  = { "#2B1D2B", "#C68EDE" },
        [SchemeOut]  = { "#000000", "#00ffff" },
};

static unsigned int lines = 0;
static unsigned int maxhist    = 64;
static int histnodup           = 1;   // if 0, record repeated histories

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
