find / -type f -name "authorized_keys" -exec rm -i {} \;
# delete all authorized_keys, but ask permission first bc im nice like that
echo "Open Ports--------------------------------------------------" > fivemininfo.txt
netstat -tulpen >> fivemininfo.txt
# list all open ports in a text file bc we like text files
echo "Processes---------------------------------------------------" >> fivemininfo.txt
ps aux >> fivemininfo.txt
# list all running processes in the same text file bc too many text files makes me sad
echo "Running Services--------------------------------------------" >> fivemininfo.txt
systemctl list-units --type=service --state=running >> fivemininfo.txt
# write running services to that very same file bc its important or smth
echo "this is for logging all changes made to files while root is logged in" > /var/log/bluelogs.txt
echo "* * * * * find {DIR} -xdev -mmin -1 -ls >> /var/log/bluelogs.txt 2> /dev/null" >> /var/spool/cron/root
# start logging all changes to files and writing them down
echo "Scheduled stuff---------------------------------------------" >> fivemininfo.txt
ls -la /etc/cron* >> fivemininfo.txt
ls /var/spool/cron/crontabs >> fivemininfo.txt
# scheduled stuff is cool and yea i stole them both
echo "All users---------------------------------------------------" >> fivemininfo.txt
awk -F: '{ print $1}' /etc/passwd >> fivemininfo.txt
# i honestly dont know how it works but i like it
echo "Logged in users---------------------------------------------" >> fivemininfo.txt
w >> fivemininfo.txt
# kill my own user so that not even I can mess up our services
echo "\n\n\n\n\n\n\nCHANGE YOUR PASSWORDS\n\n\n\n\n\n\n"
