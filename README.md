Fork of petejohansons revxlp-config to add support for German host OS.
Also try out mouse keys from pending PRs.

# Other ZMK repos

[Upstream](https://github.com/zmkfirmware/zmk.git)
[urob Mouse_Keys](https://github.com/urob/zmk)
[Lots of upstream PRs](https://github.com/infused-kim/zmk/tree/pr-testing/mouse_ps2)

# Setup and Build

Setup `west`, zmk-firmware, zephyr (minimal) according to docs.

    cd zmk-firmware/app
    west build -b seeeduino_xiao_ble -- -DSHIELD=revxlp -DZMK_CONFIG=/<FULL_PATH_TO>/revxlp-config/config

Copy `build/zephyr/zmk.uf2` to controller

Also needs MouseKeys-support, currently from branch `mouse-3.2` of [urob](https://github.com/urob/zmk) ZMK repo:

    echo 'CONFIG_ZMK_MOUSE=y' >> app/prj.conf

Or via menuconfig...

