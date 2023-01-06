//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "block-goal.sh", 0, 4},
	{"", "block-weather.sh", 3600, 5},
	{"", "block-updates.sh", 3600, 3},
	{"", "block-volume.sh", 0, 6},
	{"", "block-language.sh", 1, 2},
	{"", "block-date.sh", 5, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
