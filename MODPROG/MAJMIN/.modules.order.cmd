cmd_/home/praghadeesh/Misc/MODPROG/MAJMIN/modules.order := {   echo /home/praghadeesh/Misc/MODPROG/MAJMIN/static_alloc.ko;   echo /home/praghadeesh/Misc/MODPROG/MAJMIN/dynamic_alloc.ko; :; } | awk '!x[$$0]++' - > /home/praghadeesh/Misc/MODPROG/MAJMIN/modules.order