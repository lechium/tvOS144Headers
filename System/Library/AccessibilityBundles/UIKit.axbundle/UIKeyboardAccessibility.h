/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardAccessibility_super.h>

@interface UIKeyboardAccessibility : __UIKeyboardAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(void)activate;
-(void)deactivate;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(CGRect)accessibilityFrame;
-(void)insertDictationResult:(id)arg1 ;
-(void)dictationRecognitionFailed;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)_iosAccessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3 ;
-(long long)accessibilityContainerType;
-(id)_accessibilityNativeFocusPreferredElement;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(BOOL)_accessibilityKeyboardIsContinuousPathTracking;
-(BOOL)_accessibilityKeyboardIsContinuousPathAvailable;
-(CGRect)_accessibilityDirectInteractionFrame;
-(BOOL)_accessibilityTriggerDictationFromPath:(id)arg1 ;
-(BOOL)_axDeleteByCharacter;
-(BOOL)_axDeleteByWord;
-(BOOL)_axAdvanceKeyboardPlane:(BOOL)arg1 ;
-(BOOL)_axCommitWord;
-(BOOL)_axEnterTextValue:(id)arg1 ;
-(BOOL)_axAdvanceKeyboardSuggestion:(BOOL)arg1 ;
-(BOOL)_axAdvanceInternationalKeyboard:(BOOL)arg1 ;
-(BOOL)_axShift;
-(BOOL)_axShiftLock;
-(BOOL)_accessibilitySwitchToGestureMode:(BOOL)arg1 ;
-(void)_voiceOverStatus:(id)arg1 ;
@end
