/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIAtomTextViewAtomLayout <NSObject>
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long selectionStyle; 
@property (nonatomic,readonly) CGRect selectionBounds; 
@property (nonatomic,readonly) long long baseWritingDirection; 
@optional
-(long long)baseWritingDirection;

@required
-(void)setEnabled:(BOOL)arg1;
-(BOOL)isEnabled;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
-(CGRect)selectionBounds;
-(void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2;

@end
