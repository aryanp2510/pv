calendar of current month- cal
calender of month july of 1998- cal 07 1998
todays date- date
date as mm/dd/yyyy- date +%D
current hour min ans second- date +%H, date +%M, date +%S
day of the week- day +%A
time in am/pm notation- day +%r
all users currently logged in- who
login name of current terminal- whoami
terminal file of current terminal- tty
display msg "hello world"- echo "hello world"
ls- list of all files and directories
ls -l- list of all files and directories in multi coloumn format
ls-F- identifies directories and executable files
ls -a- shows all content including hidden files
ls -r- recursive list of all files and directories
ls -t- list of all files according to modification time
ls -tr- list of all files in reverse order
ls -X- sorts files according to their extensions
ls -Xr- sorts files in reverse order
ls ??- files with exactly 2 characters (jitna ? utna no. of characters)(*a=end, a*=start, ^=do not)
ls a*- files starting with lowercase a
ls B*- files starting with uppercase B
ls *i- files ending with lowercase i 
ls [a,e,i,o,u]*- files starting with vowels
ls *[a,e,i,o,u]- files ending with vouwels
ls [^a,e,i,o,u]*- files which do no start with vowels
ls [1-9]*- files which start with the digits in the range of 1-9
ls [A,E,I,O,U]*[0-9]- files that start with uppercase vowels and ends with a digit in the range of 0-9
uname- displays the name of the os
uname -a- prints all system info including kernel version
uname -n- prints network node
uname -r- displays kernel release date
id- displays UID of current user
whoami- displays username of the user who is currently logged in
chmod u+x file(filename)- assigns and exucutes permission to the user
chmod u-x file- removes permission from the user
chmod a+x file- assign and execute permission to all
chmod a-x file- remove permission from all
chmod g+w file- assign write permission
chmod g-w file- removes write permission
chmod g+r file- assign read permission
chmod g-r file- remove read permission
ownership
chown- change ownership of file
chgrp- change group permission of file
admin
su- switches current user sessions to superuser
mv file1 file2- rename
rm file- delete
r- read (r=4)
w- write (w=2)
x- execute (x=1)
(-)-permission denied (-=0)
(fullcontrol) rwx- 4+2+1=7
(read and write) (rw-)- 4+2+0=6
(read and execute) r-x- 4+0+1=5
(only read) (r--)- 4+0+0=4
file information and counting
file*- finds all types of files
we [files]- displays no. of lines, words and characters in the file
we -l[file]- counts only no. of lines
we -w[file]- counts only the no. of words
we -c[file]- counts only no.of characters
accesing a value
NAME = "apple"
 echo $ NAME
read-only variable
NAME = "apple"
 readonly NAME
NAME="banana"
 echo $ NAME
unsetting/ removing a variable
NAME = "apple"
 unset NAME
 echo $ NAME
+- addition
(-)- subtraction
*- multiplication
/ (division)- divides left operand by right operand (b/a)
% (modulus)- divides left operand by right operand and leaves a remainder(b%a)
= (assignment)- assigns right operand to left operand(assigns value of b to a)
== (equality- compares two numbers and based on it returns true
!= (not equality)- compares two numbers and based on it returns false
ex a=10, b=20
val= 'expr $a +$b'
echo "$a +$b = $val"
if [&a==$b]
then
echo "ais equal to $b"
relational operations
-eq- equal to
-ne- not eual to
-gt- greater than
-it- less that
