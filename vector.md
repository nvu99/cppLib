<h2>Vector</h2>

```#include "vector.h"```<br>
```class Vector<ValueType>```<br>
<p>This class is an enhanced version of the array. It supports insert/remove operations. Similar to the STL <b>vector</b> type.</p>

<h3>Constructor</h3>
<table>
<tr>
  <td>vector()</td>
  <td>O(1)</td>
  <td>Initializes a new empty vector. </td>
</tr>
</table>

<h3>Methods</h3>
<table>
<tr>
  <td>add(<b>value</b>)</td>
  <td>O(1)</td>
  <td>Adds a new value to the end of the vector.</td>
</tr>
<tr>
  <td>insert(<b>index</b>, <b>value</b>)</td>
  <td>O(N)</td>
  <td>Inserts the element before the specified index.</td>
</tr>
<tr>
  <td>remove(<b>index</b>)</td>
  <td>O(N)</td>
  <td>Removes the element at the specified index.</td>
</tr>
<tr>
  <td>set(<b>index</b>, <b>value</b>)</td>
  <td>O(1)</td>
  <td>Changes the value at the specified index to the specified value.</td>
</tr>
<tr>
  <td>get(<b>index</b>)</td>
  <td>O(1)</td>
  <td>Returns the value at the specified index.</td>
</tr>
<tr>
  <td>clear()</td>
  <td>O(1)</td>
  <td>Removes all elements from this vector.</td>
</tr>
<tr>
  <td>toString()</td>
  <td>O(N)</td>
  <td>Converts this vector into a printable representation.</td>
</tr>
<tr>
  <td>subList(<b>start</b>, <b>length</b>)</td>
  <td>O(N)</td>
  <td>Returns a new vector containing the elements of the given sub-range.</td>
</tr>
<tr>
  <td>contains(<b>value</b>)</td>
  <td>O(N)</td>
  <td>Returns <b>true</b> if this vector contains the specified value.</td>
</tr>
<tr>
  <td>isEmpty()</td>
  <td>O(1)</td>
  <td>Returns <b>true</b> if this vector contains no elements.
</tr>
<tr>
  <td>size()</td>
  <td>O(1)</td>
  <td>Returns the number of elements in this vector.</td>
</tr>
</table>
<h3>Operators</h3>
<table>
<tr>
  <td>vector[index]</td>
  <td>O(1)</td>
  <td>Selects the element at the specified index.</td>
</tr>
<tr>
  <td>vector1 + vector2</td>
  <td>O(N)</td>
  <td>Concatinates the two vectors.</td>
</tr>
<tr>
  <td>vector += value</td>
  <td>O(1)</td>
  <td>Calls add() on this vector for the given value.</td>
</tr>
<tr>
  <td>vector1 == vector2</td>
  <td>O(N)</td>
  <td>Returns <b>true</b> if <b>vector1</b> and <b>vector2</b> are identical.</td>
</tr>
<tr>
  <td>vector1 != vector2</td>
  <td>O(N)</td>
  <td>Returns <b>true</b> if <b>vector1</b> and <b>vector2</b> are different.</b>
</tr>
<tr>
  <td>ostream << vector</td>
  <td>O(N)</td>
  <td>Outputs the contents of the vector to the given output stream.</td>
</tr>
<tr>
  <td>istream >> vector</td>
  <td>O(1)</td>
  <td>Reads the value from the input stream into the vector.</td>
</tr>
</table>

<h4>Constructor detail</h4>
Call ```vector<ValueType> vector;```<br>
e.g. ```vector<string> vector;```
