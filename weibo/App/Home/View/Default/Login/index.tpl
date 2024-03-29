<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>学习系统--登录</title>
<script type="text/javascript" src="__JS__/jquery.js"></script>
<script type="text/javascript" src="__JS__/jquery.ui.js"></script>
<script type="text/javascript" src="__JS__/jquery.validate.js"></script>
<script type="text/javascript" src="__JS__/jquery.form.js"></script>
<script type="text/javascript" src="__JS__/login.js"></script>
<link rel="stylesheet" href="__CSS__/jquery.ui.css">
<link rel="stylesheet" href="__CSS__/login.css">
<script type="text/javascript">
var ThinkPHP = {
	'MODULE' : '__MODULE__',
	'IMG' : '__PUBLIC__/{:MODULE_NAME}/img',
	'INDEX' : '{:U("Index/index")}',
};
</script>
</head>
<body>


<div id="main">
	<form id="login">
		<div class="top">
			<span class="username">
				<input type="text" name="username" placeholder="帐号/邮箱">
			</span>
			<span class="password">
				<input type="password" name="password" placeholder="密码">
				<label class="auto" for="auto"><input type="checkbox" name="auto" id="auto">自动登录</label>
			</span>
			<input type="submit" name="submit" value="登录">
		</div>
		<div class="bottom">
			<a href="javascript:void(0)" id="reg_link">注册新用户</a>
			<a href="javascript:void(0)">忘记密码？</a>
		</div>
	</form>
</div>

<div id="footer"></div>
<p class="footer_text">&copy; 闪电狗Web学习系统. Powered by ThinkPHP.</p>

<form id="register">
	<ol class="register_errors"></ol>
	<p>
		<label for="username">帐号：</label>
		<input type="text" name="username" class="text" id="username" placeholder="昵称，不小于两位！">
		<span class="star">*</span>
	</p>
	<p>
		<label for="password">密码：</label>
		<input type="password" name="password" class="text" id="password" placeholder="密码，不小于6位！" />
		<span class="star">*</span>
	</p>
	<p>
		<label for="repassword">确认：</label>
		<input type="password" name="repassword" class="text" id="repassword" placeholder="密码和密码确认必须一致！" />
		<span class="star">*</span>
	</p>
	<p>
		<label for="email">邮箱：</label>
		<input type="text" name="email" class="text" id="email" placeholder="电子邮件，用于找回密码！" />
		<span class="star">*</span>
	</p>
</form>

<form id="verify_register" form-click="">
	<ol class="ver_error"></ol>
	<p>
		<label for="verify">验证码：</label>
		<input type="text" name="verify" class="text" id="verify">
		<span class="star">*</span>
		<a href="javascript:void(0)" class="changeimg">换一换</a>
	</p>
	<p><img src="{:U('verify')}?a=b" class="changeimg verifyimg"></p>
</form>

<div id="loading">数据交互中...</div>



</body>
</html>