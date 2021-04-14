/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, UIImage;


@protocol _UIMenuLeaf <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIImage * image; 
@property (nonatomic,copy) NSString * discoverabilityTitle; 
@property (assign,nonatomic) unsigned long long attributes; 
@property (assign,nonatomic) long long state; 
@property (nonatomic,readonly) BOOL requiresAuthenticatedInput; 
@required
-(long long)state;
-(void)setState:(long long)arg1;
-(unsigned long long)attributes;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setAttributes:(unsigned long long)arg1;
-(UIImage *)image;
-(void)setImage:(id)arg1;
-(void)setDiscoverabilityTitle:(id)arg1;
-(BOOL)requiresAuthenticatedInput;
-(id)_leafAlternates;
-(id)_leafKeyInput;
-(long long)_leafKeyModifierFlags;
-(BOOL)_isDefaultCommand;
-(void)_performWithTarget:(id)arg1;
-(id)_resolvedTargetFromFirstTarget:(id)arg1;
-(id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
-(NSString *)discoverabilityTitle;

@end

