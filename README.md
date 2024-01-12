<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
  <h2>Git Repository Information</h2>

  <table>
    <tr>
      <th>Action</th>
      <th>Command</th>
      <th>Result</th>
    </tr>
    <tr>
      <td>Start SSH Agent</td>
      <td>eval "$(ssh-agent -s)"</td>
      <td>Agent pid 679</td>
    </tr>
    <tr>
      <td>Add SSH Key to Agent</td>
      <td>ssh-add ~/.ssh/suvith</td>
      <td>Identity added: /home/suvith/.ssh/suvith (suvithkumar0000@gmail.com)</td>
    </tr>
    <tr>
      <td>SSH Connection Test</td>
      <td>ssh -T git@github.com</td>
      <td>Hi Htivus! You've successfully authenticated, but GitHub does not provide shell access.</td>
    </tr>
    <tr>
      <td>Check SSH Key List</td>
      <td>ssh-add -l</td>
      <td>4096 SHA256:XvS/kx490690n+4GVDAxlZ7kA60Hb6/kIdI+mO8zRrk suvithkumar0000@gmail.com (RSA)</td>
    </tr>
    <tr>
      <td>Set Git Remote URL to SSH</td>
      <td>git remote set-url origin git@github.com:Htivus/C_Programing.git</td>
      <td>URL updated successfully</td>
    </tr>
    <tr>
      <td>Git Pull</td>
      <td>git pull</td>
      <td>Pull successful without password prompt</td>
    </tr>
  </table>
<h1>GDB Commands</h1>
<h3>gcc -o Temp Temp.c -g </h3>
<table>
  <tr>
    <th>Command</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><code>run</code></td>
    <td>Start executing the program.</td>
  </tr>
  <tr>
    <td><code>break</code></td>
    <td>Set a breakpoint at a specified line or function.</td>
  </tr>
  <tr>
    <td><code>info breakpoints</code></td>
    <td>Show information about breakpoints.</td>
  </tr>
  <tr>
    <td><code>delete</code></td>
    <td>Delete a breakpoint by its number.</td>
  </tr>
  <tr>
    <td><code>continue</code></td>
    <td>Continue program execution until the next breakpoint.</td>
  </tr>
  <tr>
    <td><code>next</code></td>
    <td>Execute the next line of code, stepping over function calls.</td>
  </tr>
  <tr>
    <td><code>step</code></td>
    <td>Execute the next line of code, stepping into function calls.</td>
  </tr>
  <tr>
    <td><code>stepi</code></td>
    <td>Step one machine instruction exactly.</td>
  </tr>
  <tr>
    <td><code>nexti</code></td>
    <td>Step one machine instruction, but proceed through subroutine calls.</td>
  </tr>
  <tr>
    <td><code>finish</code></td>
    <td>Execute until the current function is finished.</td>
  </tr>
  <tr>
    <td><code>info locals</code></td>
    <td>Show values of local variables in the current stack frame.</td>
  </tr>
  <tr>
    <td><code>info registers</code></td>
    <td>Show values of CPU registers.</td>
  </tr>
  <tr>
    <td><code>list</code></td>
    <td>Show the source code around the current line.</td>
  </tr>
  <tr>
    <td><code>print</code></td>
    <td>Print the value of a variable or expression.</td>
  </tr>
  <tr>
    <td><code>backtrace</code></td>
    <td>Show the current call stack.</td>
  </tr>
  <tr>
    <td><code>info threads</code></td>
    <td>Show information about all threads.</td>
  </tr>
  <tr>
    <td><code>thread</code></td>
    <td>Switch between threads.</td>
  </tr>
  <tr>
    <td><code>info breakpoints</code></td>
    <td>Show information about breakpoints.</td>
  </tr>
  <tr>
    <td><code>set variable</code></td>
    <td>Change the value of a variable.</td>
  </tr>
  <tr>
    <td><code>display</code></td>
    <td>Print the value of an expression at each stop.</td>
  </tr>
  <tr>
    <td><code>undisplay</code></td>
    <td>Remove a display expression.</td>
  </tr>
  <tr>
    <td><code>list source_file:line</code></td>
    <td>Show the source code around a specific line.</td>
  </tr>
  <tr>
    <td><code>info breakpoints</code></td>
    <td>Show information about breakpoints.</td>
  </tr>
  <tr>
    <td><code>info files</code></td>
    <td>Show information about the executable and its sources.</td>
  </tr>
  <tr>
    <td><code>info functions</code></td>
    <td>List all global functions.</td>
  </tr>
  <tr>
    <td><code>info variables</code></td>
    <td>List all global variables.</td>
  </tr>
  <tr>
    <td><code>quit</code></td>
    <td>Exit GDB.</td>
  </tr>
</table>

<h2>Git Commands</h2>

<table>
  <tr>
    <th>Action</th>
    <th>Command</th>
  </tr>
  <tr>
    <td><strong>Git Initialization:</strong></td>
    <td></td>
  </tr>
  <tr>
    <td>Create a new Git repository</td>
    <td><code>git init</code></td>
  </tr>
  <tr>
    <td>Clone an existing Git repository</td>
    <td><code>git clone &lt;repository_url&gt;</code></td>
  </tr>
  <tr>
    <td><strong>Adding SSH Keys:</strong></td>
    <td></td>
  </tr>
  <tr>
    <td>Check for existing SSH keys</td>
    <td><code>ls -al ~/.ssh</code></td>
  </tr>
  <tr>
    <td>Generate a new SSH key</td>
    <td><code>ssh-keygen -t rsa -b 4096 -C "your_email@example.com"</code></td>
  </tr>
  <tr>
    <td>Start the SSH agent</td>
    <td><code>eval "$(ssh-agent -s)"</code></td>
  </tr>
  <tr>
    <td>Add SSH key to SSH agent</td>
    <td><code>ssh-add ~/.ssh/id_rsa</code></td>
  </tr>
  <tr>
    <td>Copy SSH key to clipboard</td>
    <td><code>xclip -sel clip &lt; ~/.ssh/id_rsa.pub</code> (Linux)<br><code>pbcopy &lt; ~/.ssh/id_rsa.pub</code> (macOS)</td>
  </tr>
  <tr>
    <td><strong>Committing to a Remote Repository:</strong></td>
    <td></td>
  </tr>
  <tr>
    <td>Add files to staging area</td>
    <td><code>git add .</code></td>
  </tr>
  <tr>
    <td>Commit changes</td>
    <td><code>git commit -m "Your commit message"</code></td>
  </tr>
  <tr>
    <td>Add remote repository (if not cloned)</td>
    <td><code>git remote add origin &lt;repository_url&gt;</code></td>
  </tr>
  <tr>
    <td>Push changes to remote repository</td>
    <td><code>git push -u origin master</code> (replace "master" with your branch name)</td>
  </tr>
</table>

</body>
</html>
