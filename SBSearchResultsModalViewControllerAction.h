//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSearchResultsViewControllerAction.h"

@class NSString;

@interface SBSearchResultsModalViewControllerAction : SBSearchResultsViewControllerAction
{
    _Bool _opening;
}

@property _Bool opening; // @synthesize opening=_opening;
- (void)openInApp:(id)arg1;
- (void)done:(id)arg1;
- (void)cancelAnimated:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)performButtonAction;
@property(readonly) NSString *buttonActionTitle;
@property(readonly) _Bool requiresNavigationController;
- (void)loadModalViewControllerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)performWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

