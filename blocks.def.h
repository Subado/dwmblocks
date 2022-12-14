//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "xbps-install -un | awk '{print $2}' | wc -l",	300,		0},
	{"", "xset -q|grep LED| awk '{ if (substr ($10,5,1) == 1) print \"[RU]\"; else print \"[EN]\"; }'", 1, 0},
	{" ", "date '+%b %d (%a)'",					5,		0},
	{" ", "date '+%R'",					5,		1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ┇ ";
static unsigned int delimLen = 5;
