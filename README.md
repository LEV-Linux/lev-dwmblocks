# dwmblocks
Modular status bar for dwm written in C.
# Usage
To use dwmblocks first run 'make' and then install it with 'sudo make install'.
After that you can put dwmblocks in your xinitrc or other startup script to have it start with dwm.
## Modules
This fork is intended to be used with my [dotfiles](https://github.com/salahdin-ahmed/dotfiles). Therefore, my [status scripts](https://github.com/salahdin-ahmed/dotfiles/tree/master/.local/bin/status), they all are located at `~/.local/bin/status/` and all start with `status_`.
# Modifying blocks
The status bar is made from text output from command line programs.
Blocks are added and removed by editing the blocks.h header file.
By default the blocks.h header file is created the first time you run make which copies the default config from blocks.def.h.
This is so you can edit your status bar commands and they will not get overwritten in a future update.
## Sending update signals
If you have a block with update interval of 0 and is based on another event, a command linked to the wanted event should be in the form of `pkill -RTMIN+<block-update-signal> dwmblocks`. After that, only the wanted block in the status bar will update.
# Features of this fork
*Symbola and Awesome fonts based icons

*Time module

*RAM module

*CPU module

*Disk space module

*Battery module

*Language based keyboard layout module

*Speaker volume module

*Screen brightness module

*Internet connection module

*FFmpeg based recording module
## Work in progress
*notifications module
