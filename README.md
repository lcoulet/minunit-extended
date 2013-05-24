# Minunit - slightly extended

This is a slightly extended version of minunit C unit test "framework". 
This version of the framework has been designed for performing coding Dojos, and is not production-ready (assuming that you'd want to use minunit for unit testing your production code)

Minunit is a  minimalist C unit testing framework. While minified to its simplest expression (only 2 macros) it does the job pretty well, and it has the advantage that one can completely understand what it does.

Originally a fork from [ValiValpas](https://github.com/ValiValpas), ValiValpas macros did not work while using GCC on the Raspberry Pi (and was generating core when compiled on Cygwin's GCC), therefore I entirely revised the extended version of this framework: back to basics with minor improvements.

I strongly advise to look at [JTN002](http://www.jera.com/techinfo/jtns/jtn002.html), that introduced and explains the minunit framework.  

This fork has been created, reworked and used at the ISE LAB #06, featuring a TDD coding dojo in C on Raspberry Pi.

## Modifications to minunit

More meaningful test failure messages, it now indicates what was the file on which the test failed and the line. 

## Utility script

The script is a simple (and stupid) shell script that assumes that:
- Your module is composed of `<module>.c` and `<module>.h`
- Your test suite is names `<module>_suite.c`
- You are using gcc (you should better replace by $CC)

It does the following (based on assumptions explained above):
- Find existing test suites 
- Compile them
- Run them

## How I use it 

I run the unit tests in background, for example every 5 seconds (for a small dojo with quick feedback). So I simply run the following command line: `watch  --interval=5 ./run_tests.sh`

Then code and see how the test pass by the same time.



