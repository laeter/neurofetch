# Neurofetch Build & Patch Guide

## Project Info
- **Location**: `~/.config/neurofetch/`
- **Fork of**: fastfetch v2.53.0
- **Custom theme**: Neuro-sama and friends ASCII art
- **Current characters**: 8 (Neurosama, EvilNeuro, Vedal, Anny, Aquwa, Imp, Camimi, Cog)

## Build Process

### Standard Build
```bash
cd ~/.config/neurofetch/build
cmake --build .
```

### After Build - Install Binary
```bash
# Copy to both locations
cp ~/.config/neurofetch/build/neurofetch ~/.config/neurofetch/neurofetch
cp ~/.config/neurofetch/build/neurofetch ~/.local/bin/neurofetch
```

**Important**: The system uses `~/.config/neurofetch/neurofetch` by default (check with `which neurofetch`)

## Adding New ASCII Characters

### Step 1: Extract ASCII Art
New characters come from fetch-sama (Windows release has all art in `configs/` folder)

Example structure of config file:
```
color-scheme
[1]=R;G;B
[2]=R;G;B
...
[9]=R;G;B

ascii-art
[!]$1line with $2color $3codes
```

### Step 2: Create ASCII File
1. Extract just the ASCII art lines (after `ascii-art` section)
2. Remove the `[!]` prefix from each line
3. Save to `~/.config/neurofetch/src/logo/ascii/CHARNAME.txt`

Example: `aquwa.txt`, `imp.txt`, `camimi.txt`

### Step 3: Register in builtin.c
Location: `~/.config/neurofetch/src/logo/builtin.c`

Add to appropriate alphabetical section (e.g., Aquwa goes in `A[]`, Imp goes in `I[]`)

```c
// Aquwa
{
    .names = {"Aquwa"},
    .lines = NEUROFETCH_DATATEXT_LOGO_AQUWA,
    .colors = {
        "38;2;251;251;251",     // $1 - White
        "38;2;191;237;253",     // $2 - Light cyan
        "38;2;65;146;204",      // $3 - Blue
        "38;2;255;236;235",     // $4 - Pale pink
        "38;2;139;142;195",     // $5 - Lavender
        "38;2;235;132;237",     // $6 - Magenta
        "38;2;124;53;191",      // $7 - Purple
        "38;2;81;84;91",        // $8 - Dark gray
        "38;2;238;173;169",     // $9 - Pink
    },
    .colorKeys = "38;2;65;146;204",      // Accent color [B] from config
    .colorTitle = "38;2;139;142;195",    // Accent color [A] from config
},
```

**Color Format**: `38;2;R;G;B` (ANSI RGB format)
**Important**: Use EXACT RGB values from the original config's `color-scheme` section!

### Step 4: Add Command-Line Flags (Optional)
Location: `~/.config/neurofetch/src/options/logo.c`

Add flag handlers:
```c
else if(ffStrEqualsIgnCase(key, "--aquwa"))
{
    ffStrbufSetStatic(&options->source, "Aquwa");
    options->type = FF_LOGO_TYPE_BUILTIN;
}
else if(ffStrEqualsIgnCase(key, "--aquwa-a"))
{
    system("sed -i 's/\"source\": \".*\"/\"source\": \"Aquwa\"/' ~/.config/neurofetch/config.jsonc");
    printf("Default logo set to: Aquwa\n");
    exit(0);
}
```

### Step 5: Update Shell Rotation
Location: `~/.config/zsh/.zshrc`

Update the case statement for sequential rotation:
```bash
case $(( COUNTER % 8 )) in
  0) neurofetch -c ~/.config/neurofetch/config.jsonc --logo Neurosama ;;
  1) neurofetch -c ~/.config/neurofetch/config.jsonc --logo EvilNeuro ;;
  2) neurofetch -c ~/.config/neurofetch/config.jsonc --logo Vedal ;;
  3) neurofetch -c ~/.config/neurofetch/config.jsonc --logo Anny ;;
  4) neurofetch -c ~/.config/neurofetch/config.jsonc --logo Aquwa ;;
  5) neurofetch -c ~/.config/neurofetch/config.jsonc --logo Imp ;;
  6) neurofetch -c ~/.config/neurofetch/config.jsonc --logo Camimi ;;
  7) neurofetch -c ~/.config/neurofetch/config.jsonc --logo Cog ;;
esac
```

## Common Issues & Fixes

### Issue: Colors Look Wrong
**Cause**: RGB values don't match original fetch-sama config
**Fix**: Check the `color-scheme` section in original config file and use EXACT values

### Issue: Character Shows as Arch Logo
**Cause**: Struct definition missing from `builtin.c`
**Fix**: Add the character's struct definition to the correct alphabetical section

### Issue: Build Fails with "NEUROFETCH_DATATEXT_LOGO_X undeclared"
**Cause**: ASCII art file missing or not named correctly
**Fix**: Ensure `CHARNAME.txt` exists in `src/logo/ascii/` folder

### Issue: Binary Not Updating
**Cause**: Using cached binary from different location
**Fix**:
```bash
which neurofetch  # Check which binary is being used
cp ~/.config/neurofetch/build/neurofetch ~/.config/neurofetch/neurofetch
```

## File Structure Reference

```
~/.config/neurofetch/
├── build/                          # Build directory
│   └── neurofetch                  # Compiled binary
├── src/
│   ├── logo/
│   │   ├── ascii/                  # ASCII art files
│   │   │   ├── neurosama.txt
│   │   │   ├── aquwa.txt
│   │   │   └── ...
│   │   ├── builtin.c              # Logo registry
│   │   └── logo_builtin.h
│   └── options/
│       └── logo.c                 # Command-line flags
├── neurofetch                     # Main binary (copy from build/)
├── config.jsonc                   # User config
└── README.md

~/.config/zsh/.zshrc               # Shell rotation config
```

## Cleanup History

### Removed Distro Logos
- Kept: Arch-based, Fedora-based, Mint-based, Gentoo, BSD, macOS, SteamOS, Pop!_OS, Elementary, NixOS, Slackware
- Removed: 414 unused logos (Ubuntu, Debian, etc.)
- Space saved: ~1.66MB

### Removed Folders
- `debian/` - Fastfetch packaging infrastructure (not needed for fork)

## Testing

```bash
# Test specific logo
neurofetch --logo Aquwa

# Test all Neuro family
for char in Neurosama EvilNeuro Vedal Anny Aquwa Imp Camimi Cog; do
  echo "Testing $char..."
  neurofetch --logo $char | head -5
done
```

## GitHub Repository
https://github.com/laeter/neurofetch
