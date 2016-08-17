# cppLib
My own general purpose C++ library

This library is copyright (C) Thai Dai Vu Nguyen, licensed under GNU General Public License 3.0. All rights reserved.

#Reference
<h2>LinkedList</h2>
<h3>Constructor</h3>
<table>
<tr>
  <td>LinkedList()</td>
  <td>O(1)</td>
  <td>Initializes an new empty LinkedList. </td>
</tr>
</table>
<h4>Constructor detail</h4>
Call ```LinkedList<ValueType> list;```<br>
e.g. ```LinkedList<string> stringList;```
<h3>Methods</h3>
<table>
<tr>
  <td>add(<b>value</b>)</td>
  <td>O(1)</td>
  <td>Adds a new value to the end of the list.</td>
</tr>
<tr>
  <td>insert(<b>index</b>, <b>value</b>)</td>
  <td>O(1) front/end, O(N) avg</td>
  <td>Inserts the element before the specified index.</td>
</tr>
<tr>
  <td>remove(<b>index</b>)</td>
  <td>O(N)</td>
  <td>Removes the element at the specified index. To be improved.</td>
</tr>
<tr>
  <td>set(<b>index</b>, <b>value</b>)</td>
  <td>O(1) front/end, O(N) avg</td>
  <td>Changes the value at the specified index to the specified value.</td>
</tr>
<tr>
  <td>get(<b>index</b>)</td>
  <td>O(1) front/end, O(N) avg</td>
  <td>Returns the value at the specified index.</td>
</tr>
<tr>
  <td>clear()</td>
  <td>O(N)</td>
  <td>Removes all elements from this list.</td>
</tr>
<tr>
  <td>toString()</td>
  <td>O(N)</td>
  <td>Converts this list into a printable representation.</td>
</tr>
<tr>
  <td>subList(<b>start</b>, <b>length</b>)</td>
  <td>O(N)</td>
  <td>Returns a new list containing the elements of the given sub-range.</td>
</tr>
<tr>
  <td>contains(<b>value</b>)</td>
  <td>O(N)</td>
  <td>Returns <b>true</b> if this list contains the specified value.</td>
</tr>
<tr>
  <td>isEmpty()</td>
  <td>O(1)</td>
  <td>Returns <b>true</b> if this list contains no elements.
</tr>
<tr>
  <td>size()</td>
  <td>O(1)</td>
  <td>Returns the number of elements in this list.</td>
</tr>
</table>
<h3>Operators</h3>
<table>
<tr>
  <td>list[index]</td>
  <td>O(N)</td>
  <td>Calls get() on the specified index.</td>
</tr>
<tr>
  <td>list1 + list2</td>
  <td>O(N)</td>
  <td>Concatinates the two lists</td>
</tr>
<tr>
  <td>list += value</td>
  <td>O(1)</td>
  <td>Calls add() on this list for the given value.</td>
</tr>
<tr>
  <td>list1 == list2</td>
  <td>O(N)</td>
  <td>Returns <b>true</b> if <b>list1</b> and <b>list2</b> are identical.</td>
</tr>
<tr>
  <td>list1 != list2</td>
  <td>O(N)</td>
  <td>Returns <b>true</b> if <b>list1</b> and <b>list2</b> are different.</b>
</tr>
<tr>
  <td>ostream << list</td>
  <td>O(N)</td>
  <td>Outputs the contents of the list to the given output stream.</td>
</tr>
</table>
