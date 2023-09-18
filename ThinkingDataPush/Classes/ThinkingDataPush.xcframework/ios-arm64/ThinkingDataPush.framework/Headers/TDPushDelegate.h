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
/// @param tdToken SDK 生成的 Token，推送消息时需要使用此值。SDK 维护此值与 APNS 的 Device Token 的映射关系。
/// @param error 错误信息，若 error 为 nil，则注册推送服务成功。
- (void)tdPushDidRegisteredPushToken:(nullable NSString *)tdToken error:(nullable NSError *)error;

/// 统一接收消息的回调
/// @param userInfo 推送消息字典
/// @param tdParams SDK 推送参数模型
- (void)tdPushDidReceiveRemoteNotification:(NSDictionary * _Nonnull)userInfo tdParams:(TDPushModel * _Nullable)tdParams;

/// 统一点击回调
/// @param userInfo 推送消息字典
/// @param tdParams SDK 推送参数模型
- (void)tdPushDidClickNotification:(NSDictionary * _Nonnull)userInfo tdParams:(TDPushModel * _Nullable)tdParams;

@end

#endif /* TDPushDelegate_h */
