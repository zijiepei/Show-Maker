
/*
1.在java当中,每个java文件当中只能有一
个public类,且这个类名,一定要和文件名相同.
2.javac   windows中默认以GBK进行编码
需加 -encoding utf-8.
3.java的main函数,有一个参数:String[] args数组,字符串数组
作用是什么?
回答:命令行参数,当在运行java HelloWorld的时候,
java HelloWorld peizijie is
System.out.println();输出且换行
System.out.print();输出不换行
System.out.printf("%d",10);格式化输出
4.为什么main函数使用static关键字修饰?
5.类名大驼峰
6.System.out.println("HelloWorld");
双引号引起来的就是一个字符串


标识符的构成   数字 字母  下划线  $  
数字不能开头      变量名用字母遵循小驼峰  maxNum
下划线和$虽然可以开头,但是不建议:合法不合理
块注释;crt+shift+/   取消也一样
7.定义的局部变量不初始化编译无法通过;安全性.   
 */
class test {

}
public class HelloWorld {
    public static void main(String[] args) {
    	//打印args数组当中的数据
    	for(int i = 0;i < args.length;i++) {
         System.out.print(args[i]+" ");  
    	}
        System.out.println("HelloWorld");
    }
}