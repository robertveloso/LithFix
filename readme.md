# LithFix Beta 2

This is a beta version of lithfix. This is intended as a global fix for various aging issues in LithTech engine games. Currently releases are made for individual games.

Remove any custom rez files you have enabled, and add in "-rez lithfix" to your advanced command line in the launcher. (Don't include the quotes!)

This should be speedrunner friendly, as it won't change any RNG/randomness/broken things that break as you expect them.

## Settings

The following are customizable settings that can be added to your `autoexec.cfg`!

 - `lf_max_fps` - Set the max framerate for the frame limiter. (Defaults to 60)
 - `lf_window_fix` - Enable (1) or disable (0) clipping of the game window in windowed mode. (Defaults to 1)

## NOLF - REVIVAL RELEASE

This uses the `WidescreenGOTY` patch as a base, and basically replaces lithtech.exe code to fix things like mouse look, and add a framerate limiter.

## SHOGO - GOG.COM RELEASE

This uses the base Shogo DLLs as a base. Fixes up mouse look, and adds a frame limiter.

## AVP2 Primal Hunt AVP2AIO

This uses the base AVP2PH DLLs as a base. Fixes up mouse look, and adds a frame limiter. Due to how active the AVP2 multiplayer community is, the headers aren't released in this repo. Feel free to send PRs for new functionality!

## Getting it working

This proxy dll loads up a `CShellReal.dll` file in the main game directory, so place your real lithtech CShell.dll in place of that file, then compile the code and place the newly compiled `CShell.dll` in a folder of your choice under the game's directory. Then run the game with the extra parameter `-rez <folder name you chose>` (No .rez at the end!)

Enjoy!

-Jake

https://haekb.itch.io

https://heythere.coffee/nolf


