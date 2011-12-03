Cygni Examples V1.00
teho Labs 7/2011

Please see http://teholabs.com/docs/cygni:examples for documentation

Notes:
You must use a version of OpenOCD later than August 2nd, 2011 for the openocd.cfg scripts to work unmodified.
If you are using a version of OpenOCD earilier than this you may link to the stellaris.cfg script provided in the extras/openocd directory.

LM3S3N26 has a erratum for reset. OpenOCD notes that you will on "reset" the peripherals are not reset. If switching between programs and one assumes the reset value for a configuration this can seem like a bug. The simplest method to fix this issue is to press the physical reset button after programming, or configure all used peripherals in your code.
