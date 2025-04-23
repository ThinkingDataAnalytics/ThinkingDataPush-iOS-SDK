//
//  AppDelegate.m
//  ThinkingDataPush
//
//  Created by 杨雄 on 2024/5/14.
//

#import "AppDelegate.h"
#import <ThinkingDataPush/ThinkingDataPush.h>

@interface AppDelegate ()<TDPushDelegate>

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    [TDPush startWithDelegate:self];
    
    return YES;
}

- (void)tdPushDidRegisteredPushToken:(NSString *)token error:(NSError *)error {
    NSLog(@"[ThinkingDataPush] receiver push token: %@", token);
}

#pragma mark - UISceneSession lifecycle


- (UISceneConfiguration *)application:(UIApplication *)application configurationForConnectingSceneSession:(UISceneSession *)connectingSceneSession options:(UISceneConnectionOptions *)options {
    // Called when a new scene session is being created.
    // Use this method to select a configuration to create the new scene with.
    return [[UISceneConfiguration alloc] initWithName:@"Default Configuration" sessionRole:connectingSceneSession.role];
}


- (void)application:(UIApplication *)application didDiscardSceneSessions:(NSSet<UISceneSession *> *)sceneSessions {
    // Called when the user discards a scene session.
    // If any sessions were discarded while the application was not running, this will be called shortly after application:didFinishLaunchingWithOptions.
    // Use this method to release any resources that were specific to the discarded scenes, as they will not return.
}


@end
