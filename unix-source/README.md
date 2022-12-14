# Source Code

The files in this directory and its associated subdirectories contain
the source code from the book ``Accelerated C++: Practical Programming
by Example'' by Andrew Koenig and Barbara E. Moo (Addison-Wesley 2000,
ISBN 0-201-70353-X).  They are mechanically extracted from the files
that are used to produce the book.  Accordingly, they should match the
book exactly--specifically, the fifth printing, which isn't out
yet--except for some deliberate changes that are needed to deal with
the realities of running C++ programs.

We have compiled and run these files on two different compilers:
```
	The GNU ``g++'' compiler, version 2.95.2, under both
	the Solaris operating system and Microsoft Windows,
	the latter under the Cygwin programming environment
	available from http://sources.redhat.com/cygwin

	The Microsoft Visual C++ compiler, version 6.0, with
	Service Pack 4 installed.
```
In order to run these files under these compilers, we have had to
change them slightly from what appears in the book.  In all cases, we
have identified these changes with #ifdef directives of the form
```
	#ifdef __GNUC__
		code that will work under the g++ compiler
	#else
		code as it appears in the book
	#endif
```
or
```
	#ifdef _MSC_VER
		code that will work under the Microsoft compiler
	#else
		code as it appears in the book
	#endif
```
or variations on this theme.

In addition, we have added main programs, test data, and makefiles to
enable you to compile and run the code.

For each chapter in the book, there is a corresponding directory that
contains the source code from that chapter.  Assuming that your
system is configured correctly, you should be able to go into any of
these directories and say

```shell
make
```

to compile the programs,
```shell
make test
```
to execute them, and

```shell
make clobber
```

to remove all the files that were generated during compilation.



All of the files in these directories are copyrighted by AT&T and
Barbara E. Moo, and they come with absolutely no warranty whatsoever.
Permission is hereby granted to use these programs for educational
purposes.

We would like to know about errors in these files and suggestions for
making them easier to use with other compilers.

					Regards,


					Andrew Koenig
					ark@research.att.com


					Barbara E. Moo
					bmoo@att.net
