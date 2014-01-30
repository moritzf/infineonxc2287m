################################################################################
# Automatically-generated file. Do not edit!
################################################################################

C_FILES += "..\cstart.c"
OBJ_FILES += "cstart.obj"
"cstart.obj" : "..\cstart.c" ".cstart.obj.opt"
	@echo Compiling ${<F}
	@"${PRODDIR}\bin\cc166" -f ".cstart.obj.opt"

".cstart.obj.opt" : .refresh
	@argfile ".cstart.obj.opt" -o "cstart.obj" "..\cstart.c" -Cxc2287m_104f -t -I"C:\Users\Moritz\builds\infineonxc2287\Counter" -Wa-gAHLs --emit-locals=-equ,-symbols -Wa-OgsaJ -Wa--error-limit=42 --no-tasking-sfr --iso=99 --language=+cmp14,+div32,-gcc,-volatile,+strings -g --source -c --dep-file=".cstart.obj.d" -Wc--make-target="cstart.obj"
DEPENDENCY_FILES += ".cstart.obj.d"

C_FILES += "..\MAIN.c"
OBJ_FILES += "MAIN.obj"
"MAIN.obj" : "..\MAIN.c" ".MAIN.obj.opt"
	@echo Compiling ${<F}
	@"${PRODDIR}\bin\cc166" -f ".MAIN.obj.opt"

".MAIN.obj.opt" : .refresh
	@argfile ".MAIN.obj.opt" -o "MAIN.obj" "..\MAIN.c" -Cxc2287m_104f -t -I"C:\Users\Moritz\builds\infineonxc2287\Counter" -Wa-gAHLs --emit-locals=-equ,-symbols -Wa-OgsaJ -Wa--error-limit=42 --no-tasking-sfr --iso=99 --language=+cmp14,+div32,-gcc,-volatile,+strings -g --source -c --dep-file=".MAIN.obj.d" -Wc--make-target="MAIN.obj"
DEPENDENCY_FILES += ".MAIN.obj.d"


GENERATED_FILES += "cstart.obj" ".cstart.obj.opt" ".cstart.obj.d" "cstart.src" "cstart.lst" "MAIN.obj" ".MAIN.obj.opt" ".MAIN.obj.d" "MAIN.src" "MAIN.lst"
