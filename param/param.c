/* Author   : Abhinay Dipak Ambure.
 * Email id : adambure21@gmail.com
 * weblink  : adambure21.github.io
 * 
 */

//  Normally for a c programme the runtime parameters are provided using the main(
#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/moduleparam.h>

static long int rollno = 2013016;	//Parameters provided at runtime.
static long int totol_sub = 5;		//Parameters provided at runtime.

module_param(rollno,long,0);
MODULE_PARM_DESC(rollno,"Roll number of Student");

module_param(totol_sub,long,0);
MODULE_PARM_DESC(totol_sub,"Total Subjects");

static int __init param_init(void){
//	static int i=0;
	printk(KERN_INFO "Roll no is %ld\n",rollno);
	printk(KERN_INFO "subject marks %ld \n",totol_sub);
	return 0;
}

static void __exit param_exit(void){
	printk(KERN_INFO "Completed task");
}

module_init(param_init);
module_exit(param_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Abhinay D Ambure");
MODULE_DESCRIPTION("User defined module with parameters");
MODULE_VERSION("1.0");


