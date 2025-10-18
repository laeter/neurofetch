#include "logo.h"
#include "logo_builtin.h"
#include "common/color.h"

const FFlogo ffLogoUnknown = {
    .names = {"unknown"},
    .lines = NEUROFETCH_DATATEXT_LOGO_UNKNOWN,
    .colors = {
        FF_COLOR_FG_DEFAULT,
    },
};

static const FFlogo A[] = {
    // Anny
    {
        .names = {"Anny"},
        .lines = NEUROFETCH_DATATEXT_LOGO_ANNY,
        .colors = {
            "38;2;220;213;215",     // $1 - Pale pink
            "38;2;122;103;111",     // $2 - Dark mauve
            "38;2;236;159;185",     // $3 - Bright pink
            "38;2;254;246;240",     // $4 - Cream
            "38;2;124;85;166",      // $5 - Dark purple
            "38;2;204;158;246",     // $6 - Lavender
            "38;2;255;255;255",     // $7 - Pure white
            "38;2;255;208;199",     // $8 - Soft salmon
            "38;2;246;190;182",     // $9 - Light rose
        },
        .colorKeys = "38;2;236;159;185",
        .colorTitle = "38;2;236;159;185",
    },
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
        .colorKeys = "38;2;65;146;204",
        .colorTitle = "38;2;139;142;195",
    },
    // Apple
    {
        .names = {"Apple"},
        .lines = NEUROFETCH_DATATEXT_LOGO_MACOS,
        .colors = {
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_YELLOW,
            FF_COLOR_FG_RED,
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_YELLOW,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // AppleSmall
    {
        .names = {"Apple_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_MACOS_SMALL,
        .colors = {
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_YELLOW,
            FF_COLOR_FG_RED,
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_YELLOW,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // ArchBox
    {
        .names = {"ArchBox"},
        .lines = NEUROFETCH_DATATEXT_LOGO_ARCHBOX,
        .colors = {
            FF_COLOR_FG_GREEN,
        },
        .colorKeys = FF_COLOR_FG_GREEN,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // Archcraft
    {
        .names = {"Archcraft"},
        .lines = NEUROFETCH_DATATEXT_LOGO_ARCHCRAFT,
        .colors = {
            FF_COLOR_FG_CYAN,
        },
        .colorKeys = FF_COLOR_FG_CYAN,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // Archcraft2
    {
        .names = {"Archcraft2"},
        .type = FF_LOGO_LINE_TYPE_ALTER_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_ARCHCRAFT2,
        .colors = {
            FF_COLOR_FG_CYAN,
        },
        .colorKeys = FF_COLOR_FG_CYAN,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // Arch
    {
        .names = {"arch", "archmerge"},
        .lines = NEUROFETCH_DATATEXT_LOGO_ARCH,
        .colors = {
            FF_COLOR_FG_CYAN,
            FF_COLOR_FG_CYAN,
        },
    },
    // Arch2
    {
        .names = {"arch2"},
        .type = FF_LOGO_LINE_TYPE_ALTER_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_ARCH2,
        .colors = {
            FF_COLOR_FG_CYAN,
            FF_COLOR_FG_CYAN,
        },
    },
    // Arch3
    {
        .names = {"arch3"},
        .type = FF_LOGO_LINE_TYPE_ALTER_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_ARCH3,
        .colors = {
            FF_COLOR_FG_CYAN,
            FF_COLOR_FG_CYAN,
        },
    },
    // ArchSmall
    {
        .names = {"arch_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_ARCH_SMALL,
        .colors = {
            FF_COLOR_FG_CYAN,
            FF_COLOR_FG_CYAN,
        },
    },
    // ArchOld
    {
        .names = {"arch_old"},
        .type = FF_LOGO_LINE_TYPE_ALTER_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_ARCH_OLD,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE,
        },
        .colorTitle = FF_COLOR_FG_DEFAULT,
        .colorKeys = FF_COLOR_FG_BLUE,
    },
    // Archlabs
    {
        .names = {"ARCHlabs"},
        .lines = NEUROFETCH_DATATEXT_LOGO_ARCHLABS,
        .colors = {
            FF_COLOR_FG_CYAN,
            FF_COLOR_FG_RED,
        },
        .colorKeys = FF_COLOR_FG_CYAN,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // ArchStrike
    {
        .names = {"ArchStrike"},
        .lines = NEUROFETCH_DATATEXT_LOGO_ARCHSTRIKE,
        .colors = {
            FF_COLOR_FG_CYAN,
            FF_COLOR_FG_BLACK,
        },
        .colorKeys = FF_COLOR_FG_CYAN,
        .colorTitle = FF_COLOR_FG_CYAN,
    },
    // LAST
    {},
};

static const FFlogo B[] = {
    // BlackArch
    {
        .names = {"Blackarch"},
        .lines = NEUROFETCH_DATATEXT_LOGO_BLACKARCH,
        .colors = {
            FF_COLOR_FG_RED,
            FF_COLOR_FG_LIGHT_RED,
            FF_COLOR_FG_BLACK,
        },
        .colorKeys = FF_COLOR_FG_LIGHT_RED,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // BSD
    {
        .names = {"BSD"},
        .lines = NEUROFETCH_DATATEXT_LOGO_BSD,
        .colors = {
            FF_COLOR_FG_RED,
            FF_COLOR_FG_WHITE,
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_YELLOW,
            FF_COLOR_FG_CYAN,
        },
        .colorKeys = FF_COLOR_FG_RED,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // LAST
    {},
};

static const FFlogo C[] = {
    // CachyOS
    {
        .names = {"CachyOS"},
        .lines = NEUROFETCH_DATATEXT_LOGO_CACHYOS,
        .colors = {
            FF_COLOR_FG_CYAN,
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_BLACK,
        },
        .colorKeys = FF_COLOR_FG_CYAN,
        .colorTitle = FF_COLOR_FG_CYAN,
    },
    // CachyOSSmall
    {
        .names = {"CachyOS_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_CACHYOS_SMALL,
        .colors = {
            FF_COLOR_FG_CYAN,
        },
        .colorKeys = FF_COLOR_FG_CYAN,
        .colorTitle = FF_COLOR_FG_CYAN,
    },
    // CalinixOS
    {
        .names = {"Calinix", "calinixos"},
        .lines = NEUROFETCH_DATATEXT_LOGO_CALINIXOS,
        .colors = {
            FF_COLOR_FG_MAGENTA,
        },
        .colorKeys = FF_COLOR_FG_MAGENTA,
        .colorTitle = FF_COLOR_FG_BLUE,
    },
    // CalinixOSSmall
    {
        .names = {"Calinix_small", "calinixos_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_CALINIXOS_SMALL,
        .colors = {
            FF_COLOR_FG_MAGENTA,
        },
        .colorKeys = FF_COLOR_FG_MAGENTA,
        .colorTitle = FF_COLOR_FG_BLUE,
    },
    // Camimi
    {
        .names = {"Camimi"},
        .lines = NEUROFETCH_DATATEXT_LOGO_CAMIMI,
        .colors = {
            "38;2;154;48;102",      // $1 - Dark pink
            "38;2;122;27;76",       // $2 - Deep magenta
            "38;2;64;77;178",       // $3 - Blue
            "38;2;255;126;192",     // $4 - Bright pink
            "38;2;40;40;40",        // $5 - Dark gray
            "38;2;179;244;254",     // $6 - Light cyan
            "38;2;255;255;255",     // $7 - White
        },
        .colorKeys = "38;2;255;126;192",
        .colorTitle = "38;2;154;48;102",
    },
    // Cog
    {
        .names = {"Cog"},
        .lines = NEUROFETCH_DATATEXT_LOGO_COG,
        .colors = {
            "38;2;255;138;182",     // $1 - Pink
            "38;2;205;249;252",     // $2 - Light cyan
        },
        .colorKeys = "38;2;255;138;182",
        .colorTitle = "38;2;255;138;182",
    },
    // ContainerLinux
    {
        .names = {"ContainerLinux", "Container Linux", "Container Linux by CoreOS"},
        .lines = NEUROFETCH_DATATEXT_LOGO_FEDORA_COREOS,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE,
            FF_COLOR_FG_RED,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // LAST
    {},
};

static const FFlogo D[] = {
    // LAST
    {},
};

static const FFlogo E[] = {
    // EvilNeuro
    {
        .names = {"EvilNeuro", "Evil"},
        .lines = NEUROFETCH_DATATEXT_LOGO_EVILNEURO,
        .colors = {
            FF_COLOR_FG_RED,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_RED,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // Elementary
    {
        .names = {"Elementary"},
        .lines = NEUROFETCH_DATATEXT_LOGO_ELEMENTARY,
        .colors = {
            FF_COLOR_FG_DEFAULT,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // ElementarySmall
    {
        .names = {"Elementary_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_ELEMENTARY_SMALL,
        .colors = {
            FF_COLOR_FG_DEFAULT,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // EndeavourOS
    {
        .names = {"EndeavourOS"},
        .lines = NEUROFETCH_DATATEXT_LOGO_ENDEAVOUROS,
        .colors = {
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_RED,
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_MAGENTA,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // EndeavourOSSmall
    {
        .names = {"EndeavourOS_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_ENDEAVOUROS_SMALL,
        .colors = {
            FF_COLOR_FG_RED,
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_BLUE,
        },
    },
    // LAST
    {},
};

static const FFlogo F[] = {
    // Neurofetch
    {
        .names = {"Neurofetch", "FF"},
        .lines = NEUROFETCH_DATATEXT_LOGO_NEUROSAMA,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_RED,
            FF_COLOR_FG_YELLOW,
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_DEFAULT,
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_CYAN,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_YELLOW,
    },
    // Fedora
    {
        .names = {"Fedora"},
        .lines = NEUROFETCH_DATATEXT_LOGO_FEDORA,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // FedoraSmall
    {
        .names = {"Fedora_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_FEDORA_SMALL,
        .colors = {
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    {
        .names = {"Fedora2_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT | FF_LOGO_LINE_TYPE_ALTER_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_FEDORA2_SMALL,
        .colors = {
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // FedoraOld
    {
        .names = {"Fedora_old"},
        .type = FF_LOGO_LINE_TYPE_ALTER_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_FEDORA_OLD,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // FedoraSilverblue
    {
        .names = {"Fedora-Silverblue"},
        .lines = NEUROFETCH_DATATEXT_LOGO_FEDORA_SILVERBLUE,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE,
            FF_COLOR_FG_CYAN,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // FedoraKinoite
    {
        .names = {"Fedora-Kinoite"},
        .lines = NEUROFETCH_DATATEXT_LOGO_FEDORA_KINOITE,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // FedoraSericea
    {
        .names = {"Fedora-Sericea"},
        .lines = NEUROFETCH_DATATEXT_LOGO_FEDORA_SERICEA,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // FedoraCoreOS
    {
        .names = {"Fedora-CoreOS"},
        .lines = NEUROFETCH_DATATEXT_LOGO_FEDORA_COREOS,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE,
            FF_COLOR_FG_RED,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // FreeBSD
    {
        .names = {"Freebsd"},
        .lines = NEUROFETCH_DATATEXT_LOGO_FREEBSD,
        .colors = {
            FF_COLOR_FG_WHITE,
            FF_COLOR_FG_RED,
        },
        .colorKeys = FF_COLOR_FG_RED,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // FreeBSDSmall
    {
        .names = {"freebsd_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_FREEBSD_SMALL,
        .colors = {
            FF_COLOR_FG_RED,
        },
        .colorKeys = FF_COLOR_FG_RED,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // FreeMiNT
    {
        .names = {"FreeMiNT"},
        .lines = NEUROFETCH_DATATEXT_LOGO_FREEMINT,
        .colors = {
            FF_COLOR_FG_WHITE
        },
        .colorKeys = FF_COLOR_FG_DEFAULT,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // LAST
    {},
};

static const FFlogo G[] = {
    // Garuda
    {
        .names = {"Garuda", "garuda-linux"},
        .lines = NEUROFETCH_DATATEXT_LOGO_GARUDA,
        .colors = {
            FF_COLOR_FG_RED,
        },
        .colorKeys = FF_COLOR_FG_RED,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // GarudaDragon
    {
        .names = {"GarudaDragon", "garuda-dragon"},
        .lines = NEUROFETCH_DATATEXT_LOGO_GARUDA_DRAGON,
        .colors = {
            FF_COLOR_FG_RED,
        },
        .colorKeys = FF_COLOR_FG_RED,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // GarudaSmall
    {
        .names = {"Garuda_small", "garuda-linux_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_GARUDA_SMALL,
        .colors = {
            FF_COLOR_FG_RED,
        },
        .colorKeys = FF_COLOR_FG_RED,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // Gentoo
    {
        .names = {"Gentoo"},
        .lines = NEUROFETCH_DATATEXT_LOGO_GENTOO,
        .colors = {
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_MAGENTA,
        .colorTitle = FF_COLOR_FG_MAGENTA,
    },
    // GentooSmall
    {
        .names = {"Gentoo_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_GENTOO_SMALL,
        .colors = {
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_MAGENTA,
        .colorTitle = FF_COLOR_FG_MAGENTA,
    },
    // GhostBSD
    {
        .names = {"GhostBSD"},
        .lines = NEUROFETCH_DATATEXT_LOGO_GHOSTBSD,
        .colors = {
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // LAST
    {},
};

static const FFlogo H[] = {
    // HardenedBSD
    {
        .names = {"HardenedBSD"},
        .lines = NEUROFETCH_DATATEXT_LOGO_FREEBSD,
        .colors = {
            FF_COLOR_FG_WHITE,
            FF_COLOR_FG_RED,
        },
        .colorKeys = FF_COLOR_FG_RED,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // LAST
    {},
};

static const FFlogo I[] = {
    // Imp
    {
        .names = {"Imp"},
        .lines = NEUROFETCH_DATATEXT_LOGO_IMP,
        .colors = {
            "38;2;224;98;161",      // $1 - Pink
            "38;2;255;255;255",     // $2 - White
            "38;2;136;37;91",       // $3 - Dark pink
            "38;2;252;230;235",     // $4 - Pale pink
            "38;2;194;179;200",     // $5 - Light purple
            "38;2;72;67;71",        // $6 - Dark gray
            "38;2;145;149;210",     // $7 - Lavender
            "38;2;238;164;187",     // $8 - Rose
            "38;2;222;159;168",     // $9 - Light pink
        },
        .colorKeys = "38;2;136;37;91",
        .colorTitle = "38;2;224;98;161",
    },
    // LAST
    {},
};

static const FFlogo J[] = {
    // LAST
    {},
};

static const FFlogo K[] = {
    // LAST
    {},
};

static const FFlogo L[] = {
    // LinuxMint
    {
        .names = {"linuxmint", "linux-mint"},
        .lines = NEUROFETCH_DATATEXT_LOGO_LINUXMINT,
        .colors = {
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_GREEN,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // LinuxMintSmall
    {
        .names = {"linuxmint_small", "linux-mint_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_LINUXMINT_SMALL,
        .colors = {
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_GREEN,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // LinuxMintOld
    {
        .names = {"linuxmint_old", "linux-mint_old"},
        .type = FF_LOGO_LINE_TYPE_ALTER_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_LINUXMINT_OLD,
        .colors = {
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_GREEN,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // LMDE
    {
        .names = {"LMDE"},
        .lines = NEUROFETCH_DATATEXT_LOGO_LMDE,
        .colors = {
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_GREEN,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // LAST
    {},
};

static const FFlogo M[] = {
    // MacOS
    {
        .names = {"macos", "mac"},
        .lines = NEUROFETCH_DATATEXT_LOGO_MACOS,
        .colors = {
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_YELLOW,
            FF_COLOR_FG_RED,
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_YELLOW,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // MacOSSmall
    {
        .names = {"macos_small", "mac_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_MACOS_SMALL,
        .colors = {
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_YELLOW,
            FF_COLOR_FG_RED,
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_YELLOW,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // MacOS2
    {
        .names = {"macos2", "mac2"},
        .type = FF_LOGO_LINE_TYPE_ALTER_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_MACOS2,
        .colors = {
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_YELLOW,
            FF_COLOR_FG_RED,
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_YELLOW,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // MacOS2Small
    {
        .names = {"macos2_small", "mac2_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT | FF_LOGO_LINE_TYPE_ALTER_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_MACOS2_SMALL,
        .colors = {
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_YELLOW,
            FF_COLOR_FG_RED,
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_YELLOW,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // MacOS3
    {
        .names = {"macos3", "mac3"},
        .type = FF_LOGO_LINE_TYPE_ALTER_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_MACOS3,
        .colors = {
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_YELLOW,
            FF_COLOR_FG_RED,
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_YELLOW,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // Manjaro
    {
        .names = {"manjaro", "manjaro-arm"},
        .lines = NEUROFETCH_DATATEXT_LOGO_MANJARO,
        .colors = {
            FF_COLOR_FG_GREEN,
        },
        .colorKeys = FF_COLOR_FG_GREEN,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // ManjaroSmall
    {
        .names = {"manjaro_small", "manjaro-arm_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_MANJARO_SMALL,
        .colors = {
            FF_COLOR_FG_GREEN,
        },
        .colorKeys = FF_COLOR_FG_GREEN,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // MidnightBSD
    {
        .names = {"MidnightBSD"},
        .lines = NEUROFETCH_DATATEXT_LOGO_MIDNIGHTBSD,
        .colors = {
            FF_COLOR_FG_DEFAULT,
        },
        .colorKeys = FF_COLOR_FG_LIGHT_BLACK,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // LAST
    {},
};

static const FFlogo N[] = {
    // Neurosama
    {
        .names = {"Neurosama", "Neuro"},
        .lines = NEUROFETCH_DATATEXT_LOGO_NEUROSAMA,
        .colors = {
            FF_COLOR_FG_CYAN,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_CYAN,
        .colorTitle = FF_COLOR_FG_CYAN,
    },
    // NixOS
    {
        .names = {"NixOS"},
        .lines = NEUROFETCH_DATATEXT_LOGO_NIXOS,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_CYAN,
        },
    },
    // NixOSSmall
    {
        .names = {"NixOS_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_NIXOS_SMALL,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_CYAN,
        },
    },
    // NixOSOld
    {
        .names = {"nixos_old"},
        .type = FF_LOGO_LINE_TYPE_ALTER_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_NIXOS_OLD,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_CYAN,
        },
    },
    // NixOsOldSmall
    {
        .names = {"nixos_old_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT | FF_LOGO_LINE_TYPE_ALTER_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_NIXOS_OLD_SMALL,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_CYAN,
        },
    },
    // NetBSD
    {
        .names = {"NetBSD"},
        .lines = NEUROFETCH_DATATEXT_LOGO_NETBSD,
        .colors = {
            FF_COLOR_FG_RED,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_RED,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // NetBSD2
    {
        .names = {"NetBSD2"},
        .lines = NEUROFETCH_DATATEXT_LOGO_NETBSD2,
        .type = FF_LOGO_LINE_TYPE_ALTER_BIT,
        .colors = {
            FF_COLOR_FG_RED,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_RED,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // NetBSD Small
    {
        .names = {"NetBSD_small"},
        .lines = NEUROFETCH_DATATEXT_LOGO_NETBSD_SMALL,
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .colors = {
            FF_COLOR_FG_RED,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_RED,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // Nobara
    {
        .names = {"nobara", "nobara-linux"},
        .lines = NEUROFETCH_DATATEXT_LOGO_NOBARA,
        .colors = {
            FF_COLOR_FG_DEFAULT,
        },
        .colorKeys = FF_COLOR_FG_DEFAULT,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // NomadBSD
    {
        .names = {"nomadbsd"},
        .lines = NEUROFETCH_DATATEXT_LOGO_NOMADBSD,
        .colors = {
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // LAST
    {},
};

static const FFlogo O[] = {
    // OpenBSD
    {
        .names = {"openbsd"},
        .lines = NEUROFETCH_DATATEXT_LOGO_OPENBSD,
        .colors = {
            FF_COLOR_FG_YELLOW,
            FF_COLOR_FG_WHITE,
            FF_COLOR_FG_CYAN,
            FF_COLOR_FG_RED,
            FF_COLOR_FG_LIGHT_BLACK,
        },
        .colorKeys = FF_COLOR_FG_YELLOW,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // OpenBSDSmall
    {
        .names = {"openbsd_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_OPENBSD_SMALL,
        .colors = {
            FF_COLOR_FG_YELLOW,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_YELLOW,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // OSX
    {
        .names = {"OSX"},
        .lines = NEUROFETCH_DATATEXT_LOGO_MACOS,
        .colors = {
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_YELLOW,
            FF_COLOR_FG_RED,
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_YELLOW,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // OSXSmall
    {
        .names = {"OSX_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_MACOS_SMALL,
        .colors = {
            FF_COLOR_FG_GREEN,
            FF_COLOR_FG_YELLOW,
            FF_COLOR_FG_RED,
            FF_COLOR_FG_MAGENTA,
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_YELLOW,
        .colorTitle = FF_COLOR_FG_GREEN,
    },
    // LAST
    {},
};

static const FFlogo P[] = {
    // PacBSD
    {
        .names = {"PacBSD"},
        .lines = NEUROFETCH_DATATEXT_LOGO_PACBSD,
        .colors = {
            FF_COLOR_FG_RED,
            FF_COLOR_FG_WHITE,
        },
    },
    // Parch
    {
        .names = {"Parch"},
        .lines = NEUROFETCH_DATATEXT_LOGO_PARCH,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE,
            FF_COLOR_FG_RED,
        },
    },
    // PCBSD
    {
        .names = {"PCBSD", "TrueOS"},
        .lines = NEUROFETCH_DATATEXT_LOGO_PCBSD,
        .colors = {
            FF_COLOR_FG_RED,
            FF_COLOR_FG_WHITE,
        },
    },
    // Peppermint
    {
        .names = {"Peppermint"},
        .lines = NEUROFETCH_DATATEXT_LOGO_PEPPERMINT,
        .colors = {
            FF_COLOR_FG_RED,
            FF_COLOR_FG_WHITE,
        },
    },
    // Pop
    {
        .names = {"pop", "popos"},
        .lines = NEUROFETCH_DATATEXT_LOGO_POP,
        .colors = {
            FF_COLOR_FG_CYAN,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_CYAN,
        .colorTitle = FF_COLOR_FG_CYAN,
    },
    // PopSmall
    {
        .names = {"pop_small", "popos_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_POP_SMALL,
        .colors = {
            FF_COLOR_FG_CYAN,
        },
        .colorKeys = FF_COLOR_FG_CYAN,
        .colorTitle = FF_COLOR_FG_CYAN,
    },
    // LAST
    {},
};

static const FFlogo Q[] = {
    // LAST
    {},
};

static const FFlogo R[] = {
    // LAST
    {},
};

static const FFlogo S[] = {
    // Slackware
    {
        .names = {"Slackware"},
        .lines = NEUROFETCH_DATATEXT_LOGO_SLACKWARE,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_BLUE,
    },
    // SlackwareSmall
    {
        .names = {"Slackware_small"},
        .type = FF_LOGO_LINE_TYPE_SMALL_BIT,
        .lines = NEUROFETCH_DATATEXT_LOGO_SLACKWARE_SMALL,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_DEFAULT,
    },
    // SteamOS
    {
        .names = {"SteamOS"},
        .lines = NEUROFETCH_DATATEXT_LOGO_STEAMOS,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_BLUE,
    },
    // Steam Deck
    {
        .names = {"SteamDeck"},
        .lines = NEUROFETCH_DATATEXT_LOGO_STEAMDECK,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_BLUE,
    },
    // Steam Deck Small
    {
        .names = {"SteamDeck_small"},
        .lines = NEUROFETCH_DATATEXT_LOGO_STEAMDECK_SMALL,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_BLUE,
    },
    // Steam Deck OLED
    {
        .names = {"SteamDeckOled"},
        .lines = NEUROFETCH_DATATEXT_LOGO_STEAMDECK,
        .colors = {
            FF_COLOR_FG_RED,
            FF_COLOR_FG_WHITE
        },
        .colorKeys = FF_COLOR_FG_RED,
        .colorTitle = FF_COLOR_FG_RED,
    },
    // Swagarch
    {
        .names = {"Swagarch"},
        .lines = NEUROFETCH_DATATEXT_LOGO_SWAGARCH,
        .colors = {
            FF_COLOR_FG_BLUE,
            FF_COLOR_FG_WHITE,
        },
    },
    // LAST
    {},
};

static const FFlogo T[] = {
    // TeArch
    {
        .names = {"TeArch"},
        .lines = NEUROFETCH_DATATEXT_LOGO_TEARCH,
        .colors = {
            FF_COLOR_FG_256 "39",
            FF_COLOR_FG_WHITE,
        },
    },
    // LAST
    {},
};

static const FFlogo U[] = {
    // LAST
    {},
};

static const FFlogo V[] = {
    // Vedal
    {
        .names = {"Vedal"},
        .lines = NEUROFETCH_DATATEXT_LOGO_VEDAL,
        .colors = {
            "38;2;84;170;102",      // $1 - Green primary
            "38;2;42;42;42",        // $2 - Dark gray
            "38;2;127;199;131",     // $3 - Medium green
            "38;2;158;211;152",     // $4 - Light green
            "38;2;255;255;255",     // $5 - Pure white
        },
        .colorKeys = "38;2;84;170;102",
        .colorTitle = "38;2;84;170;102",
    },
    // LAST
    {},
};

static const FFlogo W[] = {
    // LAST
    {},
};

static const FFlogo X[] = {
    //XeroArch
    {
        .names = {"XeroArch"},
        .lines = NEUROFETCH_DATATEXT_LOGO_XEROARCH,
        .colors = {
            FF_COLOR_FG_256 "50",
            FF_COLOR_FG_256 "14",
            FF_COLOR_FG_256 "50",
            FF_COLOR_FG_256 "93",
            FF_COLOR_FG_256 "16",
            FF_COLOR_FG_256 "15",
        }
    },
    // LAST
    {},
};

static const FFlogo Y[] = {
    // LAST
    {},
};

static const FFlogo Z[] = {
    // Zorin
    {
        .names = {"Zorin"},
        .lines = NEUROFETCH_DATATEXT_LOGO_ZORIN,
        .colors = {
            FF_COLOR_FG_BLUE,
        },
        .colorKeys = FF_COLOR_FG_BLUE,
        .colorTitle = FF_COLOR_FG_BLUE,
    },
    // LAST
    {},
};

const FFlogo* ffLogoBuiltins[] = {
    A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,
};
