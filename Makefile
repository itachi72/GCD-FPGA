## Update the below variables with TestBench and DUT name
TB_PATH_AND_NAME = tb_gcd1.v

LIB_PATH_AND_NAME = /home/vlsi23/Merin/support/12-track/tcbn65gplusbwp12t-set/tcbn65gplusbwp12t_200a_FE/TSMCHOME/digital/verilog/tcbn65gplusbwp12t.v

DUT_PATH_AND_NAME = gcd.v control.v datapath.v reg_file.v mux.v

PLI_FILE_64  = /cad/synopsys/verdi/share/PLI/VCS/linux64/pli.a
TAB_FILE_64  = /cad/synopsys/verdi/share/PLI/VCS/linux64/novas.tab
COMPILELOG_NAME  = compile.log
RUNLOG_NAME      = vcs.log
EXE_NAME = simv

env: 
	LD_LIBRARY_PATH=/cad/synopsys/verdi/share/PLI/lib/linux64

$(EXE_NAME) compile: $(TB_PATH_AND_NAME) $(DUT_PATH_AND_NAME)
	-rm -rf $(EXE_ NAME) $(EXE_NAME).Csrc $(EXE_NAME).daidir
	vcs -full64 -P $(TAB_FILE_64) $(PLI_FILE_64) -Mupdate +lint=all,noVCDE +v2k -debug_all \
	-o $(EXE_NAME) $(TB_PATH_AND_NAME) $(DUT_PATH_AND_NAME) -v $(LIB_PATH_AND_NAME) -l $(COMPILELOG_NAME)

run: $(EXE_NAME)
	./$(EXE_NAME) -l $(RUNLOG_NAME)

clean:
	ls | grep -v Makefile | grep -v sim.config | xargs rm -rf

verdi:
	verdi $(TB_PATH_AND_NAME) $(DUT_PATH_AND_NAME) -ssv -ssy &

all:
	make compile && make run && make verdi
	
	
