//=============================================================================
/* 
*  File: ProxyMapManager.h
*
*  Author: bing
*
*  Date: 2016-09-20
*
*  Version: v2.0
*
*  Github/Mail: https://github.com/binchen-china    <563853086@qq.com>
*
*  Note:
*/
//=============================================================================

#pragma once
#include "DMaker.h"

//匹配规则为accountid的最后一位(数字或者字符)对应一个proxy.

class ProxyMapManager
{
public:
	static ProxyMapManager* instance();
    
	std::string hash(int uid);

	//更新配置
	void update(char key, std::string proxy);
	//删除配置
	void remove(char key);
	//从配置文件中读取配置关系
	void load();

protected:
	ProxyMapManager();


private:
	static ProxyMapManager* _instance;

	std::map<char, std::string> _map;

	//ACE_RW_Mutex _mutex;
};

