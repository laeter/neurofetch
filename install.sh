#!/bin/bash
# Neurofetch installer - Built with MAXIMUM BRAINROT ENERGY ✨

set -e

echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
echo "  NEUROFETCH INSTALLER"
echo "  Maximum Brainrot Energy Edition ✨"
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
echo ""
echo "Installing the Neuro family to your system..."
echo "All 8 characters incoming: Neuro, Evil, Vedal, Anny, Aquwa, Imp, Camimi, and Cog! 💜"
echo ""

# Clone or update repository
if [ -d "$HOME/.config/neurofetch" ]; then
    echo "⚡ Updating existing Neuro installation... GIGACHAD move"
    cd "$HOME/.config/neurofetch"
    git pull
else
    echo "📦 Cloning neurofetch... Neuro is loading..."
    git clone https://github.com/laeter/neurofetch.git "$HOME/.config/neurofetch"
    cd "$HOME/.config/neurofetch"
fi

# Build
echo ""
echo "🔨 Building neurofetch... Vedal is coding rn"
mkdir -p build
cd build
cmake .. -DCMAKE_BUILD_TYPE=RelWithDebInfo
make -j$(nproc)

# Copy binary
cp neurofetch "$HOME/.config/neurofetch/"

echo ""
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
echo "  ✨ INSTALLATION COMPLETE ✨"
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
echo ""
echo "Add this to your shell config (~/.zshrc or ~/.bashrc):"
echo "  export PATH=\"\$HOME/.config/neurofetch:\$PATH\""
echo ""
echo "Quick start commands (MAXIMUM BRAINROT):"
echo "  neurofetch --neuro     # Neurosama (cyan queen) 💙"
echo "  neurofetch --evil      # Evil Neuro (chaos twin) ❤️"
echo "  neurofetch --vedal     # Vedal (the creator) 💚"
echo "  neurofetch --anny      # Anny (mama) 💜"
echo "  neurofetch --aquwa     # Aquwa (friend) 💧"
echo "  neurofetch --imp       # Imp 😈"
echo "  neurofetch --camimi    # Camimi/Camila 🐢💗"
echo "  neurofetch --cog       # Cog (swarm) ⚙️"
echo ""
echo "  neurofetch --neuro-a   # Make Neuro your default 👑"
echo "  neurofetch -r          # Random mode (BASED)"
echo "  neurofetch -n          # Sequential mode (orderly)"
echo ""
echo "Run 'neurofetch --help' for full command list"
echo ""
echo "For the entire Neuro family ❤️"
echo "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"
