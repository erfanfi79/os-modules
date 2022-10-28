    #include <linux/init.h>
    #include <linux/module.h>
    // #include <linux/time.h>

    MODULE_LICENSE("GPL");
    MODULE_AUTHOR("Erfan Faravani GNU/Linux");
    MODULE_DESCRIPTION("A simple Application for showing time and student info");

    static int info_init(void){
        printk(KERN_INFO "Name: Erfan\n LastName: Faravani\n StudentId: 97102174\n");
        // unsigned long get_time;
        // int sec, hr, min, tmp1,tmp2, tmp3;
        // struct timeval tv;
        // struct tm tv2;

        // do_gettimeofday(&tv);
        // get_time = tv.tv_sec;
        // sec = get_time % 60;
        // tmp1 = get_time / 60;
        // min = tmp1 % 60;
        // tmp2 = tmp1 / 60;
        // hr = (tmp2 % 24) - 4;
        // time_to_tm(get_time, 0, &tv2);
        // tmp3 = tv2.tm_year;

        // printk(KERN_INFO "time ::  %d:%d:%d\n",hr,min,sec);
        // /* Add years since 1900. */
        // printk(KERN_INFO "Year: %d\n", tmp3 + 1900);
        return 0;
    }

    static void info_exit(void){
        printk(KERN_ALERT "info exited\n");
    }

    module_init(info_init);
    module_exit(info_exit);