#ifdef SHOULD_COMPILE_LOOKIN_SERVER 

//
//  Lookin.h
//  Lookin
//
//  Created by Li Kai on 2018/8/5.
//  https://lookin.work
//

#import <UIKit/UIKit.h>

extern NSString *const LKS_ConnectionDidEndNotificationName;

@class LookinConnectionResponseAttachment;

@interface LKS_ConnectionManager : NSObject

+ (instancetype)sharedInstance;

@property(nonatomic, assign) BOOL applicationIsActive;

#if LOOKIN_SERVER_WIRELESS
- (void)startWirelessConnection;

- (void)endWirelessConnection;
#endif

- (BOOL)isConnected;

#if LOOKIN_SERVER_WIRELESS
- (BOOL)isWirelessConnnect;
#endif

- (void)respond:(LookinConnectionResponseAttachment *)data requestType:(uint32_t)requestType tag:(uint32_t)tag;

- (void)pushData:(NSObject *)data type:(uint32_t)type;

@end

#endif /* SHOULD_COMPILE_LOOKIN_SERVER */
