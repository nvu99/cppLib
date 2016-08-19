<h2>Queue</h2>

```#include "queue.h"```<br>
```class Queue<ValueType>```<br>
<p>This class models a linear structure cakked a <b>queue</b> in which values are added at one end and removed from the other. This discipline gives rise to a first-in/first-out behavior (FIFO) that is the defining feature of queues. The fundamental queue operations are <b>enqueue</b> (add to back) and <b>dequeue</b> (remove from front).</p>

<h3>Constructor</h3>
<table>
<tr>
  <td>Queue()</td>
  <td>O(1)</td>
  <td>Initializes a new empty queue. </td>
</tr>
</table>

<h3>Methods</h3>
<table>
<tr>
	<td>back()</td>
	<td>O(1)</td>
	<td>Returns the value of the element at the back of this queue by reference.</td>
</tr>
<tr>
	<td>clear()</td>
	<td>O(N)</td>
	<td>Removes all elements from this queue.</td>
</tr>
<tr>
	<td>dequeue()</td>
	<td>O(1)</td>
	<td>Returns and removes the element at the front of this queue.</td>
</tr>
<tr>
	<td>enqueue(<b>value</b>)</td>
	<td>O(1)</td>
	<td>Adds the specified value to the back of this queue.</td>
</tr>
<tr>
	<td>front()</td>
	<td>O(1)</td>
	<td>Returns the value of the element at the front of this queue by reference.</td>
</tr>
<tr>
	<td>isEmpty()</td>
	<td>O(1)</td>
	<td>Returns <b>true</b> if this list contains no elements.</td>
</tr>
<tr>
	<td>peek()</td>
	<td>O(1)</td>
	<td>Returns the value of the element at the front of the queue.</td>
</tr>
<tr>
	<td>size()</td>
	<td>O(1)</td>
	<td>Returns the number of elements in this queue.</td>
</tr>
<tr>
	<td>toString()</td>
	<td>O(N)</td>
	<td>Returns a printable representation of the elements in this queue.</td>
</tr>
</table>

<h3>Operators</h3>
<table>
<tr>
	<td>queue1 == queue2</td>
	<td>O(N)</td>
	<td>Returns <b>true</b> if queue1 and queue2 contain the same elements in the same order.
</tr>
<tr>
	<td>queue1 != queue2</td>
	<td>O(N)</td>
	<td>Returns <b>true</b> if queue1 and queue2 are different.
</tr>
<tr>
	<td>ostream& <<</td>
	<td>O(N)</td>
	<td>Outputs the contents of the queue into the given output stream.</td>
</tr>
<tr>
	<td>istream& >></td>
	<td>O(1)</td>
	<td>Enqueues the element in the given input stream into the queue.</td>
</tr>
</table>