import sys,os
from larlite import larlite as fmwk
from recotool.matchDef import *

mgr = fmwk.ana_processor()

#args should be input file name
for x in xrange(len(sys.argv)-1):
    mgr.add_input_file(sys.argv[x+1])


mgr.set_io_mode(fmwk.storage_manager.kREAD)

mgr.set_ana_output_file("dedx_ana.root")

dedx_module = fmwk.TunedEdX()

mgr.add_process(dedx_module)

mgr.run()


