#ifndef __CPU_H
#define __CPU_H

#include "lvgl.h"
#include "base.h"

class Cpu 
{
public:
    Cpu(lv_obj_t *base_obj);
    ~Cpu() = default;
    static void get_key_value();
    static void show_key_value();
    static void show_key_value_enable();
    static void show_key_value_disable();
    static void timer_task(lv_timer_t *arg);
};

// void cpu_show();

#endif