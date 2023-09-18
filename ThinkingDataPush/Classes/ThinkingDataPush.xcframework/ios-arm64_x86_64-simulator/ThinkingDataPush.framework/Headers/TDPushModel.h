//
//  TDPushModel.h
//  ThinkingDataPush
//
//  Created by 杨雄 on 2023/8/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSUInteger, TDPushType) {
    TDPushTypeNormal = 0,
    TDPushTypeOpenUrl = 1 << 0,
    TDPushTypeJumpPage = 1 << 1,
    TDPushTypePassthrough = 1 << 2,
};

@interface TDPushModel : NSObject
@property (nonatomic, assign) TDPushType type;
@property (nonatomic, copy) NSString * _Nullable url;
@property (nonatomic, copy) NSString * _Nullable pageName;
@property (nonatomic, copy) NSString * _Nullable passthroughParams;

@end

NS_ASSUME_NONNULL_END
