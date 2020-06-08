# Simple tests for an adder module
import cocotb
from cocotb.triggers import Timer
from cocotb.result import TestFailure
from adder_model import adder_model
import random
from cocotb_coverage import crv
from cocotb_coverage.coverage import *
import logging as log


@cocotb.test()
def adder_randomised_test(dut):
        """Test for adding 2 random numbers multiple times"""
        class SimpleRandomized(crv.Randomized):
               """   Constrained Random Instruction generation  """
               def __init__(self, A,B ):
                   crv.Randomized.__init__(self)
                   self.A= A
                   self.B= B
                   #defines random variables
                   # define mav_putvalue_instr as a random variable taking values from ins_list
                   self.add_rand("A",list(range(0,15))) 
                   self.add_rand("B",list(range(0,15))) 
                   c1 = lambda  A,B:A
                   c2 = lambda  A,B:B
                   #defining constraint for  instructions
                   self.add_constraint(c1)  
                   self.add_constraint(c2)  
        for i in range(1000):
              # create randomized object instance
              x = SimpleRandomized(0,0)
              # randomize object with additional contraint
              #performs a randomization for all random variables meeting all defined constraints
              x.randomize() 
              print("mav_putvalue_instr constrained A , B ****** = 0x%X  0x%X" % (x.A,x.B))
              A = x.A  
              B = x.B  
              dut.A = A
              dut.B = B 

              yield Timer(20, units='ns')

              if int(dut.X) != adder_model(A, B):
                    raise TestFailure(
                      "Randomised test failed with: %s + %s = %s" %
                      (int(dut.A), int(dut.B), int(dut.X)))
              else:  # these last two lines are not strictly necessary
                    dut._log.info("Ok!")

        dut.log.info("Functional coverage details:")
        coverage_db.report_coverage(dut.log.info, bins=False)
        coverage_db.export_to_xml("coverage.xml")
