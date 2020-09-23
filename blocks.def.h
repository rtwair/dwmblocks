//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/*{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},*/
	/* {"",	"music",	0,	11},*/
	/*{"",	"pacpackages",	0,	8},*/
	/*{"",	"news",		0,	6},*/
	/* {"",	"crypto",	0,	13}, */
	/* {"",	"price bat \"Basic Attention Token\" 🦁",	0,	20}, */
	/* {"",	"price btc Bitcoin 💰",				0,	21}, */
	/* {"",	"price lbc \"LBRY Token\" 📚",			0,	22}, */
	{"",	"memory.sh",	10,	14}, 
	{"",	"cputemp.sh",	10,	18}, 
	{"",	"volume.sh",	0,	10},
	{"",	"battery.sh",	5,	3},
	{"",	"clock.sh",	60,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' | ';

/*
 * 
	{"", "cat ~/.pacupdate | sed /📦0/d",					0,		9},
	

	{"", "~/bin/statusbar/volume",						0,		10},

	{"", "~/bin/statusbar/battery",						5,		0},

	{"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},

	{"", "~/bin/statusbar/clock",						5,		0},

*/ 
