# kernel_tutor

To install-it, use the insmod tool. Only super users can load and unload kernel modules.

$ sudo insmod <path-to>/hellokernel.ko 

To see if the kernel was load successfully use the lsmod tool, this tool will list all kernel modules loaded in your system.

$ lsmod

Now, if you look into the kernel log you should see the glorious message "Hello Kernel!".

You can do this with the dmesg tool.

$ dmesg

To unload the kernel module, use the rmmod tool.

$ sudo rmmod hellokernel
