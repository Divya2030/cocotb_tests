from cocotb_coverage.coverage import *



ADDER_Coverage = coverage_section (
         CoverPoint("top.a", xf = lambda a,b:a , bins = list(range(0,15))),
         CoverPoint("top.b", xf = lambda a,b:b ,bins = list(range(0,15))),
         CoverCross("top.adder_result", items=["top.a","top.b"])


     )

@ADDER_Coverage
def adder_model(a, b):
    """ model of adder """
    return a + b



