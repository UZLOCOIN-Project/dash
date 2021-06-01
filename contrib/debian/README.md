
Debian
====================
This directory contains files used to package uzlocoind/uzlocoin-qt
for Debian-based Linux systems. If you compile uzlocoind/uzlocoin-qt yourself, there are some useful files here.

## uzlocoin: URI support ##


uzlocoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install uzlocoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your uzlocoinqt binary to `/usr/bin`
and the `../../share/pixmaps/uzlocoin128.png` to `/usr/share/pixmaps`

uzlocoin-qt.protocol (KDE)

