# 
# Author : Raj Kumar Paneru
# 
# Script file for window to run the SDL program
#


# Creating all the necessary variables
$COMPILE_FILE = "*.cpp"
$EXECUTABLE_FILE = "main.exe"
$LIBRARIES_PATH = "C:\i686-w64-mingw32\lib"
$INCLUDE_PATH = "C:\i686-w64-mingw32\include\SDL2"
$LIBRARIES = "-lSDL2main -lSDL2"
$FLAGS = "-w -Wl,-subsystem,windows -lmingw32"

# Printing the command that is used to compile program
echo "g++ $COMPILE_FILE -I$INCLUDE_PATH -L$LIBRARIES_PATH $FLAGS $LIBRARIES -o $EXECUTABLE_FILE"

# Compiling the program using the commmand
cmd /c "g++ $COMPILE_FILE -I$INCLUDE_PATH -L$LIBRARIES_PATH  $FLAGS $LIBRARIES -o $EXECUTABLE_FILE"

# Executing the compiled command
cmd /c ".\main.exe"

# Deleting the executable file
cmd /c "del main.exe"
