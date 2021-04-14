/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface BWStillImageProcessorOutputRouter : NSObject {

	/*^block*/id _outputSampleBufferRouter;
	NSMutableArray* _bypassedProcessorTypes;

}

@property (nonatomic,readonly) id outputSampleBufferRouter;                    //@synthesize outputSampleBufferRouter=_outputSampleBufferRouter - In the implementation block
@property (nonatomic,readonly) NSArray * bypassedProcessorsTypes; 
-(void)dealloc;
-(id)initWithOutputSampleBufferRouter:(/*^block*/id)arg1 ;
-(id)initByRetainingOutputSampleBufferRouter:(/*^block*/id)arg1 ;
-(void)addBypassedProcessorType:(unsigned long long)arg1 ;
-(NSArray *)bypassedProcessorsTypes;
-(id)outputSampleBufferRouter;
@end

