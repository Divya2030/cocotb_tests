from cocotb_coverage.coverage import * 
import logging as log

adder_Coverage = coverage_section (
         CoverPoint("adder_model.a", xf = lambda a,b:a , bins =[5]),
         CoverPoint("adder_model.b", xf = lambda  a,b:b , bins =[10] ),
     )


@adder_Coverage
def adder_model(a, b):
    """ model of adder """
    return a + b




