# QtCode 使用Qt编写的代码<br>
[了解GitHub-GFM语法规则](https://github.com/guodongxiaren/README "了解GitHub-GFM语法规则")<br>

- [x] 自定义控件
- [x] 信号槽
- [x] 多线程
- [x] 网络编程
- [x] 配置pro项目管理文件
- [x] Qt安装
- [x] qss样式表
- [x] 代码规范
- [x] 事件系统
- [x] 使用Q_UNUSED宏处理不使用的形参
- [x] 使用explicit防止类的构造函数发生隐式类型转换
- [ ] 使用JSON https://zhuanlan.zhihu.com/p/49951775


### 多线程
1、从QThread继承一个自定义类，并重定义虚函数run(),在run函数里实现线程需要完成的任务。
2、

Qt编程—去掉标题栏和设置窗口透明用法
https://blog.csdn.net/liuyang1990i/article/details/8227342

Qt 窗口操作函数（置顶、全屏，最大化最小化按钮设置等）
https://www.cnblogs.com/linuxAndMcu/p/11533636.html

QT 去掉标题栏和去掉标题栏后移动窗口
https://blog.csdn.net/mojianc/article/details/45111107

Qt如何设置某个区域透明（稍微修改一下，可设置为某个区域颜色）
https://blog.csdn.net/jigetage/article/details/85101842

QT显示图片的四种方法
https://www.cnblogs.com/lifan3a/articles/8629412.html

### 自定义控件案例
- [ ] 电池
- [ ] 按钮
- [ ] 对话框
- [ ] 转圈等待
- [ ] 进度条
- [ ] 苹果开关
  
#### FFMPEG
[雷神-FFMPEG视音频编解码零基础学习方法](https://blog.csdn.net/leixiaohua1020/article/details/15811977)

### VS2015创建和调用lib类
`文本文档，点download进行下载`<br>
https://github.com/MarsXiaolei/QtCode/blob/master/VS2015%E5%88%9B%E5%BB%BA%E5%92%8C%E8%B0%83%E7%94%A8lib%E7%B1%BB.docx<br>
调用lib注意点：<br>
`1、如果是已完成的lib，不需要进行修改，选择在属性中配置`<br>
`2、如果是未完成的lib，需要随时编译，选择预编译头中配置`<br>

### 绘制软件架构图
https://www.zhihu.com/question/27440059<br>

### 刘典武QT开源
https://github.com/feiyangqingyun/QWidgetDemo
https://www.zhihu.com/people/feiyangqingyun/


## 自定义按钮
* 按钮贴图
* 样式表实现
* 继承QPushButton，事件
