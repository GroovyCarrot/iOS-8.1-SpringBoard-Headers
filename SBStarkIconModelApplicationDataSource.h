//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIconModelApplicationDataSource.h"

@class NSString;

@interface SBStarkIconModelApplicationDataSource : NSObject <SBIconModelApplicationDataSource>
{
}

- (id)firstPageLeafIdentifiers;
- (_Bool)isNewsstandEnabled;
- (_Bool)isNewsstandSupported;
- (id)defaultIconState;
- (int)appVisibilityOverrideForBundleIdentifier:(id)arg1;
- (_Bool)updateAppIconVisibilityOverridesShowing:(id *)arg1 hiding:(id *)arg2;
- (id)allApplications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

