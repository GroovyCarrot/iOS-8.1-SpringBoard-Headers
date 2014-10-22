//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplication.h"

@interface SBApplication (DefaultImage)
- (struct CGSize)_screenSizeForScreen:(id)arg1;
- (id)_sanitizedImageNameFromName:(id)arg1 withExtension:(id)arg2 actualExtension:(out id *)arg3;
- (void)_addImageName:(id)arg1 toImageNamesArray:(id)arg2 sceneID:(id)arg3 size:(struct CGSize)arg4;
- (long long)_fallbackImageOrientationForLaunchingOrientation:(long long)arg1;
- (id)_fallbackOrientationImageTagForLaunchingOrientation:(long long)arg1;
- (id)_orientationImageTagForLaunchingOrientation:(long long)arg1;
- (void)_imageOrientationParametersForLaunchingOrientation:(long long)arg1 imageTag:(id *)arg2 fallbackImageTag:(id *)arg3 fallbackOrientation:(long long *)arg4;
- (id)_fallbackOrientationStringForOrientation:(long long)arg1 fallbackOrientation:(long long *)arg2;
- (_Bool)_applicationDoesNotHaveRestorationArchive;
- (id)defaultSplashBoardImagePathForSceneID:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 snapshot:(_Bool *)arg4 launchingOrientation:(long long)arg5 originalOrientation:(long long *)arg6 currentOrientation:(long long *)arg7;
- (id)defaultSplashBoardImageForSceneID:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 snapshot:(_Bool *)arg4 launchingOrientation:(long long)arg5 originalOrientation:(long long *)arg6 currentOrientation:(long long *)arg7;
- (id)_defaultSplashBoardImageInfoForSceneID:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 snapshot:(_Bool *)arg4 launchingOrientation:(long long)arg5 originalOrientation:(long long *)arg6 currentOrientation:(long long *)arg7;
- (id)_defaultPNGForSceneID:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 launchingOrientation:(long long)arg4 orientation:(long long *)arg5;
- (id)_infoplist_defaultPNGPathForSceneID:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 launchingOrientation:(long long)arg4 imageOrientation:(long long *)arg5 resultingScale:(double *)arg6;
- (id)_pathForExistingImageInCandidates:(id)arg1 forSceneID:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4 launchingOrientation:(long long)arg5 imageOrientation:(long long *)arg6 resultingScale:(double *)arg7;
- (long long)_workspaceTypeFromSceneID:(id)arg1;
- (id)_defaultPNGNameFromSuspensionSettingsWithExpiration:(double *)arg1;
- (id)_defaultPNGNameFromSuspensionSettings;
- (id)_defaultPNGNameWhenActivatingFromURLSetting:(id)arg1;
- (id)_defaultPNGNameFromSearchDomainLaunchInfo:(id)arg1;
- (id)_defaultPNGNameFromActivationSettings;
- (id)_defaultPNGImageInfoForSceneID:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 launchingOrientation:(long long)arg4;
- (id)_defaultPNGNameUsingFallbacksForSceneID:(id)arg1;
- (id)_defaultImageNameForSceneID:(id)arg1;
- (_Bool)_infoplist_defaultPNGCalculateContainsImageForAnyOrientationOfSize:(struct CGSize)arg1;
- (_Bool)_infoplist_defaultPNGCalculateContainsPortraitImageOfSize:(struct CGSize)arg1;
- (_Bool)_infoplist_defaultPNGCalculateContainsImageOfSize:(struct CGSize)arg1 withOrientationKey:(id)arg2;
- (id)_imageNamesFromInfoDictionary:(id)arg1;
- (id)_validInfoPlistOrientationKeys;
- (id)defaultPNGPathForSceneID:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 launchingOrientation:(long long)arg4 imageOrientation:(long long *)arg5 resultingScale:(double *)arg6;
@end

