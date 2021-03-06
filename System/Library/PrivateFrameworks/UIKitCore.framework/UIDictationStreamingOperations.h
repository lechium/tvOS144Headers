/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITextInput;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray;

@interface UIDictationStreamingOperations : NSObject {

	double _timeAfterInsertion;
	double _timeAfterSelectRange;
	id<UITextInput> _document;
	NSMutableArray* _operations;

}

@property (nonatomic,retain) NSMutableArray * operations;              //@synthesize operations=_operations - In the implementation block
-(id)init;
-(BOOL)isEmpty;
-(NSMutableArray *)operations;
-(void)popAndInvoke;
-(id)pop;
-(void)setDocument:(id)arg1 ;
-(void)setOperations:(NSMutableArray *)arg1 ;
-(BOOL)hasOperations;
-(BOOL)isNotEmpty;
-(void)pushSpeechOperation:(id)arg1 ;
-(void)clearOperations;
-(void)performSelectRangeForSpeech:(id)arg1 ;
-(void)pushSpeechOperationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)_performReplaceSelectedText:(id)arg1 ;
-(double)delayAfterSelector:(SEL)arg1 ;
-(void)dictationWillBeginInDocument:(id)arg1 ;
-(void)pushSelectRangeForSpeech:(NSRange)arg1 ;
-(void)pushInsertTextForSpeech:(id)arg1 ;
-(void)pushReplaceSelectionWithText:(id)arg1 ;
-(void)willEndEditingInInputDelegate:(id)arg1 ;
-(unsigned long long)selectionChangeDelta;
@end

