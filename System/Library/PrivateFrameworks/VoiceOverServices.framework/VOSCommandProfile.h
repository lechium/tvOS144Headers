/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol VOSCommandProfileDelegate;
@class NSMutableSet;

@interface VOSCommandProfile : NSObject <NSSecureCoding> {

	NSMutableSet* _modes;
	id<VOSCommandProfileDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VOSCommandProfileDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_parseProfileProperties:(id)arg1 overlayProperties:(id)arg2 ;
+(void)_addGesturesToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3 ;
+(void)_addKeyboardShortcutsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3 ;
+(void)_addQuickNavShortcutsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3 ;
+(void)_addSlaveCommandsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3 ;
+(BOOL)_overlay:(id)arg1 shouldIncludeItem:(id)arg2 ;
+(id)_profileKeyChordsFromDictionaryValue:(id)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<VOSCommandProfileDelegate>)delegate;
-(void)setDelegate:(id<VOSCommandProfileDelegate>)arg1 ;
-(unsigned long long)availabilityForGesture:(id)arg1 withResolver:(id)arg2 ;
-(id)commandForTouchGesture:(id)arg1 withResolver:(id)arg2 ;
-(BOOL)addGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3 ;
-(BOOL)removeGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3 ;
-(BOOL)addKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3 ;
-(BOOL)removeKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3 ;
-(id)validateCanAddGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3 ;
-(id)validateCanRemoveGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3 ;
-(id)validateCanAddKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3 ;
-(id)validateCanRemoveKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3 ;
-(id)commandForKeyChord:(id)arg1 withResolver:(id)arg2 ;
-(id)allCommandsWithResolver:(id)arg1 ;
-(id)allShortcutBindingsWithResolver:(id)arg1 ;
-(id)userPresentableAllShortcutBindingsWithResolver:(id)arg1 ;
-(id)gestureBindingsForCommand:(id)arg1 withResolver:(id)arg2 ;
-(id)shortcutBindingsForCommand:(id)arg1 withResolver:(id)arg2 ;
-(BOOL)commandHasAnyBindings:(id)arg1 withResolver:(id)arg2 ;
-(unsigned long long)availabilityForShortcut:(id)arg1 withResolver:(id)arg2 ;
-(unsigned long long)availabilityForCommand:(id)arg1 withResolver:(id)arg2 ;
-(BOOL)commandHasModifiedBindingsWhenZoomEnabled:(id)arg1 withResolver:(id)arg2 ;
-(id)initWithProfileProperties:(id)arg1 overlayProperties:(id)arg2 ;
-(id)_initWithModes:(id)arg1 ;
-(id)_profileModeForResolver:(id)arg1 ;
-(id)_resolvedSlaveCommandForProfileCommand:(id)arg1 resolver:(id)arg2 ;
-(id)_profileCommandForCommand:(id)arg1 inMode:(id)arg2 ;
-(id)_profileModeForScreenreaderMode:(id)arg1 ;
@end

