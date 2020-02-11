#include <linux/kernel.h>
#include <linux/module.h>


/*
 * Init function of our module
 */
static int __init hellokernelmod_init(void)
{
 printk(KERN_INFO "Hello Kernel!\n");
 return 0;
}

/*
 * Exit function of our module.
 */
static void __exit hellokernelmod_exit(void)
{
 printk(KERN_INFO "Hasta la vista, Kernel!\n");
}

MODULE_AUTHOR("Your name here");
MODULE_DESCRIPTION("Simple Kernel Module to display messages on init and exit.");
MODULE_LICENSE("MIT");


module_init(hellokernelmod_init);
module_exit(hellokernelmod_exit);
