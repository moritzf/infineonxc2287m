################################################################################
# Automatically-generated file. Do not edit!
################################################################################

PROJ 	= Blinky
PRODDIR = C:\Program Files (x86)\TASKING\C166-VX Lite v3.1r1

-include "..\makefile.init"

all :

-include "subdir.mk"
-include "..\makefile.defs"

EXT_LIBRARIES =

all : "Blinky.elf"

"Blinky.elf" : $(OBJ_FILES) $(EXT_LIBRARIES) ".Blinky.elf.opt"
	@echo Linking to ${@F}
	@"${PRODDIR}\bin\cc166" -f ".Blinky.elf.opt"

".Blinky.elf.opt" : .refresh
	@argfile ".Blinky.elf.opt" -o "Blinky.elf" $(OBJ_FILES) $(EXT_LIBRARIES) -Cxc2210u_8f -t -I"C:\Users\Moritz\builds\infineonxc2287\Blinky" "../Blinky.lsl" -Wl-OtZL --no-map-file -Wl--map-file="${PROJ}.mapxml":XML -Wl-mcrfiklSmNduQ -Wl--error-limit=42 -g -Wl-DXC2210U_8F -Wl--dep-file=".Blinky.elf.d" -Wl--make-target="Blinky.elf"
DEPENDENCY_FILES += ".Blinky.elf.d"
-include $(DEPENDENCY_FILES)

GENERATED_FILES += "Blinky.elf" "Blinky.mapxml" "Blinky.mdf" ".Blinky.elf.opt" ".Blinky.elf.d" "console.log"
-include "..\makefile.targets"

clean : ".clean.opt"
	@echo Cleaning
	@"${PRODDIR}\bin\rm" -f -m ".clean.opt"

".clean.opt" : .refresh
	@argfile ".clean.opt" $(GENERATED_FILES)

GENERATED_FILES += ".clean.opt"

.PHONY : .refresh
