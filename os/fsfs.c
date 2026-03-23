ubuntu
ping- ping -i 5 google.com
ping -c 5 google.com- Send 5 packets and stop ping also note the ipaddress
ping -s 100 google.com- Change the ping packet size.
ping -w 5 localhost- Set the timeout for ping to 5 secs.
ping 192.168.2.1 192.168.2.228 localhost- Specify path of ip addresses for ping to send the packet
command prompt
tracert www.google.com- tracing route of the link
tracert -h 2 www.google.com- Display information of only two hops on route
ubuntu
netstat- netstat (network statistics) is a command line tool for monitoring network connections both incoming and outgoing
netstat -at- TCP ports connections
netstat -au- UDP ports connections
netstat -l- All listening connections
netstat -lt- TCP listening ports
netstat -s- Show statistics by protocol
netstat -su- Show statistics by UDP protocol
netstat -r- Kernel IP routing
command prompt
arp -a- Display the contents of the arp table
arp -s 157.55.85.212 00-aa-00-62-c6-0- Add a entry to arp table
arp -a -v- Display whether the entries are valid or invalid
arp -d 157.55.85.212- Delete any one invalid entry
ipconfig- Displays information about all network interfaces currently in operation
ipconfig /all- Find the physical address of the machine.
zenmap
Run a java client-server java application Use zenmap to scan
the open port of server and communicate with it.
Step 1 Execute the java server application on machine 1 with
port number 9000 ‘TcpServer.java’
Step 2 Use zenmap tool on machine 2 to scan the machine 1 ip
to find open port 9000
Step 3 Note the client connected message in server program
on machine 1 as the zenmap is taken as client
Step 4 Execute client program on machine 2 to chat with server
.Set windows firewall off on both machines. Put the ip or
computer name of machine 1 in socket address
Code
TcpServer.java
import java.net.*;
import java.io.*;
public class TcpServer
{
public static void main(String arg[]) throws Exception
{
OutputStream os;
System.out.println("SERVER");
ServerSocket ss=new ServerSocket(9000);
Socket s1=ss.accept();
os=s1.getOutputStream();
byte b[]=new byte[1000];
System.out.println("Client Connected .");
System.out.println("Enter ur message .");
System.in.read(b,0,b.length);
os.write(b);
InputStream is=s1.getInputStream();
BufferedReader br=new BufferedReader(new
InputStreamReader(is));
System.out.println(br.readLine());
}
}
TcpClient.java
import java.net.*;
import java.io.*;
public class TcpClient
{
public static void main(String arg[]) throws Exception
{
System.out.println("CLIENT");
byte b[]=new byte[1000];
Socket s1=new Socket("COmputername OR
IP",9000);
System.out.println("Server Found");
InputStream is=s1.getInputStream();
BufferedReader br=new BufferedReader(new
InputStreamReader(is));
System.out.println(br.readLine());
OutputStream os=s1.getOutputStream();
System.in.read(b,0,1000);
os.write(b);
}
}
open zenmap(command)- nmap -p 9000 192.168.1.5(the ipv4 address)
Wireshark -ICMP,TCP
Step1: start wire shark and double click on ethernet
Step2: It will give you some packets then click on stop button and add filter ICMP and click on shark sign then go to command prompt and give one command to trace
Step3: copy IP address from command prompt and write in filter ip.addr== (your ip address) then it will show you that ip address
Step4: now do the same for tcp but for tcp you have to use netstat command in commam=nd prompt after that apply filter tcp it will show you
Step5: for TCP you have to connect client server with two pcs for that you have to write code from second practical and then give command ipconfig in command prompt
Step6: after this you have to take ip of server and write it into clients code after that run it in command prompt
Step9: after that you have to apply tcp filter and then apply again tcp.port==9000 it will give you some packets right click on last server and do follow then it will show you the message
Wireshark -http,IP,UDP
Step1: start wireshark and select ethernet
Step2: give filter ip and after that give any ip address
Step3: do tracert (your site starting from www ) trace ip in command prompt then copy it to filter ip.addr== ip address
Step4: now do for udp ou have to search for udp and then click on analyze and click on display expression after that search for udp
Step5: then select udp.datagram protocol and select udp.checksum.status after that do click on good and ok
Step6: double click on any address and then it will show you but if it is not showing then right click and then go to protocol preference and user datagram protocol and validate it then it will show you the status
Step7: do same for http
ipv4 adress- 192.168.1.10, 192.168.1.11, 192.168.2.10, 192.168.2.2
Connecting Wired and Wireless Network- 4 pcs, 2 switches, 1 routers, 1 laptop, wireless router
Design the network in packet tracer based on attached image
Steps
Take router, PCs and switch > connect them using copper straight through > set ip address of router by choosing config and in that fastEthernet0/0 
Now go to physical in router > and place that chip in the router while switch is off and then on the switch
Set the ip address of PCs by going in FastEthernet0 > then set
the default gateway same as the router’s ip address
Dns : Domain Name System
DNS converts domain names into IP addresses. From a
security perspective, it helps you identify malware trying to
contact suspicious servers or detect DNS spoofing where an
attacker sends you to a fake version of a website.
● tcp.port==80
It shows all TCP packets that are using port 80.
TCP is a connection-oriented protocol that ensures:
● Data arrives in order
● No data is lost or duplicated
● Communication happens between verified endpoints
● Arp
ARP appears in Wireshark because it’s essential for
resolving IP addresses to MAC addresses, enabling local
network communication, troubleshooting connectivity, and
detecting network attacks.
Zen map
● nmap -T4 -A -v
Performs a fast, aggressive, verbose scan that:
● Identifies open ports
● Detects running services and versions
● Attempts to identify the operating system
● Runs default vulnerability and info scripts
● Shows the network path to the target
● nmap -T4 -A -v -Pn
● Treats the target as online
● Skips ICMP ping, TCP ping, ARP ping
Why this matters:
● Useful when firewalls block ping
● Prevents Nmap from skipping “silent” hosts






