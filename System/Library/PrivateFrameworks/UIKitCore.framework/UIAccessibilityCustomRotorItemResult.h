/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSObject;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSUUID, UITextRange, NSArray;

@interface UIAccessibilityCustomRotorItemResult : NSObject {

	NSUUID* uuid;
	id<NSObject> _targetElement;
	UITextRange* _targetRange;

}

@property (nonatomic,retain) NSArray * targetTextMarkerRange; 
@property (assign,nonatomic) NSRange targetNSRange; 
@property (nonatomic,retain) NSUUID * uuid; 
@property (assign,nonatomic,__weak) id<NSObject> targetElement;              //@synthesize targetElement=_targetElement - In the implementation block
@property (nonatomic,retain) UITextRange * targetRange;                      //@synthesize targetRange=_targetRange - In the implementation block
-(void)setTargetTextMarkerRange:(NSArray *)arg1 ;
-(NSArray *)targetTextMarkerRange;
-(id)initWithTargetElement:(id)arg1 targetRange:(id)arg2 targetTextMarkerRange:(id)arg3 ;
-(void)setTargetNSRange:(NSRange)arg1 ;
-(NSRange)targetNSRange;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)initWithTargetElement:(id)arg1 targetRange:(id)arg2 ;
-(id<NSObject>)targetElement;
-(void)setTargetElement:(id<NSObject>)arg1 ;
-(UITextRange *)targetRange;
-(void)setTargetRange:(UITextRange *)arg1 ;
@end

