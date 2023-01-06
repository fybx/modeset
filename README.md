# modeset
`modeset` is a port and continuation of [modeset.py](https://github.com/fybx/scripts/blob/main/modeset.py) that saves and restores brightness and volume levels between each state (shutdown, restart, log in, lock, unlock) and manages wallpapers with themes.

# documentation

### files

the original script kept all functions in the top section; instead of doing this again, I wanted to keep all utility functions in `utility.c`. In addition to the main functionality modeset had, I'll add theming and multiple wallpaper folder features.

### arguments

modeset expects a command and a set of arguments for it. The list of available commands is as follows:
- `theme`: Changes theme and sets wallpaper
- `state`: Changes state and fulfils the tasks according to specified state
- `mode`: Changes mode (light or dark) only. This may change wallpapers or themes.

Arguments alter the behaviours of commands.
- `theme`: `theme_file_path` `mode (optional)`
- `state`: `state_string`
- `mode`: `mode_string`

| field        | values                                |
|:------------ |:------------------------------------- |
| state_string | { -login, -lock, -shutdown, -unlock } |
| mode_string  | { -dark, -light }                     |

