/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSSpecifier.h>

@class NSString;

@interface PSConfirmationSpecifier : PSSpecifier {

	NSString* _title;
	NSString* _prompt;
	NSString* _okButton;
	NSString* _cancelButton;
	NSString* _alternateButton;

}

@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * prompt;                       //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,retain) NSString * okButton;                     //@synthesize okButton=_okButton - In the implementation block
@property (nonatomic,retain) NSString * alternateButton;              //@synthesize alternateButton=_alternateButton - In the implementation block
@property (nonatomic,retain) NSString * cancelButton;                 //@synthesize cancelButton=_cancelButton - In the implementation block
+(id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7 ;
+(id)specifierWithSpecifier:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isDestructive;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)okButton;
-(NSString *)alternateButton;
-(BOOL)isAlternateDestructive;
-(NSString *)cancelButton;
-(BOOL)isEqualToSpecifier:(id)arg1 ;
-(void)setOkButton:(NSString *)arg1 ;
-(void)setAlternateButton:(NSString *)arg1 ;
-(void)setCancelButton:(NSString *)arg1 ;
-(void)setupWithDictionary:(id)arg1 ;
@end

