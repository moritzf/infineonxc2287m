################################################################################
# Automatically-generated file. Do not edit!
################################################################################

PROJ 	= Counter
PRODDIR = C:\Program Files (x86)\TASKING\C166-VX Lite v3.1r1

-include "..\makefile.init"

all :

-include "subdir.mk"
-include "..\makefile.defs"

EXT_LIBRARIES =

all : "Wuerfel_Moritz.elf"

"Wuerfel_Moritz.elf" : $(OBJ_FILES) $(EXT_LIBRARIES) ".Wuerfel_Moritz.elf.opt"
	@echo Linking to ${@F}
	@"${PRODDIR}\bin\cc166" -f ".Wuerfel_Moritz.elf.opt"

".Wuerfel_Moritz.elf.opt" : .refresh
	@argfile ".Wuerfel_Moritz.elf.opt" -o "Wuerfel_Moritz.elf" $(OBJ_FILES) $(EXT_LIBRARIES) -Cxc2287m_104f -t -I"C:\Users\Moritz\builds\infineonxc2287\Counter" -Wl-o"${PROJ}.hex":IHEX:4 --hex-format=s "../Counter.lsl" -Wl-OtZL --no-map-file -Wl--map-file="${PROJ}.mapxml":XML -Wl-mcrfiklSmNduQ -Wl--error-limit=42 -g -Wl-DXC2287M_104F -Wl--dep-file=".Wuerfel_Moritz.elf.d" -Wl--make-target="Wuerfel_Moritz.elf"
DEPENDENCY_FILES += ".Wuerfel_Moritz.elf.d"
-include $(DEPENDENCY_FILES)

GENERATED_FILES += "Wuerfel_Moritz.elf" "Wuerfel_Moritz.mapxml" "Wuerfel_Moritz.mdf" ".Wuerfel_Moritz.elf.opt" ".Wuerfel_Moritz.elf.d" "console.log"
-include "..\makefile.targets"

clean : ".clean.opt"
	@echo Cleaning
	@"${PRODDIR}\bin\rm" -f -m ".clean.opt"

".clean.opt" : .refresh
	@argfile ".clean.opt" $(GENERATED_FILES)

GENERATED_FILES += ".clean.opt"

.PHONY : .refresh
