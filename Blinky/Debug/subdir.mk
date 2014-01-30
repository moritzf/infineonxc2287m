################################################################################
# Automatically-generated file. Do not edit!
################################################################################

C_FILES += "..\ADC0.c"
OBJ_FILES += "ADC0.obj"
"ADC0.obj" : "..\ADC0.c" ".ADC0.obj.opt"
	@echo Compiling ${<F}
	@"${PRODDIR}\bin\cc166" -f ".ADC0.obj.opt"

".ADC0.obj.opt" : .refresh
	@argfile ".ADC0.obj.opt" -o "ADC0.obj" "..\ADC0.c" -Cxc2210u_8f -t -I"C:\Users\Moritz\builds\infineonxc2287\Blinky" -Wa-gAHLs --emit-locals=-equ,-symbols -Wa-OgsaJ -Wa--error-limit=42 --no-tasking-sfr --iso=99 --language=+cmp14,+div32,-gcc,-volatile,+strings -g --source -c --dep-file=".ADC0.obj.d" -Wc--make-target="ADC0.obj"
DEPENDENCY_FILES += ".ADC0.obj.d"

C_FILES += "..\cstart.c"
OBJ_FILES += "cstart.obj"
"cstart.obj" : "..\cstart.c" ".cstart.obj.opt"
	@echo Compiling ${<F}
	@"${PRODDIR}\bin\cc166" -f ".cstart.obj.opt"

".cstart.obj.opt" : .refresh
	@argfile ".cstart.obj.opt" -o "cstart.obj" "..\cstart.c" -Cxc2210u_8f -t -I"C:\Users\Moritz\builds\infineonxc2287\Blinky" -Wa-gAHLs --emit-locals=-equ,-symbols -Wa-OgsaJ -Wa--error-limit=42 --no-tasking-sfr --iso=99 --language=+cmp14,+div32,-gcc,-volatile,+strings -g --source -c --dep-file=".cstart.obj.d" -Wc--make-target="cstart.obj"
DEPENDENCY_FILES += ".cstart.obj.d"

C_FILES += "..\GPT1.c"
OBJ_FILES += "GPT1.obj"
"GPT1.obj" : "..\GPT1.c" ".GPT1.obj.opt"
	@echo Compiling ${<F}
	@"${PRODDIR}\bin\cc166" -f ".GPT1.obj.opt"

".GPT1.obj.opt" : .refresh
	@argfile ".GPT1.obj.opt" -o "GPT1.obj" "..\GPT1.c" -Cxc2210u_8f -t -I"C:\Users\Moritz\builds\infineonxc2287\Blinky" -Wa-gAHLs --emit-locals=-equ,-symbols -Wa-OgsaJ -Wa--error-limit=42 --no-tasking-sfr --iso=99 --language=+cmp14,+div32,-gcc,-volatile,+strings -g --source -c --dep-file=".GPT1.obj.d" -Wc--make-target="GPT1.obj"
DEPENDENCY_FILES += ".GPT1.obj.d"

C_FILES += "..\GPT2.c"
OBJ_FILES += "GPT2.obj"
"GPT2.obj" : "..\GPT2.c" ".GPT2.obj.opt"
	@echo Compiling ${<F}
	@"${PRODDIR}\bin\cc166" -f ".GPT2.obj.opt"

".GPT2.obj.opt" : .refresh
	@argfile ".GPT2.obj.opt" -o "GPT2.obj" "..\GPT2.c" -Cxc2210u_8f -t -I"C:\Users\Moritz\builds\infineonxc2287\Blinky" -Wa-gAHLs --emit-locals=-equ,-symbols -Wa-OgsaJ -Wa--error-limit=42 --no-tasking-sfr --iso=99 --language=+cmp14,+div32,-gcc,-volatile,+strings -g --source -c --dep-file=".GPT2.obj.d" -Wc--make-target="GPT2.obj"
DEPENDENCY_FILES += ".GPT2.obj.d"

C_FILES += "..\IO.c"
OBJ_FILES += "IO.obj"
"IO.obj" : "..\IO.c" ".IO.obj.opt"
	@echo Compiling ${<F}
	@"${PRODDIR}\bin\cc166" -f ".IO.obj.opt"

".IO.obj.opt" : .refresh
	@argfile ".IO.obj.opt" -o "IO.obj" "..\IO.c" -Cxc2210u_8f -t -I"C:\Users\Moritz\builds\infineonxc2287\Blinky" -Wa-gAHLs --emit-locals=-equ,-symbols -Wa-OgsaJ -Wa--error-limit=42 --no-tasking-sfr --iso=99 --language=+cmp14,+div32,-gcc,-volatile,+strings -g --source -c --dep-file=".IO.obj.d" -Wc--make-target="IO.obj"
DEPENDENCY_FILES += ".IO.obj.d"

C_FILES += "..\MAIN.c"
OBJ_FILES += "MAIN.obj"
"MAIN.obj" : "..\MAIN.c" ".MAIN.obj.opt"
	@echo Compiling ${<F}
	@"${PRODDIR}\bin\cc166" -f ".MAIN.obj.opt"

".MAIN.obj.opt" : .refresh
	@argfile ".MAIN.obj.opt" -o "MAIN.obj" "..\MAIN.c" -Cxc2210u_8f -t -I"C:\Users\Moritz\builds\infineonxc2287\Blinky" -Wa-gAHLs --emit-locals=-equ,-symbols -Wa-OgsaJ -Wa--error-limit=42 --no-tasking-sfr --iso=99 --language=+cmp14,+div32,-gcc,-volatile,+strings -g --source -c --dep-file=".MAIN.obj.d" -Wc--make-target="MAIN.obj"
DEPENDENCY_FILES += ".MAIN.obj.d"

C_FILES += "..\SCS.c"
OBJ_FILES += "SCS.obj"
"SCS.obj" : "..\SCS.c" ".SCS.obj.opt"
	@echo Compiling ${<F}
	@"${PRODDIR}\bin\cc166" -f ".SCS.obj.opt"

".SCS.obj.opt" : .refresh
	@argfile ".SCS.obj.opt" -o "SCS.obj" "..\SCS.c" -Cxc2210u_8f -t -I"C:\Users\Moritz\builds\infineonxc2287\Blinky" -Wa-gAHLs --emit-locals=-equ,-symbols -Wa-OgsaJ -Wa--error-limit=42 --no-tasking-sfr --iso=99 --language=+cmp14,+div32,-gcc,-volatile,+strings -g --source -c --dep-file=".SCS.obj.d" -Wc--make-target="SCS.obj"
DEPENDENCY_FILES += ".SCS.obj.d"


GENERATED_FILES += "ADC0.obj" ".ADC0.obj.opt" ".ADC0.obj.d" "ADC0.src" "ADC0.lst" "cstart.obj" ".cstart.obj.opt" ".cstart.obj.d" "cstart.src" "cstart.lst" "GPT1.obj" ".GPT1.obj.opt" ".GPT1.obj.d" "GPT1.src" "GPT1.lst" "GPT2.obj" ".GPT2.obj.opt" ".GPT2.obj.d" "GPT2.src" "GPT2.lst" "IO.obj" ".IO.obj.opt" ".IO.obj.d" "IO.src" "IO.lst" "MAIN.obj" ".MAIN.obj.opt" ".MAIN.obj.d" "MAIN.src" "MAIN.lst" "SCS.obj" ".SCS.obj.opt" ".SCS.obj.d" "SCS.src" "SCS.lst"
