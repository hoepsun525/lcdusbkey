#ifndef __CHINESE16_16_H__
#define __CHINESE16_16_H__

typedef struct tag1{
	unsigned char ChineseGBK[2];
	unsigned char ChineseMAP[32];
}tagChinese;

tagChinese code Chinese1616[]=
{
	"小",
	0x00,0x00,0x00,0x00,0x80,0x60,0x00,0xFF,0x00,0x20,0x40,0x80,0x00,0x00,0x00,0x00, //小
	0x00,0x08,0x04,0x02,0x01,0x40,0x80,0x7F,0x00,0x00,0x00,0x00,0x01,0x06,0x00,0x00, //小
	"晓",
	0x00,0xFC,0x44,0x44,0xFE,0x0C,0x88,0x88,0x4F,0x54,0x24,0x54,0x86,0x84,0xE0,0x00, //晓
	0x00,0x1F,0x08,0x08,0x9F,0x80,0x42,0x32,0x0E,0x02,0x3E,0x42,0x42,0x42,0x70,0x00, //晓
	"茜",
	0x24,0x24,0x24,0x24,0x24,0xEF,0x24,0x24,0x24,0xEF,0x24,0x24,0xA4,0x36,0x24,0x00, //茜
	0x00,0x00,0xFF,0x51,0x49,0x47,0x41,0x41,0x41,0x47,0x49,0x49,0xFF,0x01,0x00,0x00, //茜
	"中",
	0x00,0xF8,0x08,0x08,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0x08,0x08,0xFC,0x08,0x00, //中
	0x00,0x03,0x01,0x01,0x01,0x01,0x01,0xFF,0x01,0x01,0x01,0x01,0x01,0x03,0x00,0x00, //中
	"国",
	0x00,0xFE,0x02,0x0A,0x8A,0x8A,0x8A,0xFA,0x8A,0xCA,0x8E,0x0A,0x02,0xFF,0x02,0x00, //国
	0x00,0xFF,0x40,0x50,0x50,0x50,0x50,0x5F,0x50,0x52,0x54,0x50,0x40,0xFF,0x00,0x00, //国
	"建",
	0x04,0x04,0x44,0x74,0xCC,0x10,0x54,0x54,0x54,0xFF,0x54,0x54,0x7E,0x14,0x10,0x00, //建
	0x41,0x26,0x18,0x2E,0x41,0x88,0x89,0x89,0x89,0xFF,0x89,0x89,0x8D,0xC8,0x40,0x00, //建
	"设",
	0x40,0x40,0x42,0xCC,0x00,0x40,0xA0,0x9F,0x81,0x81,0x81,0x9F,0xA0,0x20,0x20,0x00, //设
	0x00,0x00,0x00,0x7F,0xA0,0x90,0x40,0x43,0x2C,0x10,0x28,0x26,0x41,0xC0,0x40,0x00, //设
	"银",
	0x80,0x40,0x78,0xCF,0x48,0x48,0x00,0xFE,0x92,0x92,0x92,0x92,0xFF,0x02,0x00,0x00, //银
	0x02,0x02,0x02,0x7F,0x22,0x12,0x08,0xFF,0x42,0x24,0x08,0x14,0x22,0x63,0x20,0x00, //银
	"行",
	0x00,0x10,0x88,0xC4,0x23,0x40,0x42,0x42,0x42,0x42,0x42,0xC2,0x43,0x62,0x40,0x00, //行
	0x02,0x01,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00, //行
	"学",
	0x40,0x30,0x11,0x96,0x90,0x90,0x91,0x96,0x90,0x90,0x98,0x14,0x13,0x50,0x30,0x00, //学
	0x04,0x04,0x04,0x04,0x04,0x44,0x84,0x7E,0x06,0x05,0x04,0x04,0x04,0x06,0x04,0x00, //学
	"会",
	0x80,0x80,0x40,0x20,0x50,0x48,0x44,0x43,0x44,0x48,0x50,0x20,0x40,0xC0,0x40,0x00, //会
	0x00,0x00,0x02,0x42,0x62,0x52,0x4E,0x42,0x42,0x52,0x62,0xC3,0x02,0x00,0x00,0x00, //会
	"接",
	0x10,0x10,0x10,0xFF,0x90,0x54,0x44,0x54,0xE5,0x46,0x64,0x54,0x46,0x44,0x00,0x00, //接
	0x02,0x42,0x81,0x7F,0x02,0x02,0x82,0x8A,0x57,0x22,0x32,0x4E,0xC2,0x03,0x02,0x00, //接
	"纳",
	0x20,0x30,0xAC,0x63,0x30,0x00,0xF8,0x08,0x08,0xFF,0x08,0x08,0x08,0xFC,0x08,0x00, //纳
	0x22,0x63,0x22,0x12,0x12,0x00,0xFF,0x04,0x03,0x00,0x01,0x46,0x80,0x7F,0x00,0x00, //纳
	"自",
	0x00,0x00,0x00,0xF8,0x48,0x4C,0x4A,0x49,0x48,0x48,0x48,0xFC,0x08,0x00,0x00,0x00, //自
	0x00,0x00,0x00,0xFF,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0xFF,0x00,0x00,0x00,0x00, //自
	"己",
	0x00,0x04,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0xFE,0x04,0x00,0x00,0x00, //己
	0x00,0x00,0x3F,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x41,0x40,0x70,0x00,0x00, //己
	"才",
	0x10,0x10,0x10,0x10,0x10,0x10,0x10,0xD0,0xFF,0x10,0x10,0x10,0x10,0x18,0x10,0x00, //才
	0x00,0x10,0x10,0x08,0x04,0x02,0x41,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00, //才
	"能",
	0x10,0xD8,0x54,0x53,0x50,0xDC,0x30,0x00,0x7F,0x90,0x88,0x84,0x86,0xE0,0x00,0x00, //能
	0x00,0xFF,0x09,0x49,0x89,0x7F,0x00,0x00,0x7E,0x90,0x88,0x84,0x86,0x80,0xE0,0x00, //能
	"刀",
	0x00,0x04,0x04,0x04,0x04,0x04,0xFC,0x04,0x04,0x04,0x04,0x04,0xFE,0x04,0x00,0x00, //刀
	0x00,0x80,0x40,0x20,0x18,0x06,0x01,0x00,0x00,0x40,0x80,0x40,0x3F,0x00,0x00,0x00, //刀
	"枪",
	0x10,0x10,0xD0,0xFF,0x90,0x50,0x20,0xD0,0x4C,0x43,0x4C,0xD0,0x20,0x60,0x20,0x00, //枪
	0x04,0x03,0x00,0xFF,0x00,0x01,0x00,0x3F,0x40,0x44,0x48,0x47,0x40,0x70,0x00,0x00, //枪
	"不",
	0x02,0x02,0x02,0x02,0x02,0x82,0x42,0xF2,0x0E,0x42,0x82,0x02,0x02,0x03,0x02,0x00, //不
	0x00,0x08,0x04,0x02,0x01,0x00,0x00,0xFF,0x00,0x00,0x00,0x01,0x03,0x06,0x00,0x00, //不
	"入",
	0x00,0x00,0x00,0x00,0x00,0x01,0xE2,0x1C,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00, //入
	0x80,0x40,0x20,0x10,0x0C,0x03,0x00,0x00,0x00,0x03,0x0C,0x30,0x40,0xC0,0x40,0x00, //入
	"凤",
	0x00,0x00,0xFE,0x02,0x52,0x92,0x12,0x12,0x92,0x72,0x12,0xFF,0x02,0x00,0x00,0x00, //凤
	0x80,0x40,0x3F,0x00,0x10,0x08,0x05,0x02,0x0D,0x18,0x00,0x3F,0x40,0x80,0xE0,0x00, //凤
	"倪",
	0x80,0x40,0x20,0xF8,0x07,0x00,0xFC,0x24,0x22,0x01,0x24,0x24,0x24,0xFE,0x04,0x00, //倪
	0x00,0x00,0x00,0xFF,0x00,0x80,0x43,0x31,0x0F,0x01,0x01,0x3F,0x41,0x43,0x70,0x00 //倪


};


#endif