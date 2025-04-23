//
//  TDPush.h
//  ThinkingSDK
//
//  Created by 杨雄 on 2023/6/15.
//

#import <Foundation/Foundation.h>

#if __has_include(<ThinkingDataPush/TDPushDelegate.h>)
#import <ThinkingDataPush/TDPushDelegate.h>
#else
#import "TDPushDelegate.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface TDPush : NSObject

/// init SDK
/// - Parameter delegate: object which conform protocol TDPushDelegate
+ (void)startWithDelegate:(id<TDPushDelegate>)delegate;

/// get TDPushToken
/// @return token which TDPush generated
+ (NSString *)getPushToken;

/// version of SDK
/// @return version string
+ (NSString *)version;

/// 允许打印运行日志
+ (void)enableLog:(BOOL)enable;

@end

NS_ASSUME_NONNULL_END
