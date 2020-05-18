/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
/*	[INIT] =   "black",     /* after initialization */
/*	[INPUT] =  "#005577",   /* during input */
/*	[FAILED] = "#CC3333",   /* wrong password */
        [INIT]   = "#0c0d12",     /* after initialization */ // black
	[INPUT]  = "#756bb1",   /* during input */ // #817f7f
	[FAILED] = "#e31a1c",   /* wrong password */ // #474645
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
