/* The source file contains the code to add the hellow.c module to the kernel.



Author : adambure21
email  : adambure21@gmail.com

*/
#include<linux/init.h>          // The init header file contains the macro defintions
#include<linux/kernel.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Abhinay Dipak Ambure");          // The author name for the Kernel module
MODULE_DESCRIPTION("In-Kernel,Hello World");
MODULE_VERSION("0.1");

static int count = 5;
static int i=0;
module_param(count,int,S_IRUGO);        // The paprameters are passed runtime to the user defined kernel module.

static int hello_init(void){            //User defined function.This function can be passed as argument to the kernel macro named "odule_init(____)".
	for(i=0;i<count;i++){
		printk(KERN_ALERT "This is abhinay written module for linux kernel\n");
	//	printk(KERN_ALERT "Pid is %d ",current->pid);
	}
	return 0;
}

static void hello_exit(void){           //User defined function.This function is passed to kernel macro named "module_exit(______)."
	printk(KERN_ALERT "I did finish my work\n");
}

module_init(hello_init);                //These are the kernel macros.  module_init() is called at insertion of module to kernel.i.e after "insmod module.ko" command.
module_exit(hello_exit);                //These are the kernel macros.  module_exit() is called at insertion of module to kernel.i.e after "rmmod module.ko" command.

