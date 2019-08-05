find . -name "*.rar" -exec unrar x -o+ {} \;
find . -name "*.zip" -exec unzip {} -d . \;
find . -name "*.tar.gz" -exec tar xf {} \;
