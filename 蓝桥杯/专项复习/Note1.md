# 字符串复习



1. `to_string()`：数字转化为字符串

   ```cpp
   int i = 128;
   string s = to_string(i);	// s = "128"
   ```


   ​

2. `size()`：计算字符串长度

   ```cpp
   string s = "128";
   cout << s.size();	// 128
   ```
   ​

3. `reverse(s.begin(), s.end())` ： 翻转字符串

  ```cpp
  string s = "ads";
  reverse(s.being(), s.end());	// dsa
  ```
  ​

4. sort(s.begin(), s.end(), cmp)` ： 排序。

   ```cpp
   string s = "sda";
   sort(s.begin(), s.end());	// ads
   ```

   ​

5. `tolower()` ：把字符转化为小写


   ```cpp
   string s = "ABC";
   for(int i = 0; i < s.size(); ++i)
       s[i] = tolower(s[i]);		// s = "abc"
   ```

   ​



4. `toupper()` ：把字符转化为大写


   ```cpp
   string s = "abc";
   for(int i = 0; i < s.size(); ++i)
       s[i] = toupper(s[i]);		// s = "ABC"
   ```

   ​

5. `push_back('a')`：字符串尾部插入一个字符 $a$ ，通常使用 `s += 'a';`

   ​

6. `insert(pos, "a") `：插入字符、字符串 $a$

   ```cpp
   str.insert(pos, "a");	// 插入字符、字符串
   ```

   ​

7. `erase()` ： 删除字符串

   ```cpp
   string s1 = "0123456789";
   s1.erase(s1.begin()+1);  	// 只删除索引1，结果：023456789
   s1.erase(1);			   // 删除索引1，包括1以后的所有值，结果：0
   s1.erase(s1.begin()+1, s1.end()-2);   // 删除索引1到倒数第二个元素，包括索引1与倒数第二个元素，都是闭区间，结果：089
   s1.erase(2, 2); 		   // 从第二个位置开始是删除2后边的2个位置，结果：01456789
   ```

   ​

8. `substr(pos, length)` ：字符串截取 

   ```cpp
   string s1("0123456789");
   string s2 = s1.substr(2,5); 	//结果：23456-----参数5表示：截取的字符串的长度
   ```

   ​

9. `find(str, pos)` ：字符串查找-----找到后返回首字母在字符串中的下标

   ```cpp
   string s("dog bird chicken bird cat");
    
   // 1. 查找一个字符串
   if(s.find("chicken", 0) != -1)
   	cout << s.find("chicken") << endl;  // 结果是：9
    
   // 2. 从下标为6开始找字符'i'，返回找到的第一个i的下标
   cout << s.find('i', 6) << endl;  // 结果是：11
   ```



## 字符串操作

```cpp
string str1;               //生成空字符串
string str2("123456789");  //生成"1234456789"的复制品
string str5(5, '1');       //结果为"11111"
 
// 尾插一个字符 s1.push_back('a'); 或 s += 'a';
s += 'a';

// str.insert(s.begin()+i, 'a'); 在第i个数插入字符。如果前面是s.begin()+i那么只能插入字符；
// str.insert(pos,"string"如：cs);	在指定的位置pos插入字符串；
str.insert(pos, "a");	// 插入字符、字符串

string s1 = "123456789";
// 删除字符串
// s1.erase(s1.begin()+1);  // 结果：13456789
// s1.erase(1);			   // 删除索引1，包括1以后的所有值； // 结果：1
// s1.erase(s1.begin()+1, s1.end()-2);   // 结果：189	    // 都是闭区间 
s1.erase(2, 2); // 从第二个位置开始是删除2后边的2个位置     	// 结果：1256789
 
// 翻转字符串
// reverse(s.begin(),s.end());	string str=s;
 
 
// string s("dog bird chicken bird cat");
// 字符串查找-----找到后返回首字母在字符串中的下标
 
// 1. 查找一个字符串
// if(s.find("chicken",0)!=-1)
// cout << s.find("chicken") << endl;  // 结果是：9
 
// 2. 从下标为6开始找字符'i'，返回找到的第一个i的下标
// cout << s.find('i',6) << endl;  // 结果是：11

// 字符串截取 substr(pos, length)
// string s1("0123456789");
// string s2 = s1.substr(2,5); 
// 结果：23456-----参数5表示：截取的字符串的长度
```



### 统计单词数

```cpp
int main() {
	string str1, str2;
    getline(cin, str1);     // 防止忽略空格
    getline(cin, str2);

    for(int i = 0; i < str1.size(); ++i)
        str1[i] = toupper(str1[i]);
    for(int i = 0; i < str2.size(); ++i)
        str2[i] = toupper(str2[i]);

    // 把str1, str2前后加上空格
    str1 = ' ' + str1 + ' ';
    str2 = ' ' + str2 + ' ';
    if(str2.find(str1) == -1)
        cout << -1 << endl;
    else {
        int sum = 0;
        int st = str2.find(str1);
        int temp = st;
        while(temp != -1) {
            sum++;
            temp = str2.find(str1, temp + 1);
        }
        cout << sum << " " << st << endl;
    }
    return 0;
}
```

