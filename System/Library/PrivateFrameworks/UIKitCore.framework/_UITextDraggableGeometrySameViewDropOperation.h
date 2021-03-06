/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UITextDraggableGeometrySameViewDropOperation.h>

@class NSArray, UITextRange, NSAttributedString, NSString;

@interface _UITextDraggableGeometrySameViewDropOperation : NSObject <UITextDraggableGeometrySameViewDropOperation> {

	NSArray* _sourceRanges;
	UITextRange* _targetRange;
	NSAttributedString* _text;
	unsigned long long _operation;

}

@property (nonatomic,retain) NSArray * sourceRanges;                    //@synthesize sourceRanges=_sourceRanges - In the implementation block
@property (nonatomic,retain) UITextRange * targetRange;                 //@synthesize targetRange=_targetRange - In the implementation block
@property (nonatomic,retain) NSAttributedString * text;                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned long long operation;              //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)operation;
-(void)setOperation:(unsigned long long)arg1 ;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(UITextRange *)targetRange;
-(void)setTargetRange:(UITextRange *)arg1 ;
-(NSArray *)sourceRanges;
-(void)setSourceRanges:(NSArray *)arg1 ;
@end

