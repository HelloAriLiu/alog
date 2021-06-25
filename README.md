# alog
>一个简单的Linux 日志库适用于小型嵌入式方案，使用简单并支持线程安全，只需要引用`#include "alog_printf.h"`
* 可以设置输出到指定路径下保存成文件
* 日志文件以创建时间先后命名
* 日志文件的大小和个数可设置，当超出设置限制后根据创建时间循环覆盖
* 日志的保存等级可设置
* 可控制是否打印在终端
* 可输出打印时间、调用函数和行数
## 说明
>__`alog_printf(level, outputEnable, ...);`__  
* __level__: 日志等级
    * ALOG_LVL_ASSERT 最高
    * ALOG_LVL_ERROR
    * ALOG_LVL_WARN
    * ALOG_LVL_DEBU
    * ALOG_LVL_INFOG
    * ALOG_LVL_CLOSE 关闭
* __outputEnable__: 打印使能
    * TURE
    * FALSE
 
### 示例
>`#include "alog_printf.h"`  
>
>`alog_printf(ALOG_LVL_DEBUG, TURE, "this is a test \n");`
