/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UITextRange, NSString;

@interface UITextReplacement : NSObject {

	UITextRange* _range;
	NSString* _originalText;
	NSString* _replacementText;
	NSString* _menuTitle;
	unsigned _usageTrackingMask;
	/*^block*/id _replacementCompletionBlock;

}

@property (nonatomic,readonly) UITextRange * range;                     //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSString * originalText;                 //@synthesize originalText=_originalText - In the implementation block
@property (nonatomic,readonly) NSString * replacementText;              //@synthesize replacementText=_replacementText - In the implementation block
@property (nonatomic,readonly) NSString * menuTitle;                    //@synthesize menuTitle=_menuTitle - In the implementation block
@property (nonatomic,copy) id replacementCompletionBlock;               //@synthesize replacementCompletionBlock=_replacementCompletionBlock - In the implementation block
@property (assign,nonatomic) unsigned usageTrackingMask;                //@synthesize usageTrackingMask=_usageTrackingMask - In the implementation block
+(id)replacementWithRange:(id)arg1 original:(id)arg2 replacement:(id)arg3 menuTitle:(id)arg4 ;
-(UITextRange *)range;
-(unsigned)usageTrackingMask;
-(NSString *)originalText;
-(void)setUsageTrackingMask:(unsigned)arg1 ;
-(NSString *)replacementText;
-(NSString *)menuTitle;
-(void)didReplaceTextWithTarget:(id)arg1 ;
-(void)setReplacementCompletionBlock:(id)arg1 ;
-(id)replacementCompletionBlock;
@end

