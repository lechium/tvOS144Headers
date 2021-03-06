/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class TIHandwritingStrokes, NSLocale, NSArray, NSString, TIInputManagerHandwriting, CHRecognizer;

@interface RecognizeDrawingOperation : NSOperation {

	TIHandwritingStrokes* _strokes;
	NSLocale* _recognitionLanguage;
	NSArray* _candidates;
	NSString* _history;
	TIInputManagerHandwriting* _im;
	CHRecognizer* _recognizer;

}

@property (nonatomic,retain) NSArray * candidates;                             //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,retain) TIInputManagerHandwriting * manager;              //@synthesize im=_im - In the implementation block
@property (nonatomic,retain) NSString * history;                               //@synthesize history=_history - In the implementation block
@property (nonatomic,retain) CHRecognizer * recognizer;                        //@synthesize recognizer=_recognizer - In the implementation block
+(id)recognitionResultsForStrokes:(id)arg1 withRecognizer:(id)arg2 history:(id)arg3 shouldCancel:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)main;
-(TIInputManagerHandwriting *)manager;
-(void)setManager:(TIInputManagerHandwriting *)arg1 ;
-(NSArray *)candidates;
-(void)setCandidates:(NSArray *)arg1 ;
-(NSString *)history;
-(void)setHistory:(NSString *)arg1 ;
-(CHRecognizer *)recognizer;
-(void)setRecognizer:(CHRecognizer *)arg1 ;
-(id)initWithInputManager:(id)arg1 strokes:(id)arg2 history:(id)arg3 ;
@end

