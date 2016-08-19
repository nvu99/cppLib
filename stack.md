<h2>Stack</h2>

```#include "stack.h"```<br>
```class Stack<ValueType>```<br>
<p>This class models a linear structure called a <b>stack</b> in wchih values are added and removed only from one end. This discipline gives rise to a last-in/first-out behavior (LIFO) that is the defining feature of stacks. The fundamental stack operations are <b>push</b> (add to top) and <b>pop</b> (remove from top).</p>

<h3>Constructor</h3>
<table>
<tr>
  <td>Stack()</td>
  <td>O(1)</td>
  <td>Initializes a new empty stack. </td>
</tr>
</table>

<h3>Methods</h3>
<table>
<tr>
	<td>clear()</td>
	<td>O(N)</td>
	<td>Removes all elements from this stack.</td>
</tr>
<tr>
	<td>isEmpty()</td>
	<td>O(1)</td>
	<td>Returns <b>true</b> if this stack contains no elements.</td>
</tr>
<tr>
	<td>peek()</td>
	<td>O(1)</td>
	<td>Returns the topmost element.</td>
</tr>
<tr>
	<td>pop()</td>
	<td>O(1)</td>
	<td>Returns and removes the topmost element.</td>
</tr>
<tr>
	<td>push(<b>value</b>)</td>
	<td>O(1)</td>
	<td>Pushes the specified value onto the top of the stack.</td>
</tr>
<tr>
	<td>size()</td>
	<td>O(1)</td>
	<td>Returns the number of elements in this stack.</td>
</tr>
<tr>
	<td>toString()</td>
	<td>O(N)</td>
	<td>Returns a printable representation of the elements in this stack.</td>
</tr>
</table>

<h3>Operators</h3>
<table>
<tr>
	<td>stack1 == stack2</td>
	<td>O(N)</td>
	<td>Returns <b>true</b> if stack1 and stack2 contain the same elements in the same order.
</tr>
<tr>
	<td>stack1 != stack2</td>
	<td>O(N)</td>
	<td>Returns <b>true</b> if stack1 and stack2 are different.</td>
</tr>
<tr>
	<td>ostream& << stack</td>
	<td>O(N)</td>
	<td>Outputs the contents of this stack to the given output stream.</td>
</tr>
<tr>
	<td>istream& >> stack</td>
	<td>O(1)</td>
	<td>Pushes the element from the input stream onto the stack.</td>
</tr>
</table>

<h3>Constructor detail</h3>
Call ```Stack<ValueType> stack;```<br>
e.g. ```Stack<int> stack;```

<h3>Method detail</h3>
<h4>void clear();</h4>
Removes all elements from this stack<br>
Usage: ```stack.clear();```
<h4>bool isEmpty();</h4>
Returns <b>true</b> if this stack contains no elements.<br>
Usage: ```stack.isEmpty();```
<h4>ValueType peek();</h4>
Returns the topmost element.<br>
Usage: ```stack.peek();```
<h4>ValueType pop();</h4>
Returns and removes the topmost element.<br>
Usage: ```ValueType val = stack.pop();``` or simply ```stack.pop();```
<h4>void push(ValueType value);</h4>
Pushes the specified value onto the top of the stack.<br>
Usage: ```stack.push(999);```
<h4>int size();</h4>
Returns the number of elements in this stack.<br>
Usage: ```int n = stack.size();```
<h4>string toString();</h4>
Returns a printable representation of the elements in this stack.<br>
Usage: ```string s = stack.toString();``` or ```cout << stack.toString();```