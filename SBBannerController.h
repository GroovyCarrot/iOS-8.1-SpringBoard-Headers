//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAlertObserver.h"
#import "SBAssistantObserver.h"
#import "SBBannerContextViewControllerDelegate.h"
#import "SBBannerGestureHandlerDelegate.h"
#import "SBBulletinBusyClient.h"
#import "SBBulletinWindowClient.h"
#import "SBUIBannerTargetImplementation.h"
#import "UIGestureRecognizerDelegate.h"

@class NSHashTable, NSMapTable, NSMutableArray, NSString, SBAlert, SBBannerContainerViewController, SBBannerGestureHandler, SBLockScreenActionContext, UIImage;

@interface SBBannerController : NSObject <SBUIBannerTargetImplementation, SBAssistantObserver, SBAlertObserver, SBBannerContextViewControllerDelegate, SBBannerGestureHandlerDelegate, SBBulletinWindowClient, SBBulletinBusyClient, UIGestureRecognizerDelegate>
{
    NSHashTable *_sources;
    NSMutableArray *_pendingBannerContextsNeedingRepop;
    SBAlert *_topAlert;
    UIImage *_bannerViewBackgroundImage;
    SBBannerContainerViewController *_bannerViewController;
    _Bool _soundIsPlaying;
    _Bool _dismissalOverdue;
    _Bool _replaceDelayIsActive;
    _Bool _showingStickyDurationBanner;
    _Bool _suppressingBanners;
    _Bool _enableDelayActive;
    _Bool _assistantIsFullyVisible;
    _Bool _locked;
    long long _activeGestureType;
    SBBannerGestureHandler *_activeGestureHandler;
    long long _overdueDismissReason;
    CDUnknownBlockType _overdueCompletionBlock;
    _Bool _dismissingBannerForAssistantReveal;
    _Bool _dismissingBannerForAssistantDismiss;
    CDUnknownBlockType _assistantRevealCompletionBlock;
    CDUnknownBlockType _assistantDismissCompletionBlock;
    NSMapTable *_bannerContextToViewControllerCache;
    SBLockScreenActionContext *_lockScreenActionContext;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
@property(retain, nonatomic) SBLockScreenActionContext *lockScreenActionContext; // @synthesize lockScreenActionContext=_lockScreenActionContext;
@property(retain, nonatomic) SBAlert *topAlert; // @synthesize topAlert=_topAlert;
- (void)handler:(id)arg1 pulledBannerByDisplacement:(double)arg2;
- (void)_setLockScreenContentHidden:(_Bool)arg1;
- (void)bannerViewControllerDidPullDown:(id)arg1;
- (void)bannerViewControllerDidShrinkForKeyboard:(id)arg1;
- (void)bannerViewControllerDidReceiveRaiseGesture:(id)arg1;
- (void)bannerViewController:(id)arg1 didRequestSticky:(_Bool)arg2;
- (void)bannerViewControllerDidRequestSticky:(id)arg1;
- (void)bannerViewControllerDidRequestDismissal:(id)arg1;
- (void)bannerViewControllerDidSelectAction:(id)arg1;
- (void)bannerViewController:(id)arg1 willSelectActionWithContext:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_setBannerSticky:(_Bool)arg1;
- (void)_cancelBannerDismissTimers;
- (void)_setupBannerDismissTimers;
- (id)_bannerItem;
- (id)_bannerContext;
- (id)_bannerView;
- (void)_playSoundForContext:(id)arg1;
- (void)_addBannerGestureRecognizersToView:(id)arg1;
- (void)_performReplaceTransitionWithContext:(id)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performHideTransitionWithContext:(id)arg1 animated:(_Bool)arg2 reason:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setBannerViewControllerForContext:(id)arg1;
- (void)_performRevealTransitionWithContext:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performTransition:(long long)arg1 withAnimation:(_Bool)arg2 context:(id)arg3 reason:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_newBannerViewForContext:(id)arg1;
- (id)_newBannerContextViewController;
- (id)_bannerViewBackgroundImage;
- (void)_fireCompletionBlockForBannerAnimationForAssistantDismissIfNecessary;
- (void)_fireCompletionBlockForBannerAnimationForAssistantRevealIfNecessary;
- (void)_setOverdueCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_soundDidFinishPlayingForBannerContext:(id)arg1;
- (void)_dismissOverdueOrDequeueIfPossible;
- (void)_stopCurrentSound;
- (void)_replaceIntervalElapsed;
- (void)_dismissIntervalElapsed;
- (void)_tryToDismissWithAnimation:(_Bool)arg1 reason:(long long)arg2 forceEvenIfBusy:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_removeActiveGestureHandler;
- (id)_newGestureHandlerForType:(long long)arg1;
- (void)_updateGestureHandlerWithState:(long long)arg1 type:(long long)arg2;
- (void)_handleGestureState:(long long)arg1 location:(struct CGPoint)arg2 displacement:(double)arg3 velocity:(double)arg4;
- (void)_handleBannerPanGesture:(id)arg1;
- (void)_presentBannerForContext:(id)arg1 reason:(long long)arg2;
- (_Bool)_shouldPendStickyBannerContext:(id)arg1 withReason:(long long)arg2;
- (_Bool)_dequeueBannerIfPossibleIgnoringStickyBanner:(_Bool)arg1 existingDismissReason:(long long)arg2;
- (_Bool)_dequeueBannerIfPossible;
- (_Bool)_canDequeueIgnoringStickyBanner:(_Bool)arg1;
- (id)_dequeueNextBannerContext;
- (_Bool)_isItemShowable:(id)arg1 fromSource:(id)arg2;
- (void)_dequeueAfterDelayIfPossible;
- (void)_updateBannerSuppressionStateAndDequeueIfPossible:(_Bool)arg1 withDelay:(_Bool)arg2;
- (void)_updateBannerSuppressionState;
- (void)_removePendingContextsForSourceNeedingRepop:(id)arg1;
- (id)_pendingBannerContextForSourceNeedingRepop:(id)arg1;
- (void)_dismissBannerWithAnimation:(_Bool)arg1 reason:(long long)arg2 forceEvenIfBusy:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_screenUndimmmed:(id)arg1;
- (void)_lockStateChanged:(id)arg1;
- (void)assistant:(id)arg1 viewDidDisappear:(long long)arg2;
- (void)assistant:(id)arg1 viewWillDisappear:(long long)arg2;
- (void)assistant:(id)arg1 viewDidAppear:(long long)arg2;
- (void)assistant:(id)arg1 viewWillAppear:(long long)arg2;
- (void)alertBannerSuppressionChanged:(id)arg1;
- (void)bulletinWindowDidRotateFromOrientation:(long long)arg1;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(long long)arg1 duration:(double)arg2;
- (void)bulletinWindowWillRotateToOrientation:(long long)arg1 duration:(double)arg2;
- (void)bulletinWindowStoppedBeingBusy;
- (void)removeCachedBannerForContext:(id)arg1;
- (void)cacheBannerForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (id)currentBannerContextForSource:(id)arg1;
- (void)signalSource:(id)arg1;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (void)unregisterSource:(id)arg1;
- (void)registerSource:(id)arg1;
@property(readonly, nonatomic) long long bannerTargetIdiom;
@property(readonly, nonatomic) void *bannerTargetIdentifier;
- (void)invalidateLockScreenActionContext;
- (double)currentBannerHeight;
- (void)setBannerAlpha:(double)arg1;
- (void)handleSystemDismissGestureWithState:(long long)arg1 position:(struct CGPoint)arg2 velocity:(double)arg3;
- (_Bool)isTrackingDismissGesture;
- (void)dismissBannerWithAnimation:(_Bool)arg1 reason:(long long)arg2 forceEvenIfBusy:(_Bool)arg3;
- (void)dismissBannerWithAnimation:(_Bool)arg1 reason:(long long)arg2;
- (_Bool)isShowingModalBannerWithKeyboard;
- (_Bool)isShowingModalBanner;
- (_Bool)isShowingBanner;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

