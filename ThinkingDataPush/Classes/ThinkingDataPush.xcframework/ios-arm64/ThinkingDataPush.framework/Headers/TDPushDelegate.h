//
//  TDPushDelegate.h
//  Pods
//
//  Created by 杨雄 on 2023/7/2.
//

#ifndef TDPushDelegate_h
#define TDPushDelegate_h

#import <Foundation/Foundation.h>

#if __has_include(<ThinkingDataPush/TDPushModel.h>)
#import <ThinkingDataPush/TDPushModel.h>
#else
#import "TDPushModel.h"
#endif

@protocol TDPushDelegate <NSObject>

@optional

/// 申请通知权限的结果回调
/// @param granted 申请结果
/// @param error 错误信息
- (void)tdPushRequestAuthorizationWithGranted:(BOOL)granted error:(nullable NSError *)error;

/// 注册 TDPush 推送 token
/// @param token SDK 生成的 Token，推送消息时需要使用此值。SDK 维护此值与 APNS 的 Device Token 的映射关系。
/// @param error 错误信息，若 error 为 nil，则注册推送服务成功。
- (void)tdPushDidRegisteredPushToken:(nullable NSString *)token error:(nullable NSError *)error;

/// 统一接收消息的回调
/// @param userInfo 推送消息字典
/// @param notification 推送消息体，iOS 10 以上有值，类型为 UNNotification
- (void)tdPushDidReceiveRemoteNotification:(nonnull NSDictionary *)userInfo notification:(nullable id)notification fetchCompletionHandler:(nonnull void (^)(NSUInteger))completionHandler;

/// 统一点击回调
/// @param userInfo 推送消息字典
/// @param response 推送消息体，iOS 10 以上有值，类型为 UNNotificationResponse
- (void)tdPushDidClickNotification:(nonnull NSDictionary *)userInfo response:(nullable id)response withCompletionHandler:(nonnull void(^)(void))completionHandler;

@end

#endif /* TDPushDelegate_h */
