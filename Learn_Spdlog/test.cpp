/*
 * @Author: yowayimono 3485000346@qq.com
 * @Date: 2023-04-01 18:28:27
 * @LastEditors: yowayimono 3485000346@qq.com
 * @LastEditTime: 2023-04-01 22:29:10
 * @FilePath: /Learn_Spdlog/test.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <spdlog/spdlog.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <iostream>
#include <string>
#include "Myio.hpp"
int main()
{
    //spdlog::info("Hello,{}!","World{0:d}",2);
    //spdlog::error("error qwm");
    //spdlog::warn("hello wlord!");//简单输出在控制台，低级输出

    /*try{//这种方式创建，日志文件会一直写入数据，不断变大
        auto logger=spdlog::basic_logger_mt("sbasic_logger","logs/basic.txt");
        logger->info("Hello{}","Wlord!");
    }
    catch (const spdlog::spdlog_ex& ex){
        print("over!");
    }*/ //输出到文件中，logger为一个全局对象。

    /*auto logger=spdlog::basic_logger_mt("qwm","2023.4.2.txt");

    //输出到文件且线程安全    
    for(auto i=0;i<10000;i++)    logger->error("error{0:d}",i),logger->flush();;
    */

   //spdlog里对象都有单线程和多线程两个版本
    //auto logger=spdlog::stdout_color_st("logger1");
    //logger->info("error  ssss");//定义一个输出到控制台的全局对象，不是线程安全的,等价与spdlog::info("error   sss");

    /*
    auto logger=spdlog::stdout_color_mt("qwm");
    spdlog::set_level(spdlog::level::warn);
    logger->info("hello1");
    logger->warn("hello2");//限定日志输出等级，高于指定等级才输出
    logger->error("hello3");
    enum level_enum{//等级表，level tables
        trace=SPDLOG_LEVEL_TRACE,
        debug=SPDLOG_LEVEL_DEBUG,
        info=SPDLOG_LEVEL_INFO,
        warn=SPDLOG_LEVEL_WARN,
        err=SPDLOG_LEVEL_ERROR,
        critical=SPDLOG_LEVEL_CRITICAL,
        off=SPDLOG_LEVEL_OFF,
        n_level
    };
    spdlog::ste_pattern("[%Y-%m-%d %H:%M:%S] [%l] [%n],%v");自定义输出格式
    spdlog::get("qwm")->info("hello");//通过get方法获取相应对象指针 

    spdlog::drop_all();//关闭所有logger对象
    *///
    /*
     *关于自定义输出格式
     *%v 后面记录的实际文本
     *%t 线程ID
     *%P 进程ID
     * %n 对象名
     *%l 日志等级
     *%L log level
     *%a 工作日的缩写 
     *%@ 
     *%s 
     *%# 
     *%! 
     * 
     * 
     * 
     * 
     * 
     * 
     * 
     * 
     * 
     * 
     * 
     * 
     * 
     */

    /*
    auto rotating_logger=spdlog::rotating_logger_mt("qwm","logqwm",1024,5);
    for(auto i=0;i<100;i++)
    {
        rotating_logger->info("error qwm {0:d}",i);
    }
*/

    return 0;
}