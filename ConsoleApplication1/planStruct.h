#pragma once

struct Plan {
	int id;				// 编号
	float fee;			// 费用
	int duration;		// 通话时长 单位分钟
	int traffic;			// 流量 单位MByte
	int broadband; // 宽带 单位Mbits
};