/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AXSSKeyChord;

@interface AXSSKeyboardEvent : NSObject <NSCopying> {

	BOOL _isDownEvent;
	BOOL _isRepeatEvent;
	BOOL _isModifierChangedEvent;
	BOOL _isLeftCommandDown;
	BOOL _isRightCommandDown;
	BOOL _isLeftOptionDown;
	BOOL _isRightOptionDown;
	BOOL _isLeftControlDown;
	BOOL _isRightControlDown;
	BOOL _isLeftShiftDown;
	BOOL _isRightShiftDown;
	BOOL _isCapsLockDown;
	BOOL _isFnDown;
	unsigned long long _keyCode;
	NSString* _unicodeCharacter;
	NSString* _backupUnicodeCharacter;

}

@property (assign,nonatomic) unsigned long long keyCode;                   //@synthesize keyCode=_keyCode - In the implementation block
@property (nonatomic,copy) NSString * unicodeCharacter;                    //@synthesize unicodeCharacter=_unicodeCharacter - In the implementation block
@property (nonatomic,copy) NSString * backupUnicodeCharacter;              //@synthesize backupUnicodeCharacter=_backupUnicodeCharacter - In the implementation block
@property (assign,nonatomic) BOOL isDownEvent;                             //@synthesize isDownEvent=_isDownEvent - In the implementation block
@property (assign,nonatomic) BOOL isRepeatEvent;                           //@synthesize isRepeatEvent=_isRepeatEvent - In the implementation block
@property (assign,nonatomic) BOOL isModifierChangedEvent;                  //@synthesize isModifierChangedEvent=_isModifierChangedEvent - In the implementation block
@property (nonatomic,readonly) BOOL isCommandDown; 
@property (assign,nonatomic) BOOL isLeftCommandDown;                       //@synthesize isLeftCommandDown=_isLeftCommandDown - In the implementation block
@property (assign,nonatomic) BOOL isRightCommandDown;                      //@synthesize isRightCommandDown=_isRightCommandDown - In the implementation block
@property (nonatomic,readonly) BOOL isOptionDown; 
@property (assign,nonatomic) BOOL isLeftOptionDown;                        //@synthesize isLeftOptionDown=_isLeftOptionDown - In the implementation block
@property (assign,nonatomic) BOOL isRightOptionDown;                       //@synthesize isRightOptionDown=_isRightOptionDown - In the implementation block
@property (nonatomic,readonly) BOOL isControlDown; 
@property (assign,nonatomic) BOOL isLeftControlDown;                       //@synthesize isLeftControlDown=_isLeftControlDown - In the implementation block
@property (assign,nonatomic) BOOL isRightControlDown;                      //@synthesize isRightControlDown=_isRightControlDown - In the implementation block
@property (nonatomic,readonly) BOOL isShiftDown; 
@property (assign,nonatomic) BOOL isLeftShiftDown;                         //@synthesize isLeftShiftDown=_isLeftShiftDown - In the implementation block
@property (assign,nonatomic) BOOL isRightShiftDown;                        //@synthesize isRightShiftDown=_isRightShiftDown - In the implementation block
@property (assign,nonatomic) BOOL isCapsLockDown;                          //@synthesize isCapsLockDown=_isCapsLockDown - In the implementation block
@property (assign,nonatomic) BOOL isFnDown;                                //@synthesize isFnDown=_isFnDown - In the implementation block
@property (nonatomic,readonly) long long modifierMask; 
@property (nonatomic,readonly) AXSSKeyChord * keyChord; 
@property (nonatomic,readonly) AXSSKeyChord * backupKeyChord; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)keyCode;
-(void)setKeyCode:(unsigned long long)arg1 ;
-(BOOL)isShiftDown;
-(BOOL)isDownEvent;
-(NSString *)unicodeCharacter;
-(void)setUnicodeCharacter:(NSString *)arg1 ;
-(NSString *)backupUnicodeCharacter;
-(void)setBackupUnicodeCharacter:(NSString *)arg1 ;
-(void)setIsDownEvent:(BOOL)arg1 ;
-(BOOL)isRepeatEvent;
-(void)setIsRepeatEvent:(BOOL)arg1 ;
-(BOOL)isModifierChangedEvent;
-(void)setIsModifierChangedEvent:(BOOL)arg1 ;
-(BOOL)isLeftCommandDown;
-(void)setIsLeftCommandDown:(BOOL)arg1 ;
-(BOOL)isRightCommandDown;
-(void)setIsRightCommandDown:(BOOL)arg1 ;
-(BOOL)isLeftOptionDown;
-(void)setIsLeftOptionDown:(BOOL)arg1 ;
-(BOOL)isRightOptionDown;
-(void)setIsRightOptionDown:(BOOL)arg1 ;
-(BOOL)isLeftShiftDown;
-(void)setIsLeftShiftDown:(BOOL)arg1 ;
-(BOOL)isRightShiftDown;
-(void)setIsRightShiftDown:(BOOL)arg1 ;
-(BOOL)isFnDown;
-(void)setIsFnDown:(BOOL)arg1 ;
-(BOOL)isCapsLockDown;
-(void)setIsCapsLockDown:(BOOL)arg1 ;
-(BOOL)isLeftControlDown;
-(BOOL)isRightControlDown;
-(BOOL)isCommandDown;
-(BOOL)isOptionDown;
-(BOOL)isControlDown;
-(id)_keyChordForUnicodeCharacter:(id)arg1 ;
-(long long)modifierMask;
-(AXSSKeyChord *)keyChord;
-(AXSSKeyChord *)backupKeyChord;
-(void)setIsLeftControlDown:(BOOL)arg1 ;
-(void)setIsRightControlDown:(BOOL)arg1 ;
@end

