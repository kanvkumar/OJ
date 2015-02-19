# Contains information about test data for problems

TEST_ROOT = "/var/www/html/oj/beta/eval/prog_1/"   # The location where test cases input/output files are located on your system. Absolute Path.

# 'testcases' should map problemID to a list of test cases.
# Each test case is a tuple in following format.
# ( inputFilename, outputfilename, score, memory limit in MBs, time limit in secs)

testcases = {
	"ds1" : [ ("in1","out1",100,32,1)],
	"ds2" : [ ("in2","out2",100,32,10) ],
	"ds3" : [ ("in3","out3",100,32,1) ],
	"ds4" : [ ("in4","out4",100,32,1) ],
	"ds5" : [ ("in5","out5",100,32,0.5) ],
}

# 'checker' should map problemID to a program name that is to be used to check out.
# You can code checker as per your need. They are simple C/CPP programs that take as argument two filenames locally available.
# The first file is, JUDGE output and second is contestant solution. If your problem has no JUDGE output, use a empty file and dont use it latter on.
# The program as its exit code ( return '0' / return '1' ) should return verdict as correct (0) or wrong (!0).
#
# By default, we provide a simple checker, exact.out that checks character by character.

checker  = {"ds1":"exact.out","ds2":"exact.out","ds3":"exact.out","ds4":"exact.out","ds5":"exact.out"}
