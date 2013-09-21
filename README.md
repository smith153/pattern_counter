pattern_counter
===============

Transverses (recursively) a file looking for repeating digits, inserts counts to linked-list.

Was originally used to analyze data compression.

Compile with make.

Run like:

./scanner [match_limit] [filename]

Example output:

<pre>./scanner 3 test.bmp
Digit 0 of length 3 has 23 counts
Digit 0 of length 4 has 16 counts
Digit 0 of length 5 has 16 counts
Digit 0 of length 6 has 9 counts
Digit 0 of length 7 has 3 counts
Digit 0 of length 14 has 1 counts
Digit 1E of length 3 has 1 counts
Digit 3C of length 3 has 3 counts
</pre>
