from cocotb_coverage.coverage import *



ADDER_Coverage = coverage_section (
         CoverPoint("adder_model.a", xf = lambda a,b:a , bins = list(range(0,15))),
         CoverPoint("adder_model.b", xf = lambda a,b:b ,bins = list(range(0,15)))
     )

@ADDER_Coverage
def adder_model(a, b):
    """ model of adder """
    return a + b



