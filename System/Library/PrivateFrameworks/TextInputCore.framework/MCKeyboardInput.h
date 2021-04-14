/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray;

@interface MCKeyboardInput : NSObject <NSCopying> {

	NSMutableArray* _mutableInputs;
	unsigned long long _composingInputIndex;

}

@property (nonatomic,readonly) NSMutableArray * mutableInputs;                    //@synthesize mutableInputs=_mutableInputs - In the implementation block
@property (assign,nonatomic) unsigned long long composingInputIndex;              //@synthesize composingInputIndex=_composingInputIndex - In the implementation block
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,retain) MCKeyboardInput * composingInput; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSArray *)inputs;
-(MCKeyboardInput *)composingInput;
-(NSMutableArray *)mutableInputs;
-(void)setComposingInput:(MCKeyboardInput *)arg1 ;
-(BOOL)canComposeNew:(id)arg1 ;
-(void)composeNew:(id)arg1 ;
-(void)removeAllInputs;
-(void)removeComposingInput;
-(void)removeInputAtIndex:(unsigned long long)arg1 ;
-(void)replaceInputAtIndex:(unsigned long long)arg1 with:(id)arg2 ;
-(void)replaceComposingInputWith:(id)arg1 ;
-(void)insertInput:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)hasKindOf:(Class)arg1 ;
-(unsigned long long)composingInputIndex;
-(void)setComposingInputIndex:(unsigned long long)arg1 ;
-(BOOL)hasDrawInput;
-(id)asInlineText;
-(id)asCommittedText;
-(unsigned long long)asInlineTextCursorIndex;
-(BOOL)hasRemainingComposingInput;
-(id)asSearchString;
-(id)asMecabraGestures:(BOOL*)arg1 ;
-(void)_addNearbyKeys:(id)arg1 to:(void*)arg2 ;
-(id)_asInputStringWithCursorIndex:(unsigned long long*)arg1 remainingComposingInputIndex:(unsigned long long*)arg2 typeInputs:(id)arg3 forSearch:(BOOL)arg4 suffix:(id)arg5 ;
@end

