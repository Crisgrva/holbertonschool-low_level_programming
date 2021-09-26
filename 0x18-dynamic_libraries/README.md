<h1 class="gap">0x18. C - Dynamic libraries</h1>
<div class="gap" id="project-description">
  <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/FrHmqtTW-frrOt0yf2blOw" title="What is difference between Dynamic and Static library (Static and Dynamic linking)" target="_blank">What is difference between Dynamic and Static library (Static and Dynamic linking)</a> </li>
<li><a href="/rltoken/Zj0XtgNWUQyEYuABr47p8Q" title="create dynamic libraries on Linux" target="_blank">create dynamic libraries on Linux</a> </li>
<li><a href="/rltoken/NnmQ5eohod3BpT3r0cFlRA" title="Technical Writing" target="_blank">Technical Writing</a></li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/qVDybpvE3qFJvL6234TyGA" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a dynamic library, how does it work, how to create one, and how to use it</li>
<li>What is the environment variable <code>$LD_LIBRARY_PATH</code> and how to use it</li>
<li>What are the differences between static and shared libraries</li>
<li>Basic usage <code>nm</code>, <code>ldd</code>, <code>ldconfig</code></li>
</ul>

<h2>Requirements</h2>

<h3>C</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are not allowed to use the standard library. Any use of functions like <code>printf</code>, <code>puts</code>, etc&hellip; is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>holberton.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
</ul>

<h3>Bash</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your scripts will be tested on Ubuntu 20.04 LTS</li>
<li>All your files should end with a new line (<a href="http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789">why?</a>)</li>
<li>The first line of all your files should be exactly <code>#!/bin/bash</code></li>
<li>A <code>README.md</code> file, at the root of the folder of the project, describing what each script is doing</li>
<li>All your files must be executable</li>
</ul>

