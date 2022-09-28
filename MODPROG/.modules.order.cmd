cmd_/home/praghadeesh/Misc/MODPROG/modules.order := {   echo /home/praghadeesh/Misc/MODPROG/hello.ko; :; } | awk '!x[$$0]++' - > /home/praghadeesh/Misc/MODPROG/modules.order
