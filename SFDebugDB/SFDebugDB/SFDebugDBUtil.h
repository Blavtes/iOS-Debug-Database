//
//  SFDebugDBUtil.h
//  SFDebugDB
//
//  Created by Jakey on 2017/3/1.
//  Copyright © 2017年 www.skyfox.org. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SFDebugDBUtil : NSObject

@end

@interface NSDictionary (SFDebugDBJSONString)
-(NSString *)sf_dic_JSONString;
@end

@interface NSArray (SFDebugDBJSONString)
-(NSString *)sf_array_JSONString;
@end

@interface NSString (sf_urlParam)
- (NSDictionary *)sf_url_parameters;
- (NSString *)sf_url_valueForParameter:(NSString *)parameterKey;
@end