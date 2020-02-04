# Simple tests for an adder module
import cocotb
from cocotb.triggers import Timer
from cocotb.result import TestFailure
from adder_model import adder_model
import random
from cocotb_coverage.coverage import * 
import logging as log


@cocotb.test()
def adder_basic_test(dut):
    """Test for 5 + 10"""
    yield Timer(2, units='ns')
    #log = cocotb.logging.getLogger("cocotb.test") #logger instance
    A = 5
    B = 10

    dut.A = A
    dut.B = B

    yield Timer(2, units='ns')

    if int(dut.X) != adder_model(A, B):
        raise TestFailure(
            "Adder result is incorrect: %s != 15" % str(dut.X))
    else:  # these last two lines are not strictly necessary
        dut._log.info("Ok!")
    
   
    #print coverage report
    coverage_db.report_coverage(log.info, bins=False)
    coverage_db.export_to_xml("coverage.xml")


@cocotb.test()
def adder_randomised_test(dut):
    """Test for adding 2 random numbers multiple times"""
    yield Timer(2, units='ns')
    log = cocotb.logging.getLogger("cocotb.test") #logger instance


    for i in range(10):
        A = random.randint(0, 15)
        B = random.randint(0, 15)

        dut.A = A
        dut.B = B
        
        yield Timer(2, units='ns')

        if int(dut.X) != adder_model(A, B):
            raise TestFailure(
                "Randomised test failed with: %s + %s = %s" %
                (int(dut.A), int(dut.B), int(dut.X)))
        else:  # these last two lines are not strictly necessary
            dut._log.info("Ok!")

        
        





