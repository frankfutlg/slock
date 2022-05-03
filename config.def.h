/* user and group to drop privileges to */
static const char *user  = "frankfut";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#161320",   /* after initialization */
	[INPUT] =  "#96CDFB",   /* during input */
	[FAILED] = "#F28FAD",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
