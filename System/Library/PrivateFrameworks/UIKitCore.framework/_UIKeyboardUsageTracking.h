/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _UIKeyboardUsageTracking : NSObject
+(void)keyboardExtensionsOnDevice;
+(void)keyboardExtensionCrashed;
+(void)keyboardSupportsTouch:(BOOL)arg1 ;
+(void)showVariantsIncrement;
+(void)variantDeleteIncrement;
+(void)letterCaseToggleIncrement;
+(void)showCharacterPreviewPreference:(BOOL)arg1 ;
+(void)panAlternateKeyFlickDownCount;
+(void)dualStringsKeyFlickUpCount;
+(void)singleStringKeyFlickUpCount;
+(void)keyboardReachabilityDistribution:(double)arg1 ;
+(void)countReachableKeyboardHandBiasChangeToBias:(long long)arg1 ;
+(void)countKeystrokeForReachableKeyboardWithBias:(long long)arg1 ;
+(void)normalPunctuationKeyCount;
+(void)undoKeyCount;
+(void)redoKeyCount;
+(void)keyboardTotalOnScreenTime:(double)arg1 orientation:(long long)arg2 ;
+(void)keyboardSetToInputMode:(id)arg1 fromPrevious:(id)arg2 ;
+(void)appAutofillDetectedIncrement;
+(void)showLowercaseKeyplanePreference:(BOOL)arg1 ;
+(void)keyboardExtensionPrimaryLanguageChanged;
+(void)appAutofillDetectedDecrement;
+(void)appAutofillFilled;
+(void)loginPasswordFromKeyboardIncrement;
+(void)signupPasswordFromKeyboardIncrement;
+(void)loginPasswordFromAutofillIncrement;
+(void)signupPasswordFromAutofillIncrement;
+(void)appAutofillCredentialFromSafariUI;
+(void)keyboardPerformanceFromTouchStart:(double)arg1 until:(double)arg2 ;
+(void)keyboardPerformanceFromTouchRelease:(double)arg1 until:(double)arg2 ;
+(void)predictionViewState:(BOOL)arg1 forInputMode:(id)arg2 ;
+(void)inputSwitcherSetPredictionPreference:(BOOL)arg1 ;
+(void)keyboardGestureSetPredictionPreference:(BOOL)arg1 ;
+(void)keyboardGestureSelectedPredictiveInputCandidate;
+(void)selectedPredictiveInputCandidate:(id)arg1 isAutocorrection:(BOOL)arg2 index:(unsigned long long)arg3 ;
+(void)keyboardGestureTwoFingerTap:(BOOL)arg1 withTapCount:(int)arg2 ;
+(void)keyboardGestureOneFingerForcePan:(BOOL)arg1 ;
+(void)keyboardGestureOneFingerForcePress:(BOOL)arg1 withPressCount:(int)arg2 ;
+(void)restAndTypeTriggered;
+(void)appAutofillExtraKeyTapped;
@end

