s="[Desktop Entry]\nName=酷我\nComment=Music player\nExec=`pwd`/KuWo\nIcon=`pwd`/icon.png\nPath=`pwd`\nTerminal=false\nType=Application\nCategories=AudioVideo;"
echo -e $s > KuWo.desktop
cp `pwd`/KuWo.desktop ~/.local/share/applications/KuWo.desktop