# lemontree - native extensions for lemons

aka hell

## prerequisites:
```
glfw-devel
openal-soft-devel
```
for msys2 you can run `pacman -S mingw-w64-ucrt-x86_64-toolchain && pacman -S mingw-w64-ucrt-x86_64-glfw mingw-w64-ucrt-x86_64-openal` to install the toolchain and required libraries, you will also need to either specify the path to a hashlink build during the make command with `HASHLINK=/path` or add the path to an enviroment variable called `HASHLINK`
for linux you'll find those yourself but if you cant find them then womp womp you have to compile them yourself
for mac??????? whats that

#### why not use cmake?
cmake pmo

## building
should just be easy as running `make`
