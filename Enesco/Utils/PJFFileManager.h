//
//  PJFFileManager.h
//  Enesco
//
//  Created by pengjianfeng on 2018/12/28.
//  Copyright © 2018年 aufree. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PJFFileManager : NSObject

/**
 *    @brief    获得指定目录下，指定后缀名的文件列表
 *
 *    @param     type     文件后缀名
 *    @param     dirPath     指定目录
 *
 *    @return    文件名列表
 */
+ (NSArray *) getFilenamelistOfType:(NSString *)type fromDirPath:(NSString *)dirPath;

@end

NS_ASSUME_NONNULL_END
