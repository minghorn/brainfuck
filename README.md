# Brainfuck
Brainfuck interpreter written in C

><strong>\></strong>   increment the data pointer (to point to the next cell to the right).
>
><strong>\<</strong>    decrement the data pointer (to point to the next cell to the left).
>
><strong>\+</strong>    increment (increase by one) the byte at the data pointer.
>
><strong>\-</strong>    decrement (decrease by one) the byte at the data pointer.
>
><strong>.</strong>    output the byte at the data pointer.
>
><strong>,</strong>	   take one byte of input and save it at the data pointer.
>
><strong>[</strong>    if the byte at the data pointer is zero, then instead of moving the instruction pointer forward to the next command,           jump it forward to the command after the matching ] command.
>
><strong>]</strong>    if the byte at the data pointer is nonzero, then instead of moving the instruction pointer forward to the next command,       jump it back to the command after the matching [ command.
