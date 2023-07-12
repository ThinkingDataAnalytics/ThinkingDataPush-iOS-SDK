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

+ (void)startWithDelegate:(id<TDPushDelegate>)delegate;

+ (NSString *)getDeviceToken;

@end

NS_ASSUME_NONNULL_END
