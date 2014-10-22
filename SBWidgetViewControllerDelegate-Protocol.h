//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, SBWidgetViewController;

@protocol SBWidgetViewControllerDelegate <NSObject>

@optional
- (long long)activeLayoutModeForWidget:(SBWidgetViewController *)arg1;
- (_Bool)widgetShouldAttemptReconnectionAfterUnanticipatedDisconnection:(SBWidgetViewController *)arg1;
- (_Bool)shouldRequestWidgetRemoteViewControllers;
- (void)contentAvailabilityDidChangeForWidget:(SBWidgetViewController *)arg1;
- (void (^)(void))widget:(SBWidgetViewController *)arg1 didUpdatePreferredHeight:(double)arg2 completion:(void (^)(_Bool))arg3;
- (void)widget:(SBWidgetViewController *)arg1 requestsLaunchOfURL:(NSURL *)arg2;
- (void)widget:(SBWidgetViewController *)arg1 requestsPresentationOfViewController:(NSString *)arg2 presentationStyle:(long long)arg3 context:(NSDictionary *)arg4 completion:(void (^)(void))arg5;
- (void)remoteViewControllerDidConnectForWidget:(SBWidgetViewController *)arg1;
@end

