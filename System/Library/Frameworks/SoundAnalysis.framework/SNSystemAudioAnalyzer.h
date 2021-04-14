/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SNSystemAudioAnalyzerProtocol;
@interface SNSystemAudioAnalyzer : NSObject {

	id<SNSystemAudioAnalyzerProtocol> _impl;

}
+(id)selectAppropriateImplForThisProcess;
+(void)configureNewAnalyzersToComputeInThisProcess:(BOOL)arg1 ;
-(id)init;
-(void)start;
-(void)stop;
-(id)initWithImpl:(id)arg1 ;
-(void)removeRequest:(id)arg1 ;
-(void)removeAllRequests;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)addRequestInBackground:(id)arg1 withObserver:(id)arg2 ;
@end
