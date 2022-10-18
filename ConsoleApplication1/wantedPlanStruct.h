#pragma once

struct WantedPlan {
	int id;					// 编号
	int duration;		// 通话时长 单位分钟
	int traffic;			// 流量 单位MByte
	int broadband;	// 宽带 单位Mbits
	int times;				// 想要次数
};