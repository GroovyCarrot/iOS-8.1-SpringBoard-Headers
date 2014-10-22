//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBIconListPageControlDelegate.h"
#import "SBIconScrollViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, SBFakeStatusBarView, SBFolder, SBFolderTitleTextField, SBIconListPageControl, SBIconListView, SBIconScrollView, SBIconViewMap, UISwipeGestureRecognizer, UITapGestureRecognizer, _UILegibilitySettings;

@interface SBFolderView : UIView <SBIconListPageControlDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, SBIconScrollViewDelegate>
{
    NSMutableArray *_iconListViews;
    NSMutableSet *_scrollingDisabledReasons;
    SBIconListView *_rotatingIconList;
    long long _minVisibleListViewIndex;
    long long _maxVisibleListViewIndex;
    long long _minAnimatingListViewIndex;
    long long _maxAnimatingListViewIndex;
    long long _disableUpdatingCurrentIconListCount;
    long long _firstDisplayedColumnOnCurrentList;
    _Bool _animatedScrolling;
    _Bool _scalingViewIsBorrowed;
    SBIconViewMap *_viewMap;
    NSMutableArray *_scrollFrames;
    unsigned long long _scrollFrameCount;
    SBIconListPageControl *_pageControl;
    SBIconScrollView *_scrollView;
    SBFolderTitleTextField *_titleTextField;
    UIView *_scalingView;
    SBFakeStatusBarView *_reachabilityStatusBar;
    UISwipeGestureRecognizer *_swipeToCancelReachabilityGestureRecognizer;
    UISwipeGestureRecognizer *_swipeToRevealNotificationCenterGestureRecognizer;
    UITapGestureRecognizer *_tapToCancelReachabilityGestureRecognizer;
    _Bool _isEditing;
    _Bool _isScrolling;
    long long _currentPageIndex;
    double _statusBarHeight;
    id <SBFolderViewDelegate> _delegate;
    SBFolder *_folder;
    long long _orientation;
    _UILegibilitySettings *_legibilitySettings;
    long long _animatingToOrientation;
    struct UIEdgeInsets _reachabilityStatusBarEdgeInsets;
}

