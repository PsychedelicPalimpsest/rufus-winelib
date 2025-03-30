## A list of what needs done for winelib

In general, most io stuff need abstracted out, and linux versions written. Winelib seems to have defined a lot of device IO stuff, but other things are just not defined, and that makes me thing I should just implement the stuff myself with raw device file IO. 

Incomplete:
	* drive.\* rewrite
	* dev.\* rewrite
	* format.\* port (Maybe not full rewrite)
	* bled/bled.c IF_DESKTOP todo
	* ms-sys/file.\* rewrite ?????
	* syslinux/win/ntfssect.c rewrite
	* Rufus.h `LEFT_TO_RIGHT_MARK` escaped unicode may not work
	* format_fat32.c might 
	* process.c might just need redone
