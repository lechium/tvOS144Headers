/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, CSBeepCancellerDelegate;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSObject, NSDictionary;

@interface CSBeepCanceller : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unique_ptr<BatchBeepCanceller, std::__1::default_delete<BatchBeepCanceller> >* _beepCanceller;
	vector<float, std::__1::allocator<float> >* _beepFloatVec;
	vector<float, std::__1::allocator<float> >* _floatBuffer;
	vector<short, std::__1::allocator<short> >* _shortBuffer;
	unsigned long long _numTotalInputSamples;
	unsigned long long _numTotalOutputSamples;
	id<CSBeepCancellerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSBeepCancellerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * metrics; 
-(id)init;
-(id<CSBeepCancellerDelegate>)delegate;
-(void)setDelegate:(id<CSBeepCancellerDelegate>)arg1 ;
-(void)reset;
-(void)flush;
-(NSDictionary *)metrics;
-(void)cancelBeepFromSamples:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(void)willBeep;
@end

