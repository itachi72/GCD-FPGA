verdiWindowResize -win $_Verdi_1 "0" "47" "1680" "977"
debImport "tb_gcd1.v" "gcd.v" "control.v" "datapath.v" "reg_file.v" "mux.v" \
          "-ssv" "-ssy"
verdiDockWidgetDisplay -dock widgetDock_WelcomePage
verdiWindowWorkMode -win $_Verdi_1 -hardwareDebug
wvCreateWindow
wvSetPosition -win $_nWave2 {("G1" 0)}
wvOpenFile -win $_nWave2 {/work/gcd/gcd/gcd.fsdb}
wvSetCursor -win $_nWave2 36049.698795
wvRestoreSignal -win $_nWave2 "/work/gcd/gcd/signal.rc" -overWriteAutoAlias on
wvSetCursor -win $_nWave2 166558.734940 -snap {("G4" 2)}
debExit
