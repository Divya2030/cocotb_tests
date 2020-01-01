import cocotb
from cocotb.triggers import Timer
from cocotb.result import TestFailure
from adder_model import adder_model
import random

def adder_model(a, b,c_in):
    """ model of adder """
    return a + b + c_in

@cocotb.test()
def adder_basic_test(dut):
    """Test for 5 + 10 +0"""
    yield Timer(2, units='ns')
    a = 5
    b = 10
    c_in = 0

    dut.a = a
    dut.b = b
    dut.c_in = c_in

    yield Timer(2, units='ns')

    if int(dut.sum) != adder_model(a, b,c_in):
        raise TestFailure(
            "adder result is incorrect: %s != 15" % str(dut.X))
    else:  # these last two lines are not strictly necessary
        dut._log.info("Ok!")


@cocotb.test()
def adder_randomised_test(dut):
    """Test for adding 3 random numbers multiple times"""
    yield Timer(2, units='ns')

    for i in range(10):
        a = random.randint(0, 15)
        b = random.randint(0, 15)
        c = random.randint(0, 15)

        dut.a = a
        dut.b = b
        dut.c_in = c_in

        yield Timer(2, units='ns')

        if int(dut.sum) != adder_model(a, b,c_in):
            raise TestFailure(
                "Randomised test failed with: %s + %s = %s" %
                (int(dut.a), int(dut.b), int(dut.X)))
        else:  # these last two lines are not strictly necessary
            dut._log.info("Ok!")
