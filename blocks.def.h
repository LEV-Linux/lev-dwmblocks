//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"",		"status_recording",		0,		5},
	{"",		"status_internet",		5,		3},
	{"│  ",	"status_brightness",		0,		6},
	{"│ ",		"status_volume",  		0,		1},
	{"│  ",	"status_xkeyboard",		0,		7},
	{"│ 🔋 ",	"status_battery",		2,		0},
	{"│ 💽 ",	"status_disk",			3600,		2},
	{"│  ",	"status_cpu",			1,		0},
	{"│ 💿 ",	"status_ram",			1,		0},
	{"│ ",		"status_date",			1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
