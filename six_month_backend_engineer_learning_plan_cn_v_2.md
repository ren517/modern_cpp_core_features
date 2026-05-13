# 六个月后端工程师学习路线（适合当前阶段）

## 当前情况分析

你目前已经具备：

- Linux 基础操作
- Git 基础
- Nginx 部署
- Python 开发基础
- 服务器部署经验
- Hugo 博客
- AI / NLP 接触经验

但目前的问题是：

```text
技术很多
↓
知识碎片化
↓
无法独立完成系统
```

所以未来半年目标不是继续扩展技术栈。

而是：

# 建立真正的工程能力

包括：

- 独立开发
- 独立部署
- 独立排错
- 理解系统原理
- 形成完整后端知识体系

---

# 总体学习原则

## 1. 不再疯狂扩展技术栈

未来半年主线固定：

```text
Python
FastAPI
MySQL
Redis
Linux
Docker
Git
```

只深挖这套。

---

## 2. 学一点 → 做一点

不要只看教程。

每学一个知识点，必须自己实现。

例如：

- 学 JWT → 自己写登录系统
- 学 Docker → 自己容器化项目
- 学 Redis → 自己做缓存
- 学 WebSocket → 自己做聊天室

---

## 3. 目标不是“会操作”

而是：

# 理解为什么这样工作

比如：

- 为什么 Nginx 能反向代理
- 为什么 Redis 快
- 为什么 SQL 会慢
- 为什么 HTTPS 安全
- 为什么 Docker 能解决环境问题

---

# 第一阶段（第1个月）

# 目标：补 Linux + Python + 网络基础

这是整个后端的地基。

---

# 第一周：Linux 真正入门

## 学习内容

### 1. Linux 文件系统

理解：

```text
/etc
/home
/var
/usr
/tmp
```

知道：

- 配置文件在哪
- 日志在哪
- 服务在哪

---

### 2. Linux 权限系统

真正理解：

```bash
rwxr-xr-x
chmod
chown
sudo
```

目标：

# 不靠死记硬背，而是真理解权限

---

### 3. 进程管理

重点：

```bash
ps
top
htop
kill
systemctl
journalctl
```

目标：

# 理解程序是怎么运行的

---

### 4. 网络基础

重点：

```bash
ping
curl
ss
netstat
```

理解：

- IP
- TCP
- 端口
- localhost
- 127.0.0.1
- 0.0.0.0

---

## 实践任务

自己部署：

- Nginx
- 一个 Python 服务

然后：

- 改端口
- 看日志
- 查进程
- 手动排错

---

# 第二周：Python 基础强化

## 必须掌握

### 1. 函数

理解：

- 参数
- 返回值
- 作用域

---

### 2. 类

重点：

```python
class User:
```

必须理解：

- self
- 实例
- 方法
- 面向对象

---

### 3. 异常处理

```python
try:
except:
```

---

### 4. 文件操作

---

### 5. logging 日志

后端非常重要。

---

### 6. 虚拟环境

重点：

```bash
python -m venv
pip
requirements.txt
```

---

## 实践任务

写一个：

# 命令行学生管理系统

功能：

- 增删改查
- 文件保存
- 日志记录

---

# 第三周：Git 工程化

## 必须掌握

```bash
git add
git commit
git branch
git switch
git merge
git rebase
git stash
```

---

## 实践任务

自己建立：

```text
main
dev
test
```

模拟多人开发。

---

# 第四周：HTTP + 网络原理

这是后端核心。

---

## 必须理解

### HTTP

- GET
- POST
- 状态码
- Header
- JSON

---

### HTTPS

理解：

- SSL/TLS
- 证书
- 为什么 HTTPS 安全

---

### Cookie / Session / JWT

真正理解：

# 登录为什么能保持

---

## 实践任务

使用 Python：

```python
requests
```

手动调用 API。

---

# 第二阶段（第2-3个月）

# 目标：真正进入后端开发

---

# 第一部分：FastAPI

## 学习内容

### 路由

```python
@app.get("/")
```

---

### 请求参数

---

### JSON 返回

---

### Pydantic

---

### async / await

非常重要。

---

### 中间件

---

### JWT 认证

---

## 实践项目 1：用户系统

功能：

- 注册
- 登录
- JWT认证
- 修改密码

---

## 实践项目 2：博客 API

功能：

- 文章列表
- 评论
- 点赞

---

# 第二部分：MySQL

# 后端核心中的核心

---

## 必须掌握

### SQL

重点：

```sql
SELECT
INSERT
UPDATE
DELETE
JOIN
```

---

### 索引

理解：

- 为什么索引快
- 为什么会失效

---

### 事务

理解：

- 原子性
- 一致性
- 并发问题

---

### Explain

学会分析 SQL。

---

## 实践任务

给博客 API 接 MySQL。

---

# 第三部分：Redis

## 学习内容

- 缓存
- session
- 热点数据
- 限流

---

## 实践任务

实现：

# 阅读量统计系统

---

# 第三阶段（第4个月）

# 目标：真正工程化

---

# 第一部分：Docker

## 必须掌握

```bash
docker run
docker ps
docker build
docker compose
```

---

## 真正理解 Docker 的作用

Docker 解决的是：

# 环境一致性问题

核心思想：

```text
把运行环境一起打包
```

---

## 实践任务

容器化：

- FastAPI
- MySQL
- Redis

实现：

```bash
docker compose up
```

一键启动项目。

---

# 第二部分：Nginx 深入

## 学习内容

- 反向代理
- HTTPS
- upstream
- location
- 请求转发

---

## 实践任务

实现：

```text
域名
↓
Nginx
↓
FastAPI
```

---

# 第三部分：日志系统

学习：

- access.log
- error.log
- 日志排错

---

# 第四阶段（第5个月）

# 目标：真正像后端工程师

---

# 第一部分：WebSocket

## 实践项目

# 在线聊天室

功能：

- 实时聊天
- 登录
- 在线人数

---

# 第二部分：async 并发

真正理解：

- 协程
- 阻塞
- 并发
- async / await

---

# 第三部分：性能优化

学习：

- 缓存
- SQL优化
- Redis优化

---

# 第五阶段（第6个月）

# 目标：开始接近中高级后端

---

# 第一部分：Go（建议开始）

## 学习内容

- goroutine
- channel
- gin

---

# 第二部分：消息队列

推荐：

- RabbitMQ

理解：

- 异步
- 解耦
- 削峰

---

# 第三部分：系统设计

开始理解：

- 高并发
- 微服务
- 限流
- 分布式

---

# 整个阶段结束后你会达到什么水平

你会：

✅ 能独立写后端
✅ 能独立部署服务器
✅ 能独立排错
✅ 能理解网络
✅ 能使用 Docker
✅ 能操作 Linux
✅ 能写 API
✅ 能做真实项目
✅ 能看懂大部分后端项目

这时候：

# 已经具备后端实习能力

---

# 你未来最重要的方向

你其实很适合：

# AI Backend / AI Infra / 智能系统后端

因为你已经具备：

- Python
- Linux
- 部署经验
- AI/NLP基础

这条路线未来很强。

---

# 最后一个非常重要的建议

你现在：

# 不缺技术广度

你缺的是：

# 深度 + 工程理解

所以未来半年：

# 不要继续到处学新技术

而是：

# 把一套体系真正跑通

