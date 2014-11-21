<?php
//==========================================
// 文件名: train_mysqli.inc
// 说  明: 通过mysqli连接数据库，默认参数连接至train数据库
// power by Salmon
//==========================================
class train_mysqli extends mysqli {
	public function __construct() 
	{
		$host = "localhost";
		$user = "root";
		$pass = "";
		$db = "train2";
        parent::__construct($host, $user, $pass, $db);

        if (mysqli_connect_error()) {
            die('数据库错误：无法连接。<br/>请联系管理员获取更多信息。');
		}
		$this->query("SET NAMES 'utf8'");
		$this->query("SET CHARACTER_SET_CLIENT=utf8");
		$this->query("SET CHARACTER_SET_RESULTS=utf8");
	}
}

?>
