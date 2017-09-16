# GetNtGlobalFlags

WTF?!?
------
Retrieves the value of PEB.NtGlobalFlags, which is well-known method to detect a user mode
debugger in Windows, via a high-level implementation that is portable between x86 and x64 architectures.

This is achieved by taking advantage of an undocumented function exported by Ntdll.dll, named
RtlGetNtGlobalFlags which does exactly what its name implies.

You can use it to compile 32/64-bit applications without going through low level assembly,
which requires adjusting the offsets between 32 and 64-bit buids of your binaries.

Another advantage of using this method is that if the relative offset of PEB.NtGlobalFlags
change, as long as the aforementioned function is exported by Ntdll, this method will still
work.

There is also a fail safe in case RtlGetNtGlobalFlags is removed from the exported functions
of Ntdll.dll.

As a side-note, I had initially posted a short version of this as an answer in a private forum,
which later someone copied and pasted in his own public blog. As far as I know he has now removed
it, and so I decided to release it myself since other people might find it useful as well.


Disclaimer
----------
I wrote this for fun to use in other private projects. Use at your own risk.


Author
------
Author: Kyriakos Economou (@kyREcon) / www.anti-reversing.com


MIT License
-----------

Copyright (c) [2017] [Kyriakos Economou]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
