# This file is public domain, it can be freely copied without restrictions.
# SPDX-License-Identifier: CC0-1.0
# Simple tests for an adder module
import cocotb
from cocotb.triggers import Timer
from adder_model import adder_model
import random
import vsc
from builtins import range, callable
from enum import IntEnum
import unittest
from unittest.case import TestCase
from vsc import *

@cocotb.test()
async def adder_basic_test(dut):
    """Test for 5 + 10"""

    A = 5
    B = 10

    dut.A <= A
    dut.B <= B

    await Timer(2, units='ns')
    c=adder_model(A, B)
    print(" directed test :c :",c,"dut.X.value: ",dut.X.value )

    assert dut.X.value == adder_model(A, B), "Adder result is incorrect: {} != 15".format(dut.X.value)


@cocotb.test()
async def adder_randomised_test(dut):
    """Test for adding 2 random numbers multiple times"""

    list_1 = set()
    list_2 = set()
    n = 16
    i = 0

    while i < n:
        a = random.randint(0,15)
        b = random.randint(0,15)
        if a not in list_1 and b not in list_2 :
            i += 1
            A =a
            B =b
            dut.A <= A
            dut.B <= B
            list_1.add(A)
            list_2.add(B)

            await Timer(2, units='ns')
            c=adder_model(A, B)
            print("c :",c,"dut.X.value: ",dut.X.value )
            assert dut.X.value == adder_model(A, B), "Randomised test failed with: {A} + {B} = {X}".format(
                                A=dut.A.value, B=dut.B.value, X=dut.X.value)

            #def test_simple_coverpoint(self):

            @covergroup
            class my_covergroup(object):

                 def __init__(self, a, b): # Need to use lambda for non-reference values
                     super().__init__()

                     self.cp1 = coverpoint(a,
                         bins=dict(
                             a = bin_array([], [0,15])
                         ))

                     self.cp2 = coverpoint(b, bins=dict(
                         b = bin_array([], [0,15])
                         ))


            #a = 0;
            #b = 0;

            cg = my_covergroup(lambda:a, lambda:b)

            a=dut.A
            b=dut.B
            print("A: ",a," B: ",b)
            cg.sample() # Hit the first bin of cp1 and cp2  

            
            report = vsc.get_coverage_report()
            print("Report:\n" + report)
            out = StringIO()
            vsc.write_coverage_db("cov.xml")
            # print(">================== Write XML ========================")
            vsc.write_coverage_db(out)
            #print("<================== Write XML ========================")
            db = XmlFactory.read(out)
            #print(">================== Build Report =====================")
            report = CoverageReportBuilder.build(db)
            #print("<================== Build Report =====================")
            #print(">================== Text Reporter ====================")
            reporter = TextCoverageReportFormatter(report, sys.stdout)
            #print("<================== Text Reporter ====================")
            reporter.details = True
            #print(">================== XML Report =======================")
            reporter.report()
            # print("<================== XML Report =======================")
               
               
