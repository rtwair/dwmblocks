# dwmblocks
Modular status bar for dwm written in c.

# Riyad's DWM Build
  * Includes some specific patches to accept signals for updates (hack for event based triggers)
    - Also includes lukes `statuscommands` patch
  * Patches are located in the `Patches` directory

# modifying blocks
The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the blocks.h header file.
By default the blocks.h header file is created the first time you run make which copies the default config from blocks.def.h.
This is so you can edit your status bar commands and they will not get overwritten in a future update.


