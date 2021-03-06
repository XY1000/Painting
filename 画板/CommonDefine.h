//
//  CommonDefine.h
//  SuperIntegration
//
//  Created by PP－mac001 on 16/1/20.
//  Copyright © 2016年 PP－mac001. All rights reserved.
//

#ifndef CommonDefine_h
#define CommonDefine_h

/**
 *  DLog输出
 *  @return 类名,方法名,行数
 */
#ifdef DEBUG
#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define DLog(...)
#endif

/**
 *  判断字符串是否为空
 */
#define STR_IS_NIL(objStr) ([objStr isKindOfClass:[NSNull class]] || objStr == nil || [objStr length] <= 0)
/**
 *  判断字典是否为空
 */
#define DICT_IS_NIL(objDict) ([objDict isKindOfClass:[NSNull class]] || objDict == nil || [objDict count] <= 0)
/**
 *  判断数组是否为空
 */
#define ARRAY_IS_NIL(objArray) ([objArray isKindOfClass:[NSNull class]] || objArray == nil || [objArray count] <= 0)
/**
 *  判断字典中是否有该键值
 */
#define DIC_CONTAIN_STR(objDic, objStr) [[objDic allKeys] containsObject:objStr]
/**
 *  判断对象类型
 */
#define OBJ_CLASS(obj,objClass) [obj isKindOfClass:objClass]


#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

#define RGB(r, g, b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1.0]

#endif /* CommonDefine_h */
