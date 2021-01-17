//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ",      "memory.sh",          	    10,	            	0},
	{"",         "network.sh",               	10,	            	0},
	{"",         "battery.sh",             	10,	            	0},
	{"  ",      "date.sh",			    	5,	            	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
