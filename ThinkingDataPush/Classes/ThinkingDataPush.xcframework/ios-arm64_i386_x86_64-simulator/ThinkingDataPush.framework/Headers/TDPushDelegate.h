//
//  TDPushDelegate.h
//  Pods
//
//  Created by 杨雄 on 2023/7/2.
//

#ifndef TDPushDelegate_h
#define TDPushDelegate_h

#import <Foundation/Foundation.h>

@protocol TDPushDelegate <NSObject>

@optional
/// 注册TDPush 推送 token
/// @param deviceToken APNs 生成的 Device Token。
/// @param tdToken 移动推送生成的 Token，推送消息时需要使用此值。移动推送维护此值与 APNs 的 Device Token 的映射关系。
/// @param error 错误信息，若 error 为 nil，则注册推送服务成功。
- (void)tdPushDidRegisteredDeviceToken:(nullable NSData *)deviceToken tdToken:(nullable NSString *)tdToken error:(nullable NSError *)error;

/// 统一接收消息的回调
/// @param notification 消息对象(有2种类型NSDictionary和UNNotification具体解析参考示例代码)
/// @note 此回调为前台收到通知消息及所有状态下收到静默消息的回调（消息点击需使用统一点击回调）
- (void)tdPushDidReceiveRemoteNotification:(nonnull id)notification tdParams:(NSDictionary * _Nullable)tdParams withCompletionHandler:(nullable void (^)(NSUInteger))completionHandler;

 /// 统一点击回调
/// @param response 如果iOS 10+/macOS 10.14+则为UNNotificationResponse，低于目标版本则为NSDictionary
- (void)tdPushDidReceiveNotificationResponse:(nonnull id)response tdParams:(NSDictionary * _Nullable)tdParams withCompletionHandler:(nonnull void (^)(void))completionHandler;

@end

#endif /* TDPushDelegate_h */