+ (unsigned long long)_countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (Class)_scrollViewClass;
@property(nonatomic) struct UIEdgeInsets reachabilityStatusBarEdgeInsets; // @synthesize reachabilityStatusBarEdgeInsets=_reachabilityStatusBarEdgeInsets;
@property(nonatomic) long long animatingToOrientation; // @synthesize animatingToOrientation=_animatingToOrientation;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(nonatomic) id <SBFolderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(readonly, nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_isEditing;
- (void)handleRevealNotificationCenterGesture:(id)arg1;
- (void)handleCancelReachabilityGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleReachabilityActivated:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)repositionForReachabilityActivated:(_Bool)arg1 animated:(_Bool)arg2 actions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (double)reachabilityYOffset;
- (void)willMoveToWindow:(id)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_updateTitleLegibilitySettings;
- (id)_legibilitySettingsWithPrimaryColor:(id)arg1;
- (void)setIconPageIndicatorImageSetCache:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_setFolderName:(id)arg1;
- (void)pageControl:(id)arg1 didRecieveTouchInDirection:(int)arg2;
- (void)iconScrollView:(id)arg1 willSetContentOffset:(inout struct CGPoint *)arg2;
- (void)iconScrollViewDidCancelTouchTracking:(id)arg1;
- (void)iconScrollViewWillCancelTouchTracking:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1;
- (void)cleanUpAfterZoomAnimation;
- (void)prepareForZoomAnimation;
- (void)cleanupAfterClosing;
- (void)prepareToOpen;
- (_Bool)_scrollViewThinksItsScrolling;
- (void)_purgeListViews;
- (void)noteUserIsInteractingWithIcons;
- (void)noteUserHasGrabbedIcon:(_Bool)arg1;
- (void)updateIconListIndexAndVisibility:(_Bool)arg1;
- (unsigned long long)_countOfAdditionalPagesToKeepAnimatingInOneDirection;
- (long long)lowestVisibleIconListIndexAndColumn:(long long *)arg1 columnsOnScreen:(long long *)arg2 totalLists:(unsigned long long)arg3 columnsPerList:(unsigned long long)arg4;
- (void)updateIconListIndexAndVisibility;
- (void)_updateEditingStateAnimated:(_Bool)arg1;
- (void)layoutIconLists:(double)arg1 domino:(_Bool)arg2 forceRelayout:(_Bool)arg3;
- (void)updateIconListViews;
- (void)resetIconListViews;
- (void)tearDownListViews;
- (id)currentIconListView;
- (id)iconListViewForTouch:(id)arg1;
- (id)iconListViewAtPoint:(struct CGPoint)arg1;
- (id)iconListViewAtIndex:(unsigned long long)arg1;
- (long long)_pageIndexForOffset:(double)arg1;
- (struct CGRect)_iconListFrameForPageRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (struct CGSize)_scrollViewContentSize;
- (_Bool)_updatesWallpaperRelativeCenter;
- (void)_updateIconListFrames;
- (void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateIconListViews;
- (void)_resetIconListViews;
- (void)_addIconListViewsForModels:(id)arg1;
- (id)_createIconListViewForList:(id)arg1;
- (id)_interactionTintColor;
- (id)_iconListViewForList:(id)arg1;
- (id)_iconListViewAtIndex:(unsigned long long)arg1;
- (id)_currentIconListView;
- (void)_removeIconListView:(id)arg1;
- (void)_addIconListView:(id)arg1;
- (void)_enableUserInteractionAfterSignificantAnimation;
- (void)_disableUserInteractionBeforeSignificantAnimation;
- (double)_titleFontSize;
- (_Bool)_showsTitle;
- (void)_popDisableUpdateCurrentIconListCount;
- (void)_pushDisableUpdateCurrentIconListCount;
- (_Bool)_shouldDisableUpdatingCurrentIconList;
- (_Bool)_isValidPageIndex:(long long)arg1;
- (double)_scrollOffsetForPageAtIndex:(long long)arg1;
- (double)_scrollOffsetForFirstListView;
- (double)_pageWidth;
- (_Bool)_hasMinusPages;
- (unsigned long long)_minusPageCount;
- (double)_offsetToCenterPageControlInSpaceForPageControl;
- (id)_newPageControl;
- (struct CGRect)_frameForScalingView;
- (void)_layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)didAnimate;
- (void)willAnimate;
@property(readonly, retain, nonatomic) SBIconViewMap *viewMap;
- (_Bool)locationCountsAsInsideFolder:(struct CGPoint)arg1;
- (void)returnScalingView;
- (id)borrowScalingView;
- (struct CGRect)scalingViewFrame;
- (void)resetContentOffsetToCurrentPage;
- (_Bool)setCurrentPageIndex:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)doesPageContainIconListView:(long long)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long iconListViewCount;
@property(readonly, copy, nonatomic) NSArray *iconListViews; // @synthesize iconListViews=_iconListViews;
- (void)_orientationDidChange:(long long)arg1;
- (void)setPageControlHidden:(_Bool)arg1;
- (void)_updatePageControlToIndex:(long long)arg1;
- (void)_currentPageIndexDidChange;
- (void)_setCurrentPageIndex:(long long)arg1 deferringPageControlUpdate:(_Bool)arg2;
- (void)_setCurrentPageIndex:(long long)arg1;
- (void)_setAnimatedScrolling:(_Bool)arg1;
- (void)_setScrollingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_endScrollingTest;
@property(nonatomic, getter=isScrolling) _Bool scrolling; // @synthesize scrolling=_isScrolling;
- (id)scrollView;
- (void)dealloc;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

