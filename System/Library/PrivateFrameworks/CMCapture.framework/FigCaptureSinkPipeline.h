/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/FigCapturePipeline.h>

@class NSString, BWNodeOutput;

@interface FigCaptureSinkPipeline : FigCapturePipeline {

	NSString* _sinkID;
	BWNodeOutput* _upstreamOutput;

}

@property (nonatomic,readonly) NSString * sinkID;                  //@synthesize sinkID=_sinkID - In the implementation block
@property (assign,nonatomic) BOOL discardsSampleData; 
-(void)dealloc;
-(NSString *)sinkID;
-(void)setDiscardsSampleData:(BOOL)arg1 ;
-(BOOL)discardsSampleData;
-(id)initWithGraph:(id)arg1 name:(id)arg2 sinkID:(id)arg3 ;
-(void)setUpstreamOutput:(id)arg1 ;
@end
