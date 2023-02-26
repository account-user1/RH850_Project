The installation archives in this directory ("restore") were created when
the product was originally installed and when any subsequent installations or
patches were applied.  They may be used to restore the product to a previous
state, or to remove the product entirely.

IT IS STRONGLY RECOMMENDED THAT YOU USE THE Add/Remove Programs
Control Panel FOR UNINSTALLATION.

To uninstall a product and restore the system to a previous state:
    gpatch -install_patch restore_001.iff
Start with the newest "restore" archive and work back to the desired state.

To see what uninstalling an archive will do without changing anything:
    gpatch -list <archive name>
